
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct strbuf {char* buf; int len; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (char*,int,int ,int *) ;
 int FUNC_5 (long) ;
 int FUNC_6 (char const*,char**,int) ;
 char* FUNC_7 (int ,long,int ) ;
 scalar_t__ FUNC_8 (char*,char*,char const**) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (struct strbuf*,int,int *) ;
 int FUNC_11 (struct strbuf*,int *) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (struct strbuf*) ;
 long FUNC_14 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_15(FILE *VAR_3, FILE *VAR_4, int VAR_5)
{
 struct strbuf VAR_6 = VAR_1;
 int VAR_7 = 0;

 while (!FUNC_11(&VAR_6, VAR_4)) {
  const char *VAR_8;

  if (FUNC_8(VAR_6.buf, "# User ", &VAR_8))
   FUNC_3(VAR_3, "From: %s\n", VAR_8);
  else if (FUNC_8(VAR_6.buf, "# Date ", &VAR_8)) {
   timestamp_t VAR_9;
   long VAR_10, VAR_11;
   char *VAR_12;

   VAR_2 = 0;
   VAR_9 = FUNC_6(VAR_8, &VAR_12, 10);
   if (VAR_2) {
    VAR_7 = FUNC_2(FUNC_1("invalid timestamp"));
    goto exit;
   }

   if (!FUNC_8(VAR_12, " ", &VAR_8)) {
    VAR_7 = FUNC_2(FUNC_1("invalid Date line"));
    goto exit;
   }

   VAR_2 = 0;
   VAR_10 = FUNC_14(VAR_8, &VAR_12, 10);
   if (VAR_2) {
    VAR_7 = FUNC_2(FUNC_1("invalid timezone offset"));
    goto exit;
   }

   if (*VAR_12) {
    VAR_7 = FUNC_2(FUNC_1("invalid Date line"));
    goto exit;
   }






   VAR_11 = FUNC_5(VAR_10) / 3600 * 100 + FUNC_5(VAR_10) % 3600 / 60;
   if (VAR_10 > 0)
    VAR_11 = -VAR_11;

   FUNC_3(VAR_3, "Date: %s\n", FUNC_7(VAR_9, VAR_11, FUNC_0(VAR_0)));
  } else if (FUNC_9(VAR_6.buf, "# ")) {
   continue;
  } else {
   FUNC_3(VAR_3, "\n%s\n", VAR_6.buf);
   break;
  }
 }

 FUNC_13(&VAR_6);
 while (FUNC_10(&VAR_6, 8192, VAR_4) > 0) {
  FUNC_4(VAR_6.buf, 1, VAR_6.len, VAR_3);
  FUNC_13(&VAR_6);
 }
exit:
 FUNC_12(&VAR_6);
 return VAR_7;
}
