
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,char const*,char const*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_6 (int,char const**) ;
 int FUNC_7 (char const***,int*,int *) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int*,char const***) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (char const*,char*,char const**) ;
 int VAR_4 ;
 char* FUNC_14 (scalar_t__) ;
 int FUNC_15 (char const**) ;

int FUNC_16(int VAR_5, const char **VAR_6)
{
 const char *VAR_7;
 int VAR_8 = 0;

 VAR_7 = VAR_6[0];
 if (!VAR_7)
  VAR_7 = "git-help";
 else {
  const char *VAR_9 = FUNC_4(VAR_7);
  if (VAR_9)
   VAR_7 = VAR_9 + 1;
 }

 FUNC_15(VAR_6);
 if (FUNC_13(VAR_7, "git-", &VAR_7)) {
  VAR_6[0] = VAR_7;
  FUNC_6(VAR_5, VAR_6);
  FUNC_2(FUNC_0("cannot handle %s as a builtin"), VAR_7);
 }


 VAR_6++;
 VAR_5--;
 FUNC_7(&VAR_6, &VAR_5, ((void*)0));
 if (VAR_5 > 0) {

  FUNC_13(VAR_6[0], "--", &VAR_6[0]);
 } else {

  FUNC_1();
  FUNC_10(FUNC_0("usage: %s\n\n"), VAR_3);
  FUNC_9();
  FUNC_10("\n%s\n", FUNC_0(VAR_2));
  FUNC_3(1);
 }
 VAR_7 = VAR_6[0];







 FUNC_12();

 while (1) {
  int VAR_10 = FUNC_11(&VAR_5, &VAR_6);
  if (VAR_1 != VAR_0)
   break;
  if (VAR_10) {
   FUNC_5(VAR_4, FUNC_0("expansion of alias '%s' failed; "
       "'%s' is not a git command\n"),
    VAR_7, VAR_6[0]);
   FUNC_3(1);
  }
  if (!VAR_8) {
   VAR_7 = VAR_6[0] = FUNC_8(VAR_7);
   VAR_8 = 1;
  } else
   break;
 }

 FUNC_5(VAR_4, FUNC_0("failed to run command '%s': %s\n"),
  VAR_7, FUNC_14(VAR_1));

 return 1;
}
