
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int * vec3_t ;
struct TYPE_6__ {int * extents; int origin; } ;
struct TYPE_7__ {TYPE_1__ aabb; int * axes; } ;
typedef TYPE_2__ bbox_t ;
struct TYPE_8__ {scalar_t__* extents; int origin; } ;
typedef TYPE_3__ aabb_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3( aabb_t *VAR_0, const bbox_t *VAR_1 ){
 int VAR_2;
 vec3_t VAR_3[3];

 FUNC_0( VAR_1->aabb.origin, VAR_0->origin );


 FUNC_1( VAR_1->axes[0], VAR_1->aabb.extents[0], VAR_3[0] );
 FUNC_1( VAR_1->axes[1], VAR_1->aabb.extents[1], VAR_3[1] );
 FUNC_1( VAR_1->axes[2], VAR_1->aabb.extents[2], VAR_3[2] );
 for ( VAR_2 = 0; VAR_2 < 3; VAR_2++ ) VAR_0->extents[VAR_2] = (vec_t)( FUNC_2( VAR_3[0][VAR_2] ) + FUNC_2( VAR_3[1][VAR_2] ) + FUNC_2( VAR_3[2][VAR_2] ) );
}
