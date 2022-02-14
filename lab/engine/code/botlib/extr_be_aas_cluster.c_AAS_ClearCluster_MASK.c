
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numareas; TYPE_1__* areasettings; } ;
struct TYPE_3__ {int cluster; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_0.numareas; VAR_2++)
 {
  if (VAR_0.areasettings[VAR_2].cluster == VAR_1)
  {
   VAR_0.areasettings[VAR_2].cluster = 0;
  }
 }
}
