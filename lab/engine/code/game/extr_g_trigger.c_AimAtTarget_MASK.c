
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_9__ {float* origin; float* origin2; } ;
struct TYPE_8__ {int absmax; int absmin; } ;
struct TYPE_10__ {TYPE_2__ s; int target; TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_11__ {float value; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,float*) ;
 float FUNC_3 (float*) ;
 int FUNC_4 (float*,float,float*) ;
 int FUNC_5 (float*,float*,float*) ;
 TYPE_4__ VAR_0 ;
 float FUNC_6 (float) ;

void FUNC_7( gentity_t *VAR_1 ) {
 gentity_t *VAR_2;
 vec3_t VAR_3;
 float VAR_4, VAR_5, VAR_6, VAR_7;
 float VAR_8;

 FUNC_2( VAR_1->r.absmin, VAR_1->r.absmax, VAR_3 );
 FUNC_4 ( VAR_3, 0.5, VAR_3 );

 VAR_2 = FUNC_1( VAR_1->target );
 if ( !VAR_2 ) {
  FUNC_0( VAR_1 );
  return;
 }

 VAR_4 = VAR_2->s.origin[2] - VAR_3[2];
 VAR_5 = VAR_0.value;
 VAR_6 = FUNC_6( VAR_4 / ( .5 * VAR_5 ) );
 if ( !VAR_6 ) {
  FUNC_0( VAR_1 );
  return;
 }


 FUNC_5 ( VAR_2->s.origin, VAR_3, VAR_1->s.origin2 );
 VAR_1->s.origin2[2] = 0;
 VAR_8 = FUNC_3( VAR_1->s.origin2);

 VAR_7 = VAR_8 / VAR_6;
 FUNC_4( VAR_1->s.origin2, VAR_7, VAR_1->s.origin2 );

 VAR_1->s.origin2[2] = VAR_6 * VAR_5;
}
