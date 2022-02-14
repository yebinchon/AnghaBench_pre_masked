
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void**** color; } ;
typedef TYPE_1__ picoSurface_t ;
typedef void** picoColor_t ;


 int FUNC_0 (TYPE_1__*,int,int ,int,int ,int ) ;

void FUNC_1( picoSurface_t *VAR_0, int VAR_1, int VAR_2, picoColor_t VAR_3 ){
 if ( VAR_0 == ((void*)0) || VAR_2 < 0 || VAR_3 == ((void*)0) ) {
  return;
 }
 if ( !FUNC_0( VAR_0, VAR_2 + 1, 0, VAR_1 + 1, 0, 0 ) ) {
  return;
 }
 VAR_0->color[ VAR_1 ][ VAR_2 ][ 0 ] = VAR_3[ 0 ];
 VAR_0->color[ VAR_1 ][ VAR_2 ][ 1 ] = VAR_3[ 1 ];
 VAR_0->color[ VAR_1 ][ VAR_2 ][ 2 ] = VAR_3[ 2 ];
 VAR_0->color[ VAR_1 ][ VAR_2 ][ 3 ] = VAR_3[ 3 ];
}
