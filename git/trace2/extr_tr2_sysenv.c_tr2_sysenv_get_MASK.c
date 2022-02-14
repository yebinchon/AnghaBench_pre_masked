
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum tr2_sysenv_variable { ____Placeholder_tr2_sysenv_variable } tr2_sysenv_variable ;
struct TYPE_2__ {int getenv_called; char const* value; int env_var_name; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 char const* FUNC_3 (char const*) ;

const char *FUNC_4(enum tr2_sysenv_variable VAR_2)
{
 if (VAR_2 >= VAR_0)
  FUNC_0("tr2_sysenv_get invalid var '%d'", VAR_2);

 if (!VAR_1[VAR_2].getenv_called) {
  const char *VAR_3 = FUNC_2(VAR_1[VAR_2].env_var_name);
  if (VAR_3 && *VAR_3) {
   FUNC_1(VAR_1[VAR_2].value);
   VAR_1[VAR_2].value = FUNC_3(VAR_3);
  }
  VAR_1[VAR_2].getenv_called = 1;
 }

 return VAR_1[VAR_2].value;
}
