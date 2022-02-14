
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char*,char const**) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_5(void)
{
 const char *VAR_0;

 if (FUNC_2("pull.ff", &VAR_0))
  return ((void*)0);

 switch (FUNC_3(VAR_0)) {
 case 0:
  return "--no-ff";
 case 1:
  return "--ff";
 }

 if (!FUNC_4(VAR_0, "only"))
  return "--ff-only";

 FUNC_1(FUNC_0("Invalid value for pull.ff: %s"), VAR_0);
}
