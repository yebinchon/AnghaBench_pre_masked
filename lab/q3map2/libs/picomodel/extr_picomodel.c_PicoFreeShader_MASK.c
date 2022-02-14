
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* mapName; struct TYPE_4__* name; } ;
typedef TYPE_1__ picoShader_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( picoShader_t *VAR_0 ){

 if ( VAR_0 == ((void*)0) ) {
  return;
 }


 if ( VAR_0->name ) {
  FUNC_0( VAR_0->name );
 }
 if ( VAR_0->mapName ) {
  FUNC_0( VAR_0->mapName );
 }


 FUNC_0( VAR_0 );
}
