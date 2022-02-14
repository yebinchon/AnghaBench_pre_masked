
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double shaderTime; } ;


 double FUNC_0 (double) ;
 TYPE_1__ VAR_0 ;

void FUNC_1( const float VAR_1[2], float *VAR_2 )
{
 double VAR_3 = VAR_0.shaderTime;
 double VAR_4, VAR_5;

 VAR_4 = VAR_1[0] * VAR_3;
 VAR_5 = VAR_1[1] * VAR_3;



 VAR_4 = VAR_4 - FUNC_0( VAR_4 );
 VAR_5 = VAR_5 - FUNC_0( VAR_5 );

 VAR_2[0] = 1.0f; VAR_2[2] = 0.0f; VAR_2[4] = VAR_4;
 VAR_2[1] = 0.0f; VAR_2[3] = 1.0f; VAR_2[5] = VAR_5;
}
