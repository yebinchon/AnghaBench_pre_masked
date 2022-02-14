
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 char const* FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int*,char const*,int) ;
 struct option FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 int FUNC_8 (int ,char const*) ;
 int VAR_1 ;
 int FUNC_9 (char const* const*,struct option*) ;

__attribute__((used)) static int FUNC_10(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 enum {
  CHECK_WRITEABLE = 1,
  DO_UNSET = 2
 } VAR_5 = 0;

 struct option VAR_6[] = {
  FUNC_1(0, "check-writeable", &VAR_5,
       FUNC_0("check if it is safe to write to the .gitmodules file"),
       CHECK_WRITEABLE),
  FUNC_1(0, "unset", &VAR_5,
       FUNC_0("unset the config in the .gitmodules file"),
       DO_UNSET),
  FUNC_2()
 };
 const char *const VAR_7[] = {
  FUNC_0("git submodule--helper config <name> [<value>]"),
  FUNC_0("git submodule--helper config --unset <name>"),
  FUNC_0("git submodule--helper config --check-writeable"),
  ((void*)0)
 };

 VAR_2 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_6,
        VAR_7, VAR_0);

 if (VAR_2 == 1 && VAR_5 == CHECK_WRITEABLE)
  return FUNC_6() ? 0 : -1;


 if (VAR_2 == 2 && VAR_5 != DO_UNSET)
  return FUNC_8(VAR_1, VAR_3[1]);


 if (VAR_2 == 3 || (VAR_2 == 2 && VAR_5 == DO_UNSET)) {
  const char *VAR_8 = (VAR_2 == 3) ? VAR_3[2] : ((void*)0);

  if (!FUNC_6())
   FUNC_5(FUNC_3("please make sure that the .gitmodules file is in the working tree"));

  return FUNC_4(VAR_3[1], VAR_8);
 }

 FUNC_9(VAR_7, VAR_6);
}
