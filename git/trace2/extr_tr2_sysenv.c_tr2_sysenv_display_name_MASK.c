
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum tr2_sysenv_variable { ____Placeholder_tr2_sysenv_variable } tr2_sysenv_variable ;
struct TYPE_2__ {char const* env_var_name; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

const char *FUNC_1(enum tr2_sysenv_variable VAR_2)
{
 if (VAR_2 >= VAR_0)
  FUNC_0("tr2_sysenv_get invalid var '%d'", VAR_2);

 return VAR_1[VAR_2].env_var_name;
}
