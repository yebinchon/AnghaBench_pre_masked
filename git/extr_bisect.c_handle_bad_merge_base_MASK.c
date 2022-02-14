
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,char*,char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (int *,char) ;
 char* FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (char*,char*) ;
 char* VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static void FUNC_7(void)
{
 if (FUNC_3(VAR_0)) {
  char *VAR_5 = FUNC_5(VAR_0);
  char *VAR_6 = FUNC_4(&VAR_1, ' ');
  if (!FUNC_6(VAR_3, "bad") && !FUNC_6(VAR_4, "good")) {
   FUNC_2(VAR_2, FUNC_0("The merge base %s is bad.\n"
    "This means the bug has been fixed "
    "between %s and [%s].\n"),
    VAR_5, VAR_5, VAR_6);
  } else if (!FUNC_6(VAR_3, "new") && !FUNC_6(VAR_4, "old")) {
   FUNC_2(VAR_2, FUNC_0("The merge base %s is new.\n"
    "The property has changed "
    "between %s and [%s].\n"),
    VAR_5, VAR_5, VAR_6);
  } else {
   FUNC_2(VAR_2, FUNC_0("The merge base %s is %s.\n"
    "This means the first '%s' commit is "
    "between %s and [%s].\n"),
    VAR_5, VAR_3, VAR_4, VAR_5, VAR_6);
  }
  FUNC_1(3);
 }

 FUNC_2(VAR_2, FUNC_0("Some %s revs are not ancestors of the %s rev.\n"
  "git bisect cannot work properly in this case.\n"
  "Maybe you mistook %s and %s revs?\n"),
  VAR_4, VAR_3, VAR_4, VAR_3);
 FUNC_1(1);
}
