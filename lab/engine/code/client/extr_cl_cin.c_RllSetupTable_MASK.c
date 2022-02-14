
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {short* sqrTable; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0( void )
{
 int VAR_1;

 for (VAR_1=0;VAR_1<128;VAR_1++) {
  VAR_0.sqrTable[VAR_1] = (short)(VAR_1*VAR_1);
  VAR_0.sqrTable[VAR_1+128] = (short)(-VAR_0.sqrTable[VAR_1]);
 }
}
