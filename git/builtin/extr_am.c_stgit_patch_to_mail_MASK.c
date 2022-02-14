
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; int len; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (char*,int,int ,int *) ;
 scalar_t__ FUNC_2 (char const*,char*,char const**) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (struct strbuf*,int,int *) ;
 int FUNC_6 (struct strbuf*,int *) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*) ;

__attribute__((used)) static int FUNC_9(FILE *VAR_1, FILE *VAR_2, int VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 int VAR_5 = 0;

 while (!FUNC_6(&VAR_4, VAR_2)) {
  const char *VAR_6;

  if (FUNC_4(VAR_4.buf))
   continue;
  else if (FUNC_2(VAR_4.buf, "Author:", &VAR_6))
   FUNC_0(VAR_1, "From:%s\n", VAR_6);
  else if (FUNC_3(VAR_4.buf, "From") || FUNC_3(VAR_4.buf, "Date"))
   FUNC_0(VAR_1, "%s\n", VAR_4.buf);
  else if (!VAR_5) {
   FUNC_0(VAR_1, "Subject: %s\n", VAR_4.buf);
   VAR_5 = 1;
  } else {
   FUNC_0(VAR_1, "\n%s\n", VAR_4.buf);
   break;
  }
 }

 FUNC_8(&VAR_4);
 while (FUNC_5(&VAR_4, 8192, VAR_2) > 0) {
  FUNC_1(VAR_4.buf, 1, VAR_4.len, VAR_1);
  FUNC_8(&VAR_4);
 }

 FUNC_7(&VAR_4);
 return 0;
}
