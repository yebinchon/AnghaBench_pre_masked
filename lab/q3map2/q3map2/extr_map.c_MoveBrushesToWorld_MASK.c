
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ parseMesh_t ;
struct TYPE_7__ {TYPE_1__* patches; TYPE_3__* colorModBrushes; TYPE_3__* brushes; } ;
typedef TYPE_2__ entity_t ;
struct TYPE_8__ {struct TYPE_8__* nextColorModBrush; struct TYPE_8__* next; scalar_t__ opaque; } ;
typedef TYPE_3__ brush_t ;
struct TYPE_9__ {TYPE_1__* patches; TYPE_3__* colorModBrushes; TYPE_3__* lastBrush; TYPE_3__* brushes; } ;


 TYPE_4__* VAR_0 ;

void FUNC_0( entity_t *VAR_1 ){
 brush_t *VAR_2, *VAR_3;
 parseMesh_t *VAR_4;



 for ( VAR_2 = VAR_1->brushes; VAR_2 != ((void*)0); VAR_2 = VAR_3 )
 {

  VAR_3 = VAR_2->next;


  if ( VAR_2->opaque || VAR_0[ 0 ].lastBrush == ((void*)0) ) {
   VAR_2->next = VAR_0[ 0 ].brushes;
   VAR_0[ 0 ].brushes = VAR_2;
   if ( VAR_0[ 0 ].lastBrush == ((void*)0) ) {
    VAR_0[ 0 ].lastBrush = VAR_2;
   }
  }
  else
  {
   VAR_2->next = ((void*)0);
   VAR_0[ 0 ].lastBrush->next = VAR_2;
   VAR_0[ 0 ].lastBrush = VAR_2;
  }
 }
 VAR_1->brushes = ((void*)0);


 if ( VAR_1->colorModBrushes != ((void*)0) ) {
  for ( VAR_2 = VAR_1->colorModBrushes; VAR_2->nextColorModBrush != ((void*)0); VAR_2 = VAR_2->nextColorModBrush ) ;

  VAR_2->nextColorModBrush = VAR_0[ 0 ].colorModBrushes;
  VAR_0[ 0 ].colorModBrushes = VAR_1->colorModBrushes;

  VAR_1->colorModBrushes = ((void*)0);
 }


 if ( VAR_1->patches != ((void*)0) ) {
  for ( VAR_4 = VAR_1->patches; VAR_4->next != ((void*)0); VAR_4 = VAR_4->next ) ;

  VAR_4->next = VAR_0[ 0 ].patches;
  VAR_0[ 0 ].patches = VAR_1->patches;

  VAR_1->patches = ((void*)0);
 }
}
