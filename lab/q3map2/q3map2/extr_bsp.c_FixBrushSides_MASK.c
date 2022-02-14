
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* side; struct TYPE_13__* next; } ;
typedef TYPE_3__ sideRef_t ;
struct TYPE_14__ {scalar_t__ outputNum; TYPE_2__* shaderInfo; TYPE_3__* sideRef; } ;
typedef TYPE_4__ mapDrawSurface_t ;
struct TYPE_15__ {int firstDrawSurf; } ;
typedef TYPE_5__ entity_t ;
struct TYPE_16__ {scalar_t__ surfaceNum; size_t shaderNum; } ;
typedef TYPE_6__ bspBrushSide_t ;
struct TYPE_17__ {int shader; } ;
struct TYPE_12__ {int surfaceFlags; int contentFlags; int shader; } ;
struct TYPE_11__ {size_t outputNum; } ;


 size_t FUNC_0 (int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 TYPE_6__* VAR_1 ;
 TYPE_8__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3( entity_t *VAR_5 ){
 int VAR_6;
 mapDrawSurface_t *VAR_7;
 sideRef_t *VAR_8;
 bspBrushSide_t *VAR_9;



 FUNC_1( VAR_0, "--- FixBrushSides ---\n" );


 for ( VAR_6 = VAR_5->firstDrawSurf; VAR_6 < VAR_4; VAR_6++ )
 {

  VAR_7 = &VAR_3[ VAR_6 ];
  if ( VAR_7->outputNum < 0 ) {
   continue;
  }


  for ( VAR_8 = VAR_7->sideRef; VAR_8 != ((void*)0); VAR_8 = VAR_8->next )
  {

   if ( VAR_8->side == ((void*)0) || VAR_8->side->outputNum < 0 ) {
    continue;
   }
   VAR_9 = &VAR_1[ VAR_8->side->outputNum ];


   VAR_9->surfaceNum = VAR_7->outputNum;



   if ( FUNC_2( VAR_2[ VAR_9->shaderNum ].shader, VAR_7->shaderInfo->shader ) ) {

    VAR_9->shaderNum = FUNC_0( VAR_7->shaderInfo->shader, &VAR_7->shaderInfo->contentFlags, &VAR_7->shaderInfo->surfaceFlags );
   }
  }
 }
}
