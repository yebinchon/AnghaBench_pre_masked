
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float* fogTable; } ;


 int VAR_0 ;
 float FUNC_0 (float,float) ;
 TYPE_1__ VAR_1 ;

void FUNC_1( void ) {
 int VAR_2;
 float VAR_3;
 float VAR_4;

 VAR_4 = 0.5;

 for ( VAR_2 = 0 ; VAR_2 < VAR_0 ; VAR_2++ ) {
  VAR_3 = FUNC_0 ( (float)VAR_2/(VAR_0-1), VAR_4 );

  VAR_1.fogTable[VAR_2] = VAR_3;
 }
}
