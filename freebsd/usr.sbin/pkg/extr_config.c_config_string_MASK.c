
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t pkg_config_key ;
struct TYPE_2__ {scalar_t__ type; char* value; char* val; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

int
FUNC_0(pkg_config_key VAR_2, const char **VAR_3)
{
 if (VAR_1[VAR_2].type != VAR_0)
  return (-1);

 if (VAR_1[VAR_2].value != ((void*)0))
  *VAR_3 = VAR_1[VAR_2].value;
 else
  *VAR_3 = VAR_1[VAR_2].val;

 return (0);
}
