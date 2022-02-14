
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; TYPE_4__* pol; } ;
typedef TYPE_1__ lwPolygonList ;
struct TYPE_6__ {int nverts; struct TYPE_6__* v; struct TYPE_6__* vm; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2( lwPolygonList *VAR_0 ){
 int VAR_1, VAR_2;

 if ( VAR_0 ) {
  if ( VAR_0->pol ) {
   for ( VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++ ) {
    if ( VAR_0->pol[ VAR_1 ].v ) {
     for ( VAR_2 = 0; VAR_2 < VAR_0->pol[ VAR_1 ].nverts; VAR_2++ )
      if ( VAR_0->pol[ VAR_1 ].v[ VAR_2 ].vm ) {
       FUNC_0( VAR_0->pol[ VAR_1 ].v[ VAR_2 ].vm );
      }
    }
   }
   if ( VAR_0->pol[ 0 ].v ) {
    FUNC_0( VAR_0->pol[ 0 ].v );
   }
   FUNC_0( VAR_0->pol );
  }
  FUNC_1( VAR_0, 0, sizeof( lwPolygonList ) );
 }
}
