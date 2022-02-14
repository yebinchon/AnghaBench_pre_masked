
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; scalar_t__** p; } ;
typedef TYPE_1__ winding_t ;
typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;



void FUNC_0( winding_t *VAR_0, vec3_t VAR_1, vec3_t VAR_2 ){
 vec_t VAR_3;
 int VAR_4,VAR_5;

 VAR_1[0] = VAR_1[1] = VAR_1[2] = 99999;
 VAR_2[0] = VAR_2[1] = VAR_2[2] = -99999;

 for ( VAR_4 = 0 ; VAR_4 < VAR_0->numpoints ; VAR_4++ )
 {
  for ( VAR_5 = 0 ; VAR_5 < 3 ; VAR_5++ )
  {
   VAR_3 = VAR_0->p[VAR_4][VAR_5];
   if ( VAR_3 < VAR_1[VAR_5] ) {
    VAR_1[VAR_5] = VAR_3;
   }
   if ( VAR_3 > VAR_2[VAR_5] ) {
    VAR_2[VAR_5] = VAR_3;
   }
  }
 }
}
