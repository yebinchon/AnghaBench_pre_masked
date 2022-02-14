
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * smoothingGroup; } ;
typedef TYPE_1__ picoSurface_t ;
typedef int picoIndex_t ;


 int FUNC_0 (TYPE_1__*,int,int ,int ,int ,int ) ;

void FUNC_1( picoSurface_t *VAR_0, int VAR_1, picoIndex_t VAR_2 ){
 if ( VAR_1 < 0 ) {
  return;
 }
 if ( !FUNC_0( VAR_0, VAR_1 + 1, 0, 0, 0, 0 ) ) {
  return;
 }
 VAR_0->smoothingGroup[ VAR_1 ] = VAR_2;
}
