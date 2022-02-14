
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
typedef int team_t ;
typedef int qboolean ;
struct TYPE_6__ {int angles; int origin; } ;
struct TYPE_7__ {float randomAngleRange; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 TYPE_2__* FUNC_0 (int,int ,int ) ;
 TYPE_2__* FUNC_1 (int ,float*,float*,int ) ;
 int FUNC_2 (int ,float*) ;
 float FUNC_3 () ;
 int VAR_0 ;

gentity_t *FUNC_4 ( team_t VAR_1, int VAR_2, vec3_t VAR_3, vec3_t VAR_4, qboolean VAR_5 ) {
 gentity_t *VAR_6;

 VAR_6 = FUNC_0 ( VAR_2, VAR_1, VAR_5 );

 if (!VAR_6) {
  return FUNC_1( VAR_0, VAR_3, VAR_4, VAR_5 );
 }

 FUNC_2(VAR_6->s.origin, VAR_3);
 VAR_3[2] += 9.0f;
 FUNC_2(VAR_6->s.angles, VAR_4);
 if ( VAR_6->randomAngleRange == 360.0f ) {
  VAR_4[1] = FUNC_3() * 360.0f;
 } else {

  float VAR_7 = ( FUNC_3() - 0.5f ) * VAR_6->randomAngleRange;
  VAR_4[1] += VAR_7;
 }

 return VAR_6;
}
