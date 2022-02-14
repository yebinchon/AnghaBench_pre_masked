
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
struct TYPE_6__ {float const* origin; float const* extents; } ;
typedef TYPE_2__ aabb_t ;


 float FUNC_0 (float*,float const*) ;
 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_1 (float*,float const*,float*) ;
 double FUNC_2 (float) ;

int FUNC_3( const aabb_t *VAR_4, const ray_t *VAR_5, vec_t *VAR_6 ){
 int VAR_7 = 1;
 char VAR_8[VAR_2];
 register int VAR_9;
 int VAR_10;
 double VAR_11[VAR_2];
 double VAR_12[VAR_2];
 vec3_t VAR_13, VAR_14;

 const float *VAR_15 = VAR_5->origin;
 const float *VAR_16 = VAR_5->direction;



 for ( VAR_9 = 0; VAR_9 < VAR_2; VAR_9++ )
 {
  if ( VAR_15[VAR_9] < ( VAR_4->origin[VAR_9] - VAR_4->extents[VAR_9] ) ) {
   VAR_8[VAR_9] = VAR_0;
   VAR_12[VAR_9] = ( VAR_4->origin[VAR_9] - VAR_4->extents[VAR_9] );
   VAR_7 = 0;
  }
  else if ( VAR_15[VAR_9] > ( VAR_4->origin[VAR_9] + VAR_4->extents[VAR_9] ) ) {
   VAR_8[VAR_9] = VAR_3;
   VAR_12[VAR_9] = ( VAR_4->origin[VAR_9] + VAR_4->extents[VAR_9] );
   VAR_7 = 0;
  }
  else
  {
   VAR_8[VAR_9] = VAR_1;
  }
 }


 if ( VAR_7 == 1 ) {
  *VAR_6 = 0.0f;
  return 1;
 }



 for ( VAR_9 = 0; VAR_9 < VAR_2; VAR_9++ )
 {
  if ( VAR_8[VAR_9] != VAR_1 && VAR_16[VAR_9] != 0. ) {
   VAR_11[VAR_9] = ( VAR_12[VAR_9] - VAR_15[VAR_9] ) / VAR_16[VAR_9];
  }
  else{
   VAR_11[VAR_9] = -1.;
  }
 }


 VAR_10 = 0;
 for ( VAR_9 = 1; VAR_9 < VAR_2; VAR_9++ )
  if ( VAR_11[VAR_10] < VAR_11[VAR_9] ) {
   VAR_10 = VAR_9;
  }


 if ( VAR_11[VAR_10] < 0. ) {
  return 0;
 }
 for ( VAR_9 = 0; VAR_9 < VAR_2; VAR_9++ )
 {
  if ( VAR_10 != VAR_9 ) {
   VAR_13[VAR_9] = (vec_t)( VAR_15[VAR_9] + VAR_11[VAR_10] * VAR_16[VAR_9] );
   if ( FUNC_2( VAR_13[VAR_9] - VAR_4->origin[VAR_9] ) > VAR_4->extents[VAR_9] ) {
    return 0;
   }
  }
  else
  {
   VAR_13[VAR_9] = (vec_t)VAR_12[VAR_9];
  }
 }

 FUNC_1( VAR_13, VAR_15, VAR_14 );
 *VAR_6 = FUNC_0( VAR_14, VAR_16 );

 return 1;
}
