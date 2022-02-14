
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* vec_t ;
typedef int* m4x4_t ;
struct TYPE_4__ {int* extents; int origin; } ;
typedef TYPE_1__ aabb_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int* const,int ) ;

void FUNC_3( aabb_t* VAR_0, const aabb_t* VAR_1, const m4x4_t VAR_2 ){
 FUNC_0( VAR_1->origin, VAR_0->origin );
 FUNC_2( VAR_2, VAR_0->origin );

 VAR_0->extents[0] = (vec_t)( FUNC_1( VAR_2[0] * VAR_1->extents[0] )
          + FUNC_1( VAR_2[4] * VAR_1->extents[1] )
          + FUNC_1( VAR_2[8] * VAR_1->extents[2] ) );
 VAR_0->extents[1] = (vec_t)( FUNC_1( VAR_2[1] * VAR_1->extents[0] )
          + FUNC_1( VAR_2[5] * VAR_1->extents[1] )
          + FUNC_1( VAR_2[9] * VAR_1->extents[2] ) );
 VAR_0->extents[2] = (vec_t)( FUNC_1( VAR_2[2] * VAR_1->extents[0] )
          + FUNC_1( VAR_2[6] * VAR_1->extents[1] )
          + FUNC_1( VAR_2[10] * VAR_1->extents[2] ) );
}
