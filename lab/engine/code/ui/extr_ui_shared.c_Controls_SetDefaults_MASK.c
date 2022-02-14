
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int defaultbind2; int bind2; int defaultbind1; int bind1; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0( void )
{
 int VAR_2;


  for (VAR_2=0; VAR_2 < VAR_0; VAR_2++)
 {
  VAR_1[VAR_2].bind1 = VAR_1[VAR_2].defaultbind1;
  VAR_1[VAR_2].bind2 = VAR_1[VAR_2].defaultbind2;
 }
}
