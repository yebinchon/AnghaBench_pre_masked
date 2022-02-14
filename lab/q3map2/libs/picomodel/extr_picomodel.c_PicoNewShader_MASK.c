
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ shininess; scalar_t__ transparency; int specularColor; int diffuseColor; int ambientColor; TYPE_2__* model; } ;
typedef TYPE_1__ picoShader_t ;
struct TYPE_10__ {int numShaders; TYPE_1__** shader; } ;
typedef TYPE_2__ picoModel_t ;


 int FUNC_0 (TYPE_2__*,int,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int,int,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

picoShader_t *FUNC_5( picoModel_t *VAR_0 ){
 picoShader_t *VAR_1;


 VAR_1 = FUNC_1( sizeof( picoShader_t ) );
 if ( VAR_1 == ((void*)0) ) {
  return ((void*)0);
 }
 FUNC_4( VAR_1, 0, sizeof( picoShader_t ) );


 if ( VAR_0 != ((void*)0) ) {

  if ( !FUNC_0( VAR_0, VAR_0->numShaders + 1, 0 ) ) {
   FUNC_2( VAR_1 );
   return ((void*)0);
  }

  VAR_0->shader[ VAR_0->numShaders - 1 ] = VAR_1;
  VAR_1->model = VAR_0;
 }

 FUNC_3( VAR_1->ambientColor, 0, 0, 0, 0 );
 FUNC_3( VAR_1->diffuseColor, 255, 255, 255, 1 );
 FUNC_3( VAR_1->specularColor, 0, 0, 0, 0 );


 VAR_1->transparency = 0;
 VAR_1->shininess = 0;


 return VAR_1;
}
