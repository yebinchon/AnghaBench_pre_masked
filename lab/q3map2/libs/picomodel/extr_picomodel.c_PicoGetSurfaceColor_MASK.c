
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numColorArrays; int numVertexes; int *** color; } ;
typedef TYPE_1__ picoSurface_t ;
typedef int picoByte_t ;



picoByte_t *FUNC_0( picoSurface_t *VAR_0, int VAR_1, int VAR_2 ){
 if ( VAR_0 == ((void*)0) || VAR_1 < 0 || VAR_1 > VAR_0->numColorArrays || VAR_2 < 0 || VAR_2 > VAR_0->numVertexes ) {
  return ((void*)0);
 }
 return VAR_0->color[ VAR_1 ][ VAR_2 ];
}
