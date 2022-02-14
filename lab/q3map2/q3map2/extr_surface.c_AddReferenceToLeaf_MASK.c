
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ planenum; void* sky; scalar_t__ skybox; TYPE_4__* drawSurfReferences; scalar_t__ opaque; } ;
typedef TYPE_2__ node_t ;
struct TYPE_10__ {TYPE_1__* shaderInfo; void* skybox; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_11__ {scalar_t__ outputNum; struct TYPE_11__* nextRef; } ;
typedef TYPE_4__ drawSurfRef_t ;
struct TYPE_8__ {int compileFlags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 TYPE_4__* FUNC_0 (int) ;

int FUNC_1( mapDrawSurface_t *VAR_4, node_t *VAR_5 ){
 drawSurfRef_t *VAR_6;



 if ( VAR_5->planenum != VAR_1 || VAR_5->opaque ) {
  return 0;
 }


 for ( VAR_6 = VAR_5->drawSurfReferences; VAR_6; VAR_6 = VAR_6->nextRef )
 {
  if ( VAR_6->outputNum == VAR_2 ) {
   return 0;
  }
 }


 VAR_6 = FUNC_0( sizeof( *VAR_6 ) );
 VAR_6->outputNum = VAR_2;
 VAR_6->nextRef = VAR_5->drawSurfReferences;
 VAR_5->drawSurfReferences = VAR_6;


 if ( VAR_5->skybox ) {
  VAR_4->skybox = VAR_3;
 }
 if ( VAR_4->shaderInfo->compileFlags & VAR_0 ) {
  VAR_5->sky = VAR_3;
 }


 return 1;
}
