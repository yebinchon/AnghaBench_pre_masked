
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int len; int buf; } ;
struct stat {int st_mode; } ;
struct dirent {int d_name; } ;
struct TYPE_2__ {int string; } ;
typedef int DIR ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 struct string_list VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct strbuf*) ;
 scalar_t__ FUNC_5 (int ,struct stat*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,char const*,struct strbuf*) ;
 struct dirent* FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct strbuf*,int ) ;
 int FUNC_12 (struct strbuf*,char) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (struct strbuf*,int) ;
 int FUNC_15 (struct string_list*,int ) ;
 int FUNC_16 (struct string_list*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,int ) ;

__attribute__((used)) static int FUNC_19(struct strbuf *VAR_10, const char *VAR_11, int VAR_12,
  int VAR_13, int VAR_14, int *VAR_15)
{
 DIR *VAR_16;
 struct strbuf VAR_17 = VAR_1;
 struct dirent *VAR_18;
 int VAR_19 = 0, VAR_20 = 0, VAR_21 = 1, VAR_22 = VAR_10->len, VAR_23;
 struct string_list VAR_24 = VAR_2;

 *VAR_15 = 1;

 if ((VAR_12 & VAR_0) &&
     FUNC_4(VAR_10)) {
  if (!VAR_14) {
   FUNC_8(VAR_10->buf, VAR_11, &VAR_17);
   FUNC_7(VAR_13 ? FUNC_1(VAR_9) : FUNC_1(VAR_5),
     VAR_17.buf);
  }

  *VAR_15 = 0;
  goto out;
 }

 VAR_16 = FUNC_6(VAR_10->buf);
 if (!VAR_16) {

  VAR_19 = VAR_13 ? 0 : FUNC_10(VAR_10->buf);
  if (VAR_19) {
   int VAR_25 = VAR_3;
   FUNC_8(VAR_10->buf, VAR_11, &VAR_17);
   VAR_3 = VAR_25;
   FUNC_18(FUNC_1(VAR_7), VAR_17.buf);
   *VAR_15 = 0;
  }
  VAR_20 = VAR_19;
  goto out;
 }

 FUNC_12(VAR_10, '/');

 VAR_23 = VAR_10->len;
 while ((VAR_18 = FUNC_9(VAR_16)) != ((void*)0)) {
  struct stat VAR_26;
  if (FUNC_3(VAR_18->d_name))
   continue;

  FUNC_14(VAR_10, VAR_23);
  FUNC_11(VAR_10, VAR_18->d_name);
  if (FUNC_5(VAR_10->buf, &VAR_26))
   FUNC_18(FUNC_1(VAR_6), VAR_10->buf);
  else if (FUNC_0(VAR_26.st_mode)) {
   if (FUNC_19(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, &VAR_21))
    VAR_20 = 1;
   if (VAR_21) {
    FUNC_8(VAR_10->buf, VAR_11, &VAR_17);
    FUNC_15(&VAR_24, VAR_17.buf);
   } else
    *VAR_15 = 0;
   continue;
  } else {
   VAR_19 = VAR_13 ? 0 : FUNC_17(VAR_10->buf);
   if (!VAR_19) {
    FUNC_8(VAR_10->buf, VAR_11, &VAR_17);
    FUNC_15(&VAR_24, VAR_17.buf);
   } else {
    int VAR_27 = VAR_3;
    FUNC_8(VAR_10->buf, VAR_11, &VAR_17);
    VAR_3 = VAR_27;
    FUNC_18(FUNC_1(VAR_7), VAR_17.buf);
    *VAR_15 = 0;
    VAR_20 = 1;
   }
   continue;
  }


  *VAR_15 = 0;
  VAR_20 = 1;
  break;
 }
 FUNC_2(VAR_16);

 FUNC_14(VAR_10, VAR_22);

 if (*VAR_15) {
  VAR_19 = VAR_13 ? 0 : FUNC_10(VAR_10->buf);
  if (!VAR_19)
   *VAR_15 = 1;
  else {
   int VAR_28 = VAR_3;
   FUNC_8(VAR_10->buf, VAR_11, &VAR_17);
   VAR_3 = VAR_28;
   FUNC_18(FUNC_1(VAR_7), VAR_17.buf);
   *VAR_15 = 0;
   VAR_20 = 1;
  }
 }

 if (!*VAR_15 && !VAR_14) {
  int VAR_29;
  for (VAR_29 = 0; VAR_29 < VAR_24.nr; VAR_29++)
   FUNC_7(VAR_13 ? FUNC_1(VAR_8) : FUNC_1(VAR_4), VAR_24.items[VAR_29].string);
 }
out:
 FUNC_13(&VAR_17);
 FUNC_16(&VAR_24, 0);
 return VAR_20;
}
