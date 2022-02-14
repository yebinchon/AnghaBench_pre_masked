
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t pkg_config_key ;
struct TYPE_2__ {scalar_t__ type; char* value; char* val; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 TYPE_1__* VAR_1 ;

int
FUNC_1(pkg_config_key VAR_2, bool *VAR_3)
{
 const char *VAR_4;

 if (VAR_1[VAR_2].type != VAR_0)
  return (-1);

 *VAR_3 = 0;

 if (VAR_1[VAR_2].value != ((void*)0))
  VAR_4 = VAR_1[VAR_2].value;
 else
  VAR_4 = VAR_1[VAR_2].val;

 if (FUNC_0(VAR_4))
  *VAR_3 = 1;

 return (0);
}
