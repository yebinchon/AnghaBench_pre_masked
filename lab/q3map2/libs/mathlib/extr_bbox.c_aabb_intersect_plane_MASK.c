
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float vec_t ;
struct TYPE_3__ {float radius; float const* extents; int origin; } ;
typedef TYPE_1__ aabb_t ;


 float const FUNC_0 (float const*,int ) ;
 float FUNC_1 (float const) ;

int FUNC_2( const aabb_t *VAR_0, const float *VAR_1 ){
 float VAR_2, VAR_3;


 VAR_2 = FUNC_0( VAR_1, VAR_0->origin ) + VAR_1[3];


 if ( FUNC_1( VAR_2 ) > VAR_0->radius ) {
  if ( VAR_2 < 0 ) {
   return 2;
  }
  else{
   return 0;
  }
 }


 VAR_3 = (vec_t)( FUNC_1( VAR_1[0] * VAR_0->extents[0] ) + FUNC_1( VAR_1[1] * VAR_0->extents[1] ) + FUNC_1( VAR_1[2] * VAR_0->extents[2] ) );

 if ( FUNC_1( VAR_2 ) < VAR_3 ) {
  return 1;
 }
 else if ( VAR_2 < 0 ) {
  return 2;
 }
 return 0;
}
