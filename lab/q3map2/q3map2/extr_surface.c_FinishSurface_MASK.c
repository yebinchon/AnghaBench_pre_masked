
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; scalar_t__ backSide; TYPE_1__* shaderInfo; int * celShader; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_7__ {char* cloneShader; char* backShader; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;

void FUNC_3( mapDrawSurface_t *VAR_3 ){
 mapDrawSurface_t *VAR_4;



 if ( VAR_3->type <= VAR_1 || VAR_3->type >= VAR_0 || VAR_3 == ((void*)0) || VAR_3->shaderInfo == ((void*)0) ) {
  return;
 }


 if ( VAR_3->celShader != ((void*)0) ) {
  FUNC_1( VAR_3, VAR_3->celShader );
 }


 if ( VAR_3->backSide ) {
  return;
 }


 if ( VAR_3->shaderInfo->cloneShader != ((void*)0) && VAR_3->shaderInfo->cloneShader[ 0 ] != '\0' ) {
  FUNC_0( VAR_3, FUNC_2( VAR_3->shaderInfo->cloneShader ) );
 }


 if ( VAR_3->shaderInfo->backShader != ((void*)0) && VAR_3->shaderInfo->backShader[ 0 ] != '\0' ) {
  VAR_4 = FUNC_0( VAR_3, FUNC_2( VAR_3->shaderInfo->backShader ) );
  VAR_4->backSide = VAR_2;
 }
}
