
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int count; TYPE_3__* pol; } ;
typedef TYPE_4__ lwPolygonList ;
struct TYPE_12__ {TYPE_1__* pt; } ;
typedef TYPE_5__ lwPointList ;
struct TYPE_10__ {int nverts; int norm; TYPE_2__* v; } ;
struct TYPE_9__ {size_t index; } ;
struct TYPE_8__ {float* pos; } ;


 int FUNC_0 (float*,float*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2( lwPointList *VAR_0, lwPolygonList *VAR_1 ){
 int VAR_2, VAR_3;
 float VAR_4[ 3 ], VAR_5[ 3 ], VAR_6[ 3 ], VAR_7[ 3 ], VAR_8[ 3 ];

 for ( VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++ ) {
  if ( VAR_1->pol[ VAR_2 ].nverts < 3 ) {
   continue;
  }
  for ( VAR_3 = 0; VAR_3 < 3; VAR_3++ ) {
   VAR_4[ VAR_3 ] = VAR_0->pt[ VAR_1->pol[ VAR_2 ].v[ 0 ].index ].pos[ VAR_3 ];
   VAR_5[ VAR_3 ] = VAR_0->pt[ VAR_1->pol[ VAR_2 ].v[ 1 ].index ].pos[ VAR_3 ];
   VAR_6[ VAR_3 ] = VAR_0->pt[ VAR_1->pol[ VAR_2 ].v[
          VAR_1->pol[ VAR_2 ].nverts - 1 ].index ].pos[ VAR_3 ];
  }

  for ( VAR_3 = 0; VAR_3 < 3; VAR_3++ ) {
   VAR_7[ VAR_3 ] = VAR_5[ VAR_3 ] - VAR_4[ VAR_3 ];
   VAR_8[ VAR_3 ] = VAR_6[ VAR_3 ] - VAR_4[ VAR_3 ];
  }

  FUNC_0( VAR_7, VAR_8, VAR_1->pol[ VAR_2 ].norm );
  FUNC_1( VAR_1->pol[ VAR_2 ].norm );
 }
}
