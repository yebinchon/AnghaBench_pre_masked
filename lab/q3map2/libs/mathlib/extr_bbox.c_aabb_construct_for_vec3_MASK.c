
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_3__ {int extents; int origin; } ;
typedef TYPE_1__ aabb_t ;


 int FUNC_0 (int const,int const,int ) ;
 int FUNC_1 (int const,int ,int ) ;

void FUNC_2( aabb_t *VAR_0, const vec3_t VAR_1, const vec3_t VAR_2 ){
 FUNC_0( VAR_1, VAR_2, VAR_0->origin );
 FUNC_1( VAR_2, VAR_0->origin, VAR_0->extents );
}
