
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int count; TYPE_2__* pol; } ;
typedef TYPE_4__ lwPolygonList ;
struct TYPE_12__ {int count; TYPE_3__* pt; } ;
typedef TYPE_5__ lwPointList ;
struct TYPE_10__ {size_t npols; int* pol; } ;
struct TYPE_9__ {int nverts; TYPE_1__* v; } ;
struct TYPE_8__ {size_t index; } ;


 int* FUNC_0 (size_t,int) ;

int FUNC_1( lwPointList *VAR_0, lwPolygonList *VAR_1 ){
 int VAR_2, VAR_3, VAR_4;



 for ( VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++ )
  for ( VAR_3 = 0; VAR_3 < VAR_1->pol[ VAR_2 ].nverts; VAR_3++ )
   ++VAR_0->pt[ VAR_1->pol[ VAR_2 ].v[ VAR_3 ].index ].npols;



 for ( VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++ ) {
  if ( VAR_0->pt[ VAR_2 ].npols == 0 ) {
   continue;
  }
  VAR_0->pt[ VAR_2 ].pol = FUNC_0( VAR_0->pt[ VAR_2 ].npols, sizeof( int ) );
  if ( !VAR_0->pt[ VAR_2 ].pol ) {
   return 0;
  }
  VAR_0->pt[ VAR_2 ].npols = 0;
 }



 for ( VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++ ) {
  for ( VAR_3 = 0; VAR_3 < VAR_1->pol[ VAR_2 ].nverts; VAR_3++ ) {
   VAR_4 = VAR_1->pol[ VAR_2 ].v[ VAR_3 ].index;
   VAR_0->pt[ VAR_4 ].pol[ VAR_0->pt[ VAR_4 ].npols ] = VAR_2;
   ++VAR_0->pt[ VAR_4 ].npols;
  }
 }

 return 1;
}
