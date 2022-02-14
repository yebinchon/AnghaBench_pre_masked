
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;
struct TYPE_3__ {scalar_t__* origin; scalar_t__* extents; } ;
typedef TYPE_1__ aabb_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

void FUNC_1( aabb_t *VAR_0, const vec3_t VAR_1 ){
 int VAR_2;
 vec_t VAR_3, VAR_4, VAR_5;
 for ( VAR_2 = 0; VAR_2 < 3; VAR_2++ )
 {
  VAR_5 = VAR_1[VAR_2] - VAR_0->origin[VAR_2];
  if ( FUNC_0( VAR_5 ) > VAR_0->extents[VAR_2] ) {
   if ( VAR_0->extents[VAR_2] < 0 ) {
    VAR_3 = VAR_4 = VAR_1[VAR_2];
   }
   else if ( VAR_5 > 0 ) {
    VAR_3 = VAR_0->origin[VAR_2] - VAR_0->extents[VAR_2];
    VAR_4 = VAR_0->origin[VAR_2] + VAR_5;
   }
   else
   {
    VAR_4 = VAR_0->origin[VAR_2] + VAR_0->extents[VAR_2];
    VAR_3 = VAR_0->origin[VAR_2] + VAR_5;
   }
   VAR_0->origin[VAR_2] = ( VAR_3 + VAR_4 ) * 0.5f;
   VAR_0->extents[VAR_2] = VAR_4 - VAR_0->origin[VAR_2];
  }
 }
}
