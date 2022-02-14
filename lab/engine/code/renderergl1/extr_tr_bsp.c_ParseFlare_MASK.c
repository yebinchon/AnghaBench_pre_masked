
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int surfaceType_t ;
struct TYPE_11__ {void** normal; void** color; void** origin; int surfaceType; } ;
typedef TYPE_1__ srfFlare_t ;
struct TYPE_12__ {int * data; TYPE_8__* shader; scalar_t__ fogIndex; } ;
typedef TYPE_2__ msurface_t ;
struct TYPE_13__ {int ** lightmapVecs; int * lightmapOrigin; int shaderNum; int fogNum; } ;
typedef TYPE_3__ dsurface_t ;
typedef int drawVert_t ;
struct TYPE_17__ {int isSky; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {TYPE_1__* (* Hunk_Alloc ) (int,int ) ;} ;
struct TYPE_14__ {TYPE_8__* defaultShader; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_8__* FUNC_2 (int ,int ) ;
 int VAR_2 ;
 TYPE_7__* VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_1__* FUNC_3 (int,int ) ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static void FUNC_4( dsurface_t *VAR_6, drawVert_t *VAR_7, msurface_t *VAR_8, int *VAR_9 ) {
 srfFlare_t *VAR_10;
 int VAR_11;


 VAR_8->fogIndex = FUNC_1( VAR_6->fogNum ) + 1;


 VAR_8->shader = FUNC_2( VAR_6->shaderNum, VAR_0 );
 if ( VAR_3->integer && !VAR_8->shader->isSky ) {
  VAR_8->shader = VAR_5.defaultShader;
 }

 VAR_10 = VAR_4.Hunk_Alloc( sizeof( *VAR_10 ), VAR_2 );
 VAR_10->surfaceType = VAR_1;

 VAR_8->data = (surfaceType_t *)VAR_10;

 for ( VAR_11 = 0 ; VAR_11 < 3 ; VAR_11++ ) {
  VAR_10->origin[VAR_11] = FUNC_0( VAR_6->lightmapOrigin[VAR_11] );
  VAR_10->color[VAR_11] = FUNC_0( VAR_6->lightmapVecs[0][VAR_11] );
  VAR_10->normal[VAR_11] = FUNC_0( VAR_6->lightmapVecs[2][VAR_11] );
 }
}
