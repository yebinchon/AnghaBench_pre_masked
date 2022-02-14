
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numareas; TYPE_1__* areasettings; } ;
struct TYPE_3__ {int contents; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_0(void)
{
 int VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_2.numareas; VAR_3++)
 {
  if (VAR_2.areasettings[VAR_3].contents & VAR_0)
  {
   VAR_2.areasettings[VAR_3].contents |= VAR_1;
  }
 }
}
