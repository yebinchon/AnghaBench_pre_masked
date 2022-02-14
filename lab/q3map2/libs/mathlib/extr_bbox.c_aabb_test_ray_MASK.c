
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float vec_t ;
typedef float* vec3_t ;
struct TYPE_5__ {float* origin; float* direction; } ;
typedef TYPE_1__ ray_t ;
struct TYPE_6__ {float* origin; float* extents; } ;
typedef TYPE_2__ aabb_t ;


 float FUNC_0 (float) ;

int FUNC_1( const aabb_t* VAR_0, const ray_t* VAR_1 ){
 vec3_t VAR_2, VAR_3;
 vec_t VAR_4;

 VAR_2[0] = VAR_1->origin[0] - VAR_0->origin[0];
 if ( FUNC_0( VAR_2[0] ) > VAR_0->extents[0] && VAR_2[0] * VAR_1->direction[0] >= 0.0f ) {
  return 0;
 }

 VAR_2[1] = VAR_1->origin[1] - VAR_0->origin[1];
 if ( FUNC_0( VAR_2[1] ) > VAR_0->extents[1] && VAR_2[1] * VAR_1->direction[1] >= 0.0f ) {
  return 0;
 }

 VAR_2[2] = VAR_1->origin[2] - VAR_0->origin[2];
 if ( FUNC_0( VAR_2[2] ) > VAR_0->extents[2] && VAR_2[2] * VAR_1->direction[2] >= 0.0f ) {
  return 0;
 }

 VAR_3[0] = (float)FUNC_0( VAR_1->direction[0] );
 VAR_3[1] = (float)FUNC_0( VAR_1->direction[1] );
 VAR_3[2] = (float)FUNC_0( VAR_1->direction[2] );

 VAR_4 = VAR_1->direction[1] * VAR_2[2] - VAR_1->direction[2] * VAR_2[1];
 if ( (float)FUNC_0( VAR_4 ) > VAR_0->extents[1] * VAR_3[2] + VAR_0->extents[2] * VAR_3[1] ) {
  return 0;
 }

 VAR_4 = VAR_1->direction[2] * VAR_2[0] - VAR_1->direction[0] * VAR_2[2];
 if ( (float)FUNC_0( VAR_4 ) > VAR_0->extents[0] * VAR_3[2] + VAR_0->extents[2] * VAR_3[0] ) {
  return 0;
 }

 VAR_4 = VAR_1->direction[0] * VAR_2[1] - VAR_1->direction[1] * VAR_2[0];
 if ( (float)FUNC_0( VAR_4 ) > VAR_0->extents[0] * VAR_3[1] + VAR_0->extents[1] * VAR_3[0] ) {
  return 0;
 }

 return 1;
}
