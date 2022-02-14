
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int shaderInfo_t ;
struct TYPE_8__ {int planeNum; int planar; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_7__ {int compileFlags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int *) ;
 int VAR_2 ;

mapDrawSurface_t *FUNC_1( mapDrawSurface_t *VAR_3, shaderInfo_t *VAR_4 ){
 mapDrawSurface_t *VAR_5;



 if ( VAR_3 == ((void*)0) || VAR_4 == ((void*)0) ) {
  return ((void*)0);
 }


 if ( ( VAR_3->shaderInfo->compileFlags & VAR_1 ) ||
   ( VAR_3->shaderInfo->compileFlags & VAR_0 ) ) {
  return ((void*)0);
 }


 VAR_5 = FUNC_0( VAR_3, VAR_4 );
 if ( VAR_5 == ((void*)0) ) {
  return ((void*)0);
 }


 VAR_5->planar = VAR_2;
 VAR_5->planeNum = -1;


 return VAR_5;
}
