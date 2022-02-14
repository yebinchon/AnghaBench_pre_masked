
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numareas; TYPE_1__* areasettings; } ;
struct TYPE_3__ {scalar_t__ cluster; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(void)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 < VAR_0.numareas; VAR_1++)
 {
  VAR_0.areasettings[VAR_1].cluster = 0;
 }
}
