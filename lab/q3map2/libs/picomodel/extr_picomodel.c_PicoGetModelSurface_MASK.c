
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int picoSurface_t ;
struct TYPE_3__ {int numSurfaces; int ** surface; } ;
typedef TYPE_1__ picoModel_t ;



picoSurface_t *FUNC_0( picoModel_t *VAR_0, int VAR_1 ){

 if ( VAR_0 == ((void*)0) ) {
  return ((void*)0);
 }
 if ( VAR_0->surface == ((void*)0) ) {
  return ((void*)0);
 }
 if ( VAR_1 < 0 || VAR_1 >= VAR_0->numSurfaces ) {
  return ((void*)0);
 }


 return VAR_0->surface[ VAR_1 ];
}
