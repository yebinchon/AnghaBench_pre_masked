
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ee_numCtls; int* ee_ctl; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(int VAR_5)
{
 int VAR_6;

 for (VAR_6 = VAR_5; VAR_6 < VAR_1.ee_numCtls && VAR_1.ee_ctl[VAR_6]; VAR_6++) {
  switch (VAR_1.ee_ctl[VAR_6] & 3) {
  case 0: case 3:
   if (VAR_0 != VAR_2)
    continue;
   break;
  case 1:
   if (VAR_0 != VAR_3)
    continue;
   break;
  case 2:
   if (VAR_0 != VAR_4)
    continue;
   break;
  }
  return VAR_6;
 }
 return -1;
}
