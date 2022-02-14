
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* model; } ;
typedef TYPE_1__ picoSurface_t ;
struct TYPE_11__ {int numSurfaces; TYPE_1__** surface; } ;
typedef TYPE_2__ picoModel_t ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*,char*,int) ;

picoSurface_t *FUNC_6( picoModel_t *VAR_0 ){
 picoSurface_t *VAR_1;
 char VAR_2[64];


 VAR_1 = FUNC_2( sizeof( *VAR_1 ) );
 if ( VAR_1 == ((void*)0) ) {
  return ((void*)0);
 }
 FUNC_4( VAR_1, 0, sizeof( *VAR_1 ) );


 if ( VAR_0 != ((void*)0) ) {

  if ( !FUNC_0( VAR_0, 0, VAR_0->numSurfaces + 1 ) ) {
   FUNC_3( VAR_1 );
   return ((void*)0);
  }


  VAR_0->surface[ VAR_0->numSurfaces - 1 ] = VAR_1;
  VAR_1->model = VAR_0;


  FUNC_5( VAR_2, "Unnamed_%d", VAR_0->numSurfaces );
  FUNC_1( VAR_1, VAR_2 );
 }


 return VAR_1;
}
