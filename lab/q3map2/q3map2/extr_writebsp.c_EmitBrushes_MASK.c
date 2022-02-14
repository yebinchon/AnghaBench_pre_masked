
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {size_t firstSide; scalar_t__ numSides; void* shaderNum; } ;
typedef TYPE_4__ bspBrush_t ;
struct TYPE_14__ {void* shaderNum; int planeNum; } ;
typedef TYPE_5__ bspBrushSide_t ;
struct TYPE_15__ {size_t outputNum; int numsides; TYPE_3__* sides; TYPE_1__* contentShader; struct TYPE_15__* next; } ;
typedef TYPE_6__ brush_t ;
struct TYPE_12__ {int outputNum; TYPE_2__* shaderInfo; int planenum; } ;
struct TYPE_11__ {int surfaceFlags; int contentFlags; int * shader; } ;
struct TYPE_10__ {int surfaceFlags; int contentFlags; int * shader; } ;


 void* FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (char*,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

void FUNC_2( brush_t *VAR_6, int *VAR_7, int *VAR_8 ){
 int VAR_9;
 brush_t *VAR_10;
 bspBrush_t *VAR_11;
 bspBrushSide_t *VAR_12;



 if ( VAR_7 != ((void*)0) ) {
  *VAR_7 = VAR_5;
 }
 if ( VAR_8 != ((void*)0) ) {
  *VAR_8 = 0;
 }


 for ( VAR_10 = VAR_6; VAR_10 != ((void*)0); VAR_10 = VAR_10->next )
 {

  if ( VAR_5 == VAR_0 ) {
   FUNC_1( "MAX_MAP_BRUSHES (%d)", VAR_5 );
  }


  VAR_10->outputNum = VAR_5;
  VAR_11 = &VAR_3[ VAR_5 ];
  VAR_5++;
  if ( VAR_8 != ((void*)0) ) {
   ( *VAR_8 )++;
  }

  VAR_11->shaderNum = FUNC_0( VAR_10->contentShader->shader, &VAR_10->contentShader->contentFlags, &VAR_10->contentShader->surfaceFlags );
  VAR_11->firstSide = VAR_4;


  VAR_11->numSides = 0;
  for ( VAR_9 = 0; VAR_9 < VAR_10->numsides; VAR_9++ )
  {

   VAR_10->sides[ VAR_9 ].outputNum = -1;


   if ( VAR_4 == VAR_1 ) {
    FUNC_1( "MAX_MAP_BRUSHSIDES " );
   }


   VAR_10->sides[ VAR_9 ].outputNum = VAR_4;
   VAR_12 = &VAR_2[ VAR_4 ];
   VAR_11->numSides++;
   VAR_4++;
   VAR_12->planeNum = VAR_10->sides[ VAR_9 ].planenum;


   if ( VAR_10->sides[ VAR_9 ].shaderInfo ) {
    VAR_12->shaderNum = FUNC_0( VAR_10->sides[ VAR_9 ].shaderInfo->shader, &VAR_10->sides[ VAR_9 ].shaderInfo->contentFlags, &VAR_10->sides[ VAR_9 ].shaderInfo->surfaceFlags );
   }
   else{
    VAR_12->shaderNum = FUNC_0( ((void*)0), ((void*)0), ((void*)0) );
   }
  }
 }
}
