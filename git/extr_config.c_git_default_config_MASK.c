
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*,char const*,void*) ;
 int FUNC_8 (char const*,char const*) ;
 int FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const*,char const*) ;
 int FUNC_11 (char const*,char const*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int FUNC_13 (char const*,char*) ;

int FUNC_14(const char *VAR_6, const char *VAR_7, void *VAR_8)
{
 if (FUNC_12(VAR_6, "core."))
  return FUNC_7(VAR_6, VAR_7, VAR_8);

 if (FUNC_12(VAR_6, "user.") ||
     FUNC_12(VAR_6, "author.") ||
     FUNC_12(VAR_6, "committer."))
  return FUNC_11(VAR_6, VAR_7, VAR_8);

 if (FUNC_12(VAR_6, "i18n."))
  return FUNC_8(VAR_6, VAR_7);

 if (FUNC_12(VAR_6, "branch."))
  return FUNC_6(VAR_6, VAR_7);

 if (FUNC_12(VAR_6, "push."))
  return FUNC_10(VAR_6, VAR_7);

 if (FUNC_12(VAR_6, "mailmap."))
  return FUNC_9(VAR_6, VAR_7);

 if (FUNC_12(VAR_6, "advice.") || FUNC_12(VAR_6, "color.advice"))
  return FUNC_5(VAR_6, VAR_7);

 if (!FUNC_13(VAR_6, "pager.color") || !FUNC_13(VAR_6, "color.pager")) {
  VAR_5 = FUNC_2(VAR_6,VAR_7);
  return 0;
 }

 if (!FUNC_13(VAR_6, "pack.packsizelimit")) {
  VAR_4 = FUNC_4(VAR_6, VAR_7);
  return 0;
 }

 if (!FUNC_13(VAR_6, "pack.compression")) {
  int VAR_9 = FUNC_3(VAR_6, VAR_7);
  if (VAR_9 == -1)
   VAR_9 = VAR_1;
  else if (VAR_9 < 0 || VAR_9 > VAR_0)
   FUNC_1(FUNC_0("bad pack compression level %d"), VAR_9);
  VAR_2 = VAR_9;
  VAR_3 = 1;
  return 0;
 }


 return 0;
}
