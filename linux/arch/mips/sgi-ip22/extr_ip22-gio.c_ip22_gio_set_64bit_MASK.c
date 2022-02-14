
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int giopar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_0(int VAR_4)
{
 u32 VAR_5 = VAR_3->giopar;

 switch (VAR_4) {
 case 0:
  VAR_5 |= VAR_2;
  break;
 case 1:
  VAR_5 |= VAR_0;
  break;
 case 2:
  VAR_5 |= VAR_1;
  break;
 }
 VAR_3->giopar = VAR_5;
}
