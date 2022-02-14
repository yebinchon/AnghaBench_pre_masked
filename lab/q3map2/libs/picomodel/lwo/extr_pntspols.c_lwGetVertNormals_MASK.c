
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int count; TYPE_4__* pol; } ;
typedef TYPE_5__ lwPolygonList ;
struct TYPE_14__ {TYPE_1__* pt; } ;
typedef TYPE_6__ lwPointList ;
struct TYPE_12__ {int nverts; scalar_t__ smoothgrp; TYPE_3__* v; scalar_t__* norm; TYPE_2__* surf; } ;
struct TYPE_11__ {int index; scalar_t__* norm; } ;
struct TYPE_10__ {float smooth; } ;
struct TYPE_9__ {int npols; int* pol; } ;


 int FUNC_0 (scalar_t__*) ;
 float FUNC_1 (scalar_t__*,scalar_t__*) ;

void FUNC_2( lwPointList *VAR_0, lwPolygonList *VAR_1 ){
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 float VAR_8;

 for ( VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++ ) {
  for ( VAR_4 = 0; VAR_4 < VAR_1->pol[ VAR_2 ].nverts; VAR_4++ ) {
   for ( VAR_3 = 0; VAR_3 < 3; VAR_3++ )
    VAR_1->pol[ VAR_2 ].v[ VAR_4 ].norm[ VAR_3 ] = VAR_1->pol[ VAR_2 ].norm[ VAR_3 ];

   if ( VAR_1->pol[ VAR_2 ].surf->smooth <= 0 ) {
    continue;
   }

   VAR_7 = VAR_1->pol[ VAR_2 ].v[ VAR_4 ].index;

   for ( VAR_5 = 0; VAR_5 < VAR_0->pt[ VAR_7 ].npols; VAR_5++ ) {
    VAR_6 = VAR_0->pt[ VAR_7 ].pol[ VAR_5 ];
    if ( VAR_6 == VAR_2 ) {
     continue;
    }

    if ( VAR_1->pol[ VAR_2 ].smoothgrp != VAR_1->pol[ VAR_6 ].smoothgrp ) {
     continue;
    }
    VAR_8 = FUNC_1( VAR_1->pol[ VAR_2 ].norm, VAR_1->pol[ VAR_6 ].norm );
    if ( VAR_8 > VAR_1->pol[ VAR_2 ].surf->smooth ) {
     continue;
    }

    for ( VAR_3 = 0; VAR_3 < 3; VAR_3++ )
     VAR_1->pol[ VAR_2 ].v[ VAR_4 ].norm[ VAR_3 ] += VAR_1->pol[ VAR_6 ].norm[ VAR_3 ];
   }

   FUNC_0( VAR_1->pol[ VAR_2 ].v[ VAR_4 ].norm );
  }
 }
}
