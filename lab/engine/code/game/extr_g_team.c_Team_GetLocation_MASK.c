
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_6__ {float* currentOrigin; } ;
struct TYPE_7__ {TYPE_1__ r; struct TYPE_7__* nextTrain; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_8__ {TYPE_2__* locationHead; } ;


 int FUNC_0 (float*,float*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (float*,float*) ;

gentity_t *FUNC_2(gentity_t *VAR_1)
{
 gentity_t *VAR_2, *VAR_3;
 float VAR_4, VAR_5;
 vec3_t VAR_6;

 VAR_3 = ((void*)0);
 VAR_4 = 3*8192.0*8192.0;

 FUNC_0( VAR_1->r.currentOrigin, VAR_6 );

 for (VAR_2 = VAR_0.locationHead; VAR_2; VAR_2 = VAR_2->nextTrain) {
  VAR_5 = ( VAR_6[0] - VAR_2->r.currentOrigin[0] ) * ( VAR_6[0] - VAR_2->r.currentOrigin[0] )
   + ( VAR_6[1] - VAR_2->r.currentOrigin[1] ) * ( VAR_6[1] - VAR_2->r.currentOrigin[1] )
   + ( VAR_6[2] - VAR_2->r.currentOrigin[2] ) * ( VAR_6[2] - VAR_2->r.currentOrigin[2] );

  if ( VAR_5 > VAR_4 ) {
   continue;
  }

  if ( !FUNC_1( VAR_6, VAR_2->r.currentOrigin ) ) {
   continue;
  }

  VAR_4 = VAR_5;
  VAR_3 = VAR_2;
 }

 return VAR_3;
}
