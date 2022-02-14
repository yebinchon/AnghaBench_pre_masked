
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; char const* name; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

const char *
FUNC_0(int VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].id == VAR_2) {
   return (VAR_1[VAR_3].name);
  }
 return ("UNKNOWN");
}
