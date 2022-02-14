
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * picoVec3_t ;
struct TYPE_6__ {TYPE_1__* model; int * xyz; } ;
typedef TYPE_2__ picoSurface_t ;
struct TYPE_5__ {int maxs; int mins; } ;


 int FUNC_0 (TYPE_2__*,int,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;

void FUNC_3( picoSurface_t *VAR_0, int VAR_1, picoVec3_t VAR_2 ){
 if ( VAR_0 == ((void*)0) || VAR_1 < 0 || VAR_2 == ((void*)0) ) {
  return;
 }
 if ( !FUNC_0( VAR_0, VAR_1 + 1, 0, 0, 0, 0 ) ) {
  return;
 }
 FUNC_1( VAR_2, VAR_0->xyz[ VAR_1 ] );
 if ( VAR_0->model != ((void*)0) ) {
  FUNC_2( VAR_2, VAR_0->model->mins, VAR_0->model->maxs );
 }
}
