
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec4_t ;
struct TYPE_12__ {int numVerts; int plane; TYPE_1__* v; } ;
typedef TYPE_2__ traceWinding_t ;
struct TYPE_13__ {scalar_t__ type; int* children; int plane; } ;
typedef TYPE_3__ traceNode_t ;
struct TYPE_11__ {int xyz; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__*,TYPE_2__*,TYPE_2__*) ;
 float FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__*,scalar_t__*) ;
 float FUNC_8 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9( traceWinding_t *VAR_4, int VAR_5 ){
 int VAR_6;
 vec4_t VAR_7, VAR_8, VAR_9;
 traceNode_t *VAR_10;
 traceWinding_t VAR_11, VAR_12;



 if ( VAR_5 < 0 || VAR_5 >= VAR_1 ) {
  return;
 }


 VAR_10 = &VAR_2[ VAR_5 ];


 if ( VAR_10->type >= 0 ) {

  if ( VAR_5 == VAR_0 ) {
   if ( !FUNC_5( VAR_4->plane, VAR_4->v[ 0 ].xyz, VAR_4->v[ 1 ].xyz, VAR_4->v[ 2 ].xyz ) ) {
    return;
   }
  }


  if ( VAR_10->children[ 0 ] == 0 || VAR_10->children[ 1 ] == 0 ) {
   FUNC_4( "Invalid tracenode: %d", VAR_5 );
  }


  FUNC_6( VAR_10->plane, VAR_7 );


  FUNC_6( VAR_4->plane, VAR_8 );


  FUNC_7( VAR_3, VAR_8, VAR_9 );
  VAR_9[ 3 ] = -VAR_8[ 3 ];


  if ( FUNC_3( VAR_7, VAR_8 ) > 0.999f && FUNC_8( VAR_7[ 3 ] - VAR_8[ 3 ] ) < 0.001f ) {
   FUNC_9( VAR_4, VAR_10->children[ 0 ] );
   return;
  }


  if ( FUNC_3( VAR_7, VAR_9 ) > 0.999f && FUNC_8( VAR_7[ 3 ] - VAR_9[ 3 ] ) < 0.001f ) {
   FUNC_9( VAR_4, VAR_10->children[ 1 ] );
   return;
  }


  FUNC_2( VAR_4, VAR_7, &VAR_11, &VAR_12 );


  if ( VAR_11.numVerts >= 3 ) {
   FUNC_9( &VAR_11, VAR_10->children[ 0 ] );
  }
  if ( VAR_12.numVerts >= 3 ) {
   FUNC_9( &VAR_12, VAR_10->children[ 1 ] );
  }


  return;
 }


 VAR_6 = FUNC_1( VAR_4 );
 FUNC_0( VAR_10, VAR_6 );
}
