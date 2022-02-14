
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * extents; scalar_t__* origin; } ;
typedef TYPE_1__ aabb_t ;


 int VAR_0 ;

void FUNC_0( aabb_t *VAR_1 ){
 VAR_1->origin[0] = VAR_1->origin[1] = VAR_1->origin[2] = 0;
 VAR_1->extents[0] = VAR_1->extents[1] = VAR_1->extents[2] = -VAR_0;
}
