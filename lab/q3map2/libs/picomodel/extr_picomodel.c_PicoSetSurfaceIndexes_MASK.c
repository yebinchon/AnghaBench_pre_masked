
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * index; } ;
typedef TYPE_1__ picoSurface_t ;
typedef int picoIndex_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int,int ) ;
 int FUNC_1 (int *,int *,int) ;

void FUNC_2( picoSurface_t *VAR_0, int VAR_1, picoIndex_t *VAR_2, int VAR_3 ){
 if ( VAR_1 < 0 || VAR_2 == ((void*)0) || VAR_3 < 1 ) {
  return;
 }
 if ( !FUNC_0( VAR_0, 0, 0, 0, VAR_1 + VAR_3, 0 ) ) {
  return;
 }
 FUNC_1( &VAR_0->index[ VAR_1 ], VAR_2, VAR_3 * sizeof( VAR_0->index[ VAR_1 ] ) );
}
