
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {char* name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 struct submodule* FUNC_3 (int ,int *,char const*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 const struct submodule *VAR_5;

 if (VAR_2 != 2)
  FUNC_4(FUNC_0("git submodule--helper name <path>"));

 VAR_5 = FUNC_3(VAR_1, &VAR_0, VAR_3[1]);

 if (!VAR_5)
  FUNC_1(FUNC_0("no submodule mapping found in .gitmodules for path '%s'"),
      VAR_3[1]);

 FUNC_2("%s\n", VAR_5->name);

 return 0;
}
