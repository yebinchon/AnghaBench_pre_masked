
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int MCI_SR; } ;


 TYPE_1__* VAR_0 ;
 int volatile VAR_1 ;

void FUNC_0(unsigned int VAR_2)
{
 volatile int VAR_3;

 do
 {
  VAR_3 = VAR_0->MCI_SR;
  VAR_2--;
 }
 while( !(VAR_3 & VAR_1) && (VAR_2>0) );
}
