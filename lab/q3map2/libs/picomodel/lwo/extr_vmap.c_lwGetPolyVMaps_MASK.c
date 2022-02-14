
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int lwVMapPt ;
struct TYPE_9__ {int nverts; size_t* pindex; scalar_t__* vindex; struct TYPE_9__* next; scalar_t__ perpoly; } ;
typedef TYPE_2__ lwVMap ;
struct TYPE_10__ {int count; TYPE_1__* pol; } ;
typedef TYPE_3__ lwPolygonList ;
struct TYPE_11__ {scalar_t__ index; int nvmaps; TYPE_7__* vm; } ;
typedef TYPE_4__ lwPolVert ;
struct TYPE_12__ {int index; TYPE_2__* vmap; } ;
struct TYPE_8__ {int nverts; TYPE_4__* v; } ;


 TYPE_7__* FUNC_0 (int,int) ;

int FUNC_1( lwPolygonList *VAR_0, lwVMap *VAR_1 ){
 lwVMap *VAR_2;
 lwPolVert *VAR_3;
 int VAR_4, VAR_5;



 VAR_2 = VAR_1;
 while ( VAR_2 ) {
  if ( VAR_2->perpoly ) {
   for ( VAR_4 = 0; VAR_4 < VAR_2->nverts; VAR_4++ ) {
    for ( VAR_5 = 0; VAR_5 < VAR_0->pol[ VAR_2->pindex[ VAR_4 ]].nverts; VAR_5++ ) {
     VAR_3 = &VAR_0->pol[ VAR_2->pindex[ VAR_4 ]].v[ VAR_5 ];
     if ( VAR_2->vindex[ VAR_4 ] == VAR_3->index ) {
      ++VAR_3->nvmaps;
      break;
     }
    }
   }
  }
  VAR_2 = VAR_2->next;
 }



 for ( VAR_4 = 0; VAR_4 < VAR_0->count; VAR_4++ ) {
  for ( VAR_5 = 0; VAR_5 < VAR_0->pol[ VAR_4 ].nverts; VAR_5++ ) {
   VAR_3 = &VAR_0->pol[ VAR_4 ].v[ VAR_5 ];
   if ( VAR_3->nvmaps ) {
    VAR_3->vm = FUNC_0( VAR_3->nvmaps, sizeof( lwVMapPt ) );
    if ( !VAR_3->vm ) {
     return 0;
    }
    VAR_3->nvmaps = 0;
   }
  }
 }



 VAR_2 = VAR_1;
 while ( VAR_2 ) {
  if ( VAR_2->perpoly ) {
   for ( VAR_4 = 0; VAR_4 < VAR_2->nverts; VAR_4++ ) {
    for ( VAR_5 = 0; VAR_5 < VAR_0->pol[ VAR_2->pindex[ VAR_4 ]].nverts; VAR_5++ ) {
     VAR_3 = &VAR_0->pol[ VAR_2->pindex[ VAR_4 ]].v[ VAR_5 ];
     if ( VAR_2->vindex[ VAR_4 ] == VAR_3->index ) {
      VAR_3->vm[ VAR_3->nvmaps ].vmap = VAR_2;
      VAR_3->vm[ VAR_3->nvmaps ].index = VAR_4;
      ++VAR_3->nvmaps;
      break;
     }
    }
   }
  }
  VAR_2 = VAR_2->next;
 }

 return 1;
}
