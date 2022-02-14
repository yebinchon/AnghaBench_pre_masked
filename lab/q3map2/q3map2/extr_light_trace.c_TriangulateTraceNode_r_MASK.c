
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tt ;
struct TYPE_10__ {int numVerts; TYPE_1__* v; int infoNum; } ;
typedef TYPE_2__ traceWinding_t ;
struct TYPE_11__ {int edge2; TYPE_1__* v; int edge1; int infoNum; } ;
typedef TYPE_3__ traceTriangle_t ;
struct TYPE_12__ {scalar_t__ type; int* children; int numItems; int maxItems; int* items; } ;
typedef TYPE_4__ traceNode_t ;
struct TYPE_9__ {int xyz; } ;


 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int*) ;
 int VAR_0 ;
 int* FUNC_4 (int) ;
 TYPE_4__* VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_5( int VAR_3 ){
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, *VAR_10;
 traceNode_t *VAR_11;
 traceWinding_t *VAR_12;
 traceTriangle_t VAR_13;



 if ( VAR_3 < 0 || VAR_3 >= VAR_0 ) {
  return 0;
 }


 VAR_11 = &VAR_1[ VAR_3 ];


 if ( VAR_11->type >= 0 ) {

  VAR_7 = VAR_11->children[ 0 ];
  VAR_8 = VAR_11->children[ 1 ];
  VAR_11->numItems = FUNC_5( VAR_7 );
  VAR_11->numItems += FUNC_5( VAR_8 );
  return VAR_11->numItems;
 }


 if ( VAR_11->numItems == 0 ) {
  VAR_11->maxItems = 0;
  if ( VAR_11->items != ((void*)0) ) {
   FUNC_3( VAR_11->items );
  }
  return VAR_11->numItems;
 }


 VAR_9 = VAR_11->numItems;
 VAR_10 = VAR_11->items;


 VAR_11->numItems = 0;
 VAR_11->maxItems = VAR_9 * 2;
 VAR_11->items = FUNC_4( VAR_11->maxItems * sizeof( VAR_13 ) );


 for ( VAR_4 = 0; VAR_4 < VAR_9; VAR_4++ )
 {

  VAR_12 = &VAR_2[ VAR_10[ VAR_4 ] ];


  VAR_13.infoNum = VAR_12->infoNum;
  VAR_13.v[ 0 ] = VAR_12->v[ 0 ];


  for ( VAR_5 = 1; VAR_5 + 1 < VAR_12->numVerts; VAR_5++ )
  {

   VAR_13.v[ 1 ] = VAR_12->v[ VAR_5 ];
   VAR_13.v[ 2 ] = VAR_12->v[ VAR_5 + 1 ];


   FUNC_2( VAR_13.v[ 1 ].xyz, VAR_13.v[ 0 ].xyz, VAR_13.edge1 );
   FUNC_2( VAR_13.v[ 2 ].xyz, VAR_13.v[ 0 ].xyz, VAR_13.edge2 );


   VAR_6 = FUNC_1( &VAR_13 );
   FUNC_0( VAR_11, VAR_6 );
  }
 }


 if ( VAR_10 != ((void*)0) ) {
  FUNC_3( VAR_10 );
 }


 return VAR_11->numItems;
}
