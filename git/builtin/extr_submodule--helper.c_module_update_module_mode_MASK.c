
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_update_strategy {int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char const*,char const*,struct submodule_update_strategy*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_4 (struct submodule_update_strategy*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 const char *VAR_6, *VAR_7 = ((void*)0);
 int VAR_8;
 struct submodule_update_strategy VAR_9 = { .type = VAR_0 };

 if (VAR_3 < 3 || VAR_3 > 4)
  FUNC_1("submodule--helper update-module-clone expects <just-cloned> <path> [<update>]");

 VAR_8 = FUNC_3("just_cloned", VAR_4[1]);
 VAR_6 = VAR_4[2];

 if (VAR_3 == 4)
  VAR_7 = VAR_4[3];

 FUNC_0(VAR_2,
         VAR_8, VAR_6, VAR_7,
         &VAR_9);
 FUNC_2(FUNC_4(&VAR_9), VAR_1);

 return 0;
}
