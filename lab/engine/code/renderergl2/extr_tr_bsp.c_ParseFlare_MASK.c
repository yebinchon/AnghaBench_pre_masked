
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int surfaceType_t ;
struct TYPE_11__ {void** normal; void** color; void** origin; int surfaceType; } ;
typedef TYPE_2__ srfFlare_t ;
struct TYPE_10__ {int type; } ;
struct TYPE_12__ {TYPE_1__ cullinfo; int * data; TYPE_7__* shader; scalar_t__ fogIndex; } ;
typedef TYPE_3__ msurface_t ;
struct TYPE_13__ {int ** lightmapVecs; int * lightmapOrigin; int shaderNum; int fogNum; } ;
typedef TYPE_4__ dsurface_t ;
typedef int drawVert_t ;
struct TYPE_16__ {int isSky; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {TYPE_7__* defaultShader; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_7__* FUNC_2 (int ,int ) ;
 TYPE_6__* VAR_3 ;
 TYPE_5__ VAR_4 ;

__attribute__((used)) static void FUNC_3( dsurface_t *VAR_5, drawVert_t *VAR_6, msurface_t *VAR_7, int *VAR_8 ) {
 srfFlare_t *VAR_9;
 int VAR_10;


 VAR_7->fogIndex = FUNC_1( VAR_5->fogNum ) + 1;


 VAR_7->shader = FUNC_2( VAR_5->shaderNum, VAR_1 );
 if ( VAR_3->integer && !VAR_7->shader->isSky ) {
  VAR_7->shader = VAR_4.defaultShader;
 }


 VAR_9 = (void *)VAR_7->data;
 VAR_9->surfaceType = VAR_2;

 VAR_7->data = (surfaceType_t *)VAR_9;

 for ( VAR_10 = 0 ; VAR_10 < 3 ; VAR_10++ ) {
  VAR_9->origin[VAR_10] = FUNC_0( VAR_5->lightmapOrigin[VAR_10] );
  VAR_9->color[VAR_10] = FUNC_0( VAR_5->lightmapVecs[0][VAR_10] );
  VAR_9->normal[VAR_10] = FUNC_0( VAR_5->lightmapVecs[2][VAR_10] );
 }

 VAR_7->cullinfo.type = VAR_0;
}
