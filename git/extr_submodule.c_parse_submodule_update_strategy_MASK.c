
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_update_strategy {int type; int * command; } ;
typedef enum submodule_update_type { ____Placeholder_submodule_update_type } submodule_update_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_2,
  struct submodule_update_strategy *VAR_3)
{
 enum submodule_update_type VAR_4;

 FUNC_0((void*)VAR_3->command);
 VAR_3->command = ((void*)0);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == VAR_1)
  return -1;

 VAR_3->type = VAR_4;
 if (VAR_4 == VAR_0)
  VAR_3->command = FUNC_2(VAR_2 + 1);

 return 0;
}
