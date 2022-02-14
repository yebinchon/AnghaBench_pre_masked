
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* shader; } ;
typedef TYPE_1__ picoSurface_t ;
struct TYPE_14__ {int name; } ;
typedef TYPE_2__ picoShader_t ;
struct TYPE_15__ {int numSurfaces; TYPE_1__** surface; } ;
typedef TYPE_3__ picoModel_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,char*) ;

picoSurface_t* FUNC_5( picoModel_t *VAR_2, picoShader_t* VAR_3 ){

 int VAR_4 = 0;
 for ( ; VAR_4 < VAR_2->numSurfaces ; VAR_4++ )
 {
  picoSurface_t* VAR_5 = VAR_2->surface[VAR_4];
  if ( VAR_5->shader == VAR_3 ) {
   return VAR_5;
  }
 }



 {

  picoSurface_t* VAR_6 = FUNC_0( VAR_2 );
  if ( !VAR_6 ) {
   FUNC_4( VAR_0, "Could not allocate a new surface!\n" );
   return 0;
  }


  FUNC_3( VAR_6, VAR_1 );
  FUNC_1( VAR_6, VAR_3->name );
  FUNC_2( VAR_6, VAR_3 );

  return VAR_6;
 }
}
