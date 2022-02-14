
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_3__ {scalar_t__* extents; scalar_t__* origin; } ;
typedef TYPE_1__ aabb_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

int FUNC_1( const aabb_t *VAR_0, const vec3_t VAR_1 ){
 int VAR_2;
 for ( VAR_2 = 0; VAR_2 < 3; VAR_2++ )
  if ( FUNC_0( VAR_1[VAR_2] - VAR_0->origin[VAR_2] ) >= VAR_0->extents[VAR_2] ) {
   return 0;
  }
 return 1;
}
