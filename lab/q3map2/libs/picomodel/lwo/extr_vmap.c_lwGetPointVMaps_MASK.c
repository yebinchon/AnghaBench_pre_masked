
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lwVMapPt ;
struct TYPE_8__ {int nverts; size_t* vindex; struct TYPE_8__* next; int perpoly; } ;
typedef TYPE_2__ lwVMap ;
struct TYPE_9__ {int count; TYPE_1__* pt; } ;
typedef TYPE_3__ lwPointList ;
struct TYPE_10__ {int index; TYPE_2__* vmap; } ;
struct TYPE_7__ {int nvmaps; TYPE_6__* vm; } ;


 TYPE_6__* FUNC_0 (int,int) ;

int FUNC_1( lwPointList *VAR_0, lwVMap *VAR_1 ){
 lwVMap *VAR_2;
 int VAR_3, VAR_4, VAR_5;



 VAR_2 = VAR_1;
 while ( VAR_2 ) {
  if ( !VAR_2->perpoly ) {
   for ( VAR_3 = 0; VAR_3 < VAR_2->nverts; VAR_3++ )
    ++VAR_0->pt[ VAR_2->vindex[ VAR_3 ]].nvmaps;
  }
  VAR_2 = VAR_2->next;
 }



 for ( VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++ ) {
  if ( VAR_0->pt[ VAR_3 ].nvmaps ) {
   VAR_0->pt[ VAR_3 ].vm = FUNC_0( VAR_0->pt[ VAR_3 ].nvmaps, sizeof( lwVMapPt ) );
   if ( !VAR_0->pt[ VAR_3 ].vm ) {
    return 0;
   }
   VAR_0->pt[ VAR_3 ].nvmaps = 0;
  }
 }



 VAR_2 = VAR_1;
 while ( VAR_2 ) {
  if ( !VAR_2->perpoly ) {
   for ( VAR_3 = 0; VAR_3 < VAR_2->nverts; VAR_3++ ) {
    VAR_4 = VAR_2->vindex[ VAR_3 ];
    VAR_5 = VAR_0->pt[ VAR_4 ].nvmaps;
    VAR_0->pt[ VAR_4 ].vm[ VAR_5 ].vmap = VAR_2;
    VAR_0->pt[ VAR_4 ].vm[ VAR_5 ].index = VAR_3;
    ++VAR_0->pt[ VAR_4 ].nvmaps;
   }
  }
  VAR_2 = VAR_2->next;
 }

 return 1;
}
