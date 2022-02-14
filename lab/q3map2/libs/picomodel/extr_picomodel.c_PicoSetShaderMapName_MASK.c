
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mapName; } ;
typedef TYPE_1__ picoShader_t ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void FUNC_2( picoShader_t *VAR_0, char *VAR_1 ){
 if ( VAR_0 == ((void*)0) || VAR_1 == ((void*)0) ) {
  return;
 }
 if ( VAR_0->mapName != ((void*)0) ) {
  FUNC_1( VAR_0->mapName );
 }

 VAR_0->mapName = FUNC_0( VAR_1 );
}
