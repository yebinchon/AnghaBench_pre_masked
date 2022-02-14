
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * picoVec3_t ;
struct TYPE_4__ {int * faceNormal; } ;
typedef TYPE_1__ picoSurface_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2( picoSurface_t *VAR_0, int VAR_1, picoVec3_t VAR_2 ){
 if ( VAR_0 == ((void*)0) || VAR_1 < 0 || VAR_2 == ((void*)0) ) {
  return;
 }
 if ( !FUNC_0( VAR_0, 0, 0, 0, 0, VAR_1 + 1 ) ) {
  return;
 }
 FUNC_1( VAR_2, VAR_0->faceNormal[ VAR_1 ] );
}
