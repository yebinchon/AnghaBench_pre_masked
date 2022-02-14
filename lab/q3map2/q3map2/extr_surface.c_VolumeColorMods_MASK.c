
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {float dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_15__ {scalar_t__ entityNum; scalar_t__* maxs; scalar_t__* mins; int numVerts; TYPE_10__* verts; } ;
typedef TYPE_4__ mapDrawSurface_t ;
struct TYPE_16__ {TYPE_6__* colorModBrushes; } ;
typedef TYPE_5__ entity_t ;
struct TYPE_17__ {scalar_t__ entityNum; scalar_t__* mins; scalar_t__* maxs; int numsides; TYPE_2__* contentShader; TYPE_1__* sides; struct TYPE_17__* nextColorModBrush; } ;
typedef TYPE_6__ brush_t ;
struct TYPE_13__ {int colorMod; } ;
struct TYPE_12__ {size_t planenum; } ;
struct TYPE_11__ {int xyz; } ;


 int FUNC_0 (int ,int,TYPE_10__*) ;
 float FUNC_1 (int ,int ) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_2( entity_t *VAR_1, mapDrawSurface_t *VAR_2 ){
 int VAR_3, VAR_4;
 float VAR_5;
 brush_t *VAR_6;
 plane_t *VAR_7;



 if ( VAR_1->colorModBrushes == ((void*)0) ) {
  return;
 }


 for ( VAR_6 = VAR_1->colorModBrushes; VAR_6 != ((void*)0); VAR_6 = VAR_6->nextColorModBrush )
 {

  if ( VAR_6->entityNum != 0 && VAR_6->entityNum != VAR_2->entityNum ) {
   continue;
  }


  if ( VAR_6->mins[ 0 ] > VAR_2->maxs[ 0 ] || VAR_6->maxs[ 0 ] < VAR_2->mins[ 0 ] ||
    VAR_6->mins[ 1 ] > VAR_2->maxs[ 1 ] || VAR_6->maxs[ 1 ] < VAR_2->mins[ 1 ] ||
    VAR_6->mins[ 2 ] > VAR_2->maxs[ 2 ] || VAR_6->maxs[ 2 ] < VAR_2->mins[ 2 ] ) {
   continue;
  }


  for ( VAR_3 = 0; VAR_3 < VAR_2->numVerts; VAR_3++ )
  {

   for ( VAR_4 = 0; VAR_4 < VAR_6->numsides; VAR_4++ )
   {

    VAR_7 = &VAR_0[ VAR_6->sides[ VAR_4 ].planenum ];
    VAR_5 = FUNC_1( VAR_2->verts[ VAR_3 ].xyz, VAR_7->normal ) - VAR_7->dist;
    if ( VAR_5 > 1.0f ) {
     break;
    }
   }


   if ( VAR_4 == VAR_6->numsides ) {
    FUNC_0( VAR_6->contentShader->colorMod, 1, &VAR_2->verts[ VAR_3 ] );
   }
  }
 }
}
