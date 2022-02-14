
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numShaders; int numSurfaces; int * surface; int * shader; struct TYPE_4__* fileName; struct TYPE_4__* name; } ;
typedef TYPE_1__ picoModel_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4( picoModel_t *VAR_0 ){
 int VAR_1;


 if ( VAR_0 == ((void*)0) ) {
  return;
 }


 if ( VAR_0->name ) {
  FUNC_2( VAR_0->name );
 }

 if ( VAR_0->fileName ) {
  FUNC_2( VAR_0->fileName );
 }


 for ( VAR_1 = 0; VAR_1 < VAR_0->numShaders; VAR_1++ )
  FUNC_0( VAR_0->shader[ VAR_1 ] );
 FUNC_3( VAR_0->shader );


 for ( VAR_1 = 0; VAR_1 < VAR_0->numSurfaces; VAR_1++ )
  FUNC_1( VAR_0->surface[ VAR_1 ] );
 FUNC_3( VAR_0->surface );


 FUNC_2( VAR_0 );
}
