
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
struct TYPE_4__ {scalar_t__ radius; scalar_t__* extents; int origin; } ;
struct TYPE_5__ {int * axes; TYPE_1__ aabb; } ;
typedef TYPE_2__ bbox_t ;


 scalar_t__ FUNC_0 (scalar_t__ const*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int FUNC_2( const bbox_t *VAR_0, const vec_t* VAR_1 ){
 vec_t VAR_2, VAR_3;


 VAR_2 = FUNC_0( VAR_1, VAR_0->aabb.origin ) + VAR_1[3];


 if ( FUNC_1( VAR_2 ) > VAR_0->aabb.radius ) {
  if ( VAR_2 < 0 ) {
   return 2;
  }
  else{
   return 0;
  }
 }


 VAR_3 = (vec_t)( FUNC_1( VAR_0->aabb.extents[0] * FUNC_0( VAR_1, VAR_0->axes[0] ) )
        + FUNC_1( VAR_0->aabb.extents[1] * FUNC_0( VAR_1, VAR_0->axes[1] ) )
        + FUNC_1( VAR_0->aabb.extents[2] * FUNC_0( VAR_1, VAR_0->axes[2] ) ) );

 if ( FUNC_1( VAR_2 ) < VAR_3 ) {
  return 1;
 }
 else if ( VAR_2 < 0 ) {
  return 2;
 }
 return 0;
}
