
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int MCI_ARGR; unsigned int MCI_CMDR; unsigned int MCI_SR; } ;
typedef int AT91PS_MciDevice ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

int FUNC_0 (
 AT91PS_MciDevice VAR_7,
 unsigned int VAR_8,
 unsigned int VAR_9)
{
 unsigned int VAR_10,VAR_11;



    VAR_0->MCI_ARGR = VAR_9;
    VAR_0->MCI_CMDR = VAR_8;


 do
 {
  VAR_11 = VAR_0->MCI_SR;

 }
 while( !(VAR_11 & VAR_2) );


    VAR_10 = (VAR_0->MCI_SR) & VAR_4;
 if(VAR_10 != 0 )
 {

  if ( (VAR_8 != VAR_6) && (VAR_8 != VAR_5) )
   return ((VAR_0->MCI_SR) & VAR_4);
  else
  {
   if (VAR_10 != VAR_3)
    return ((VAR_0->MCI_SR) & VAR_4);
  }
 }
    return VAR_1;
}
