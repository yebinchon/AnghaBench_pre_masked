
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int picoVec_t ;
struct TYPE_3__ {int numFaceNormals; int ** faceNormal; } ;
typedef TYPE_1__ picoSurface_t ;



picoVec_t *FUNC_0( picoSurface_t *VAR_0, int VAR_1 ){
 if ( VAR_0 == ((void*)0) || VAR_1 < 0 || VAR_1 > VAR_0->numFaceNormals ) {
  return ((void*)0);
 }
 return VAR_0->faceNormal[ VAR_1 ];
}
