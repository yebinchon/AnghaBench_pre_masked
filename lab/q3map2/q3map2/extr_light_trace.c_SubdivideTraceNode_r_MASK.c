
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_12__ {int numVerts; TYPE_1__* v; } ;
typedef TYPE_2__ traceWinding_t ;
struct TYPE_13__ {int type; int* children; float* mins; float* maxs; int numItems; size_t* items; float* plane; int maxItems; } ;
typedef TYPE_3__ traceNode_t ;
struct TYPE_11__ {scalar_t__* xyz; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (scalar_t__*,float*,float*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (float*,float*) ;
 int FUNC_5 (TYPE_2__*,float*,TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (double*) ;
 int FUNC_7 (float*,float*,scalar_t__*) ;
 size_t VAR_6 ;
 float FUNC_8 (float) ;
 int FUNC_9 (size_t*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_10 (int) ;
 TYPE_3__* VAR_10 ;
 TYPE_2__* VAR_11 ;

__attribute__((used)) static void FUNC_11( int VAR_12, int VAR_13 ){
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 vec3_t VAR_21;
 float VAR_22;
 double VAR_23[ 3 ];
 traceNode_t *VAR_24, *VAR_25, *VAR_26;
 traceWinding_t *VAR_27, VAR_28, VAR_29;



 if ( VAR_12 < 0 || VAR_12 >= VAR_9 ) {
  return;
 }


 VAR_24 = &VAR_10[ VAR_12 ];


 if ( VAR_13 >= VAR_1 ) {

  VAR_8++;
  return;
 }
 VAR_13++;


 if ( VAR_24->type >= 0 ) {

  VAR_18 = VAR_24->children[ 0 ];
  VAR_19 = VAR_24->children[ 1 ];
  FUNC_11( VAR_18, VAR_13 );
  FUNC_11( VAR_19, VAR_13 );
  return;
 }


 FUNC_4( VAR_24->mins, VAR_24->maxs );
 FUNC_6( VAR_23 );
 VAR_16 = 0;
 for ( VAR_14 = 0; VAR_14 < VAR_24->numItems; VAR_14++ )
 {

  VAR_27 = &VAR_11[ VAR_24->items[ VAR_14 ] ];


  for ( VAR_15 = 0; VAR_15 < VAR_27->numVerts; VAR_15++ )
  {
   FUNC_1( VAR_27->v[ VAR_15 ].xyz, VAR_24->mins, VAR_24->maxs );
   VAR_23[ 0 ] += VAR_27->v[ VAR_15 ].xyz[ 0 ];
   VAR_23[ 1 ] += VAR_27->v[ VAR_15 ].xyz[ 1 ];
   VAR_23[ 2 ] += VAR_27->v[ VAR_15 ].xyz[ 2 ];
   VAR_16++;
  }
 }



 if ( ( VAR_16 - ( VAR_24->numItems * 2 ) ) < VAR_0 ) {

  VAR_8++;
  return;
 }


 FUNC_7( VAR_24->maxs, VAR_24->mins, VAR_21 );
 if ( VAR_21[ 0 ] >= VAR_21[ 1 ] && VAR_21[ 0 ] >= VAR_21[ 2 ] ) {
  VAR_20 = VAR_3;
 }
 else if ( VAR_21[ 1 ] >= VAR_21[ 0 ] && VAR_21[ 1 ] >= VAR_21[ 2 ] ) {
  VAR_20 = VAR_4;
 }
 else{
  VAR_20 = VAR_5;
 }


 if ( VAR_21[ VAR_20 ] <= VAR_2 ) {

  VAR_8++;
  return;
 }


 if ( VAR_13 > VAR_7 ) {
  VAR_7 = VAR_13;
 }


 VAR_22 = FUNC_8( VAR_23[ VAR_20 ] / VAR_16 );


 if ( VAR_22 <= VAR_24->mins[ VAR_20 ] || VAR_22 >= VAR_24->maxs[ VAR_20 ] ) {
  VAR_22 = FUNC_8( 0.5f * ( VAR_24->mins[ VAR_20 ] + VAR_24->maxs[ VAR_20 ] ) );
 }


 VAR_18 = FUNC_3();
 VAR_19 = FUNC_3();


 VAR_24 = &VAR_10[ VAR_12 ];
 VAR_25 = &VAR_10[ VAR_18 ];
 VAR_26 = &VAR_10[ VAR_19 ];


 VAR_24->type = VAR_20;
 VAR_24->plane[ VAR_20 ] = 1.0f;
 VAR_24->plane[ 3 ] = VAR_22;
 VAR_24->children[ 0 ] = VAR_18;
 VAR_24->children[ 1 ] = VAR_19;


 VAR_25->maxItems = ( VAR_24->maxItems >> 1 );
 VAR_25->items = FUNC_10( VAR_25->maxItems * sizeof( *VAR_25->items ) );


 VAR_26->maxItems = ( VAR_24->maxItems >> 1 );
 VAR_26->items = FUNC_10( VAR_26->maxItems * sizeof( *VAR_26->items ) );


 for ( VAR_14 = 0; VAR_14 < VAR_24->numItems; VAR_14++ )
 {

  VAR_27 = &VAR_11[ VAR_24->items[ VAR_14 ] ];


  FUNC_5( VAR_27, VAR_24->plane, &VAR_28, &VAR_29 );


  if ( VAR_28.numVerts >= 3 || VAR_29.numVerts >= 3 ) {
   VAR_6 = VAR_24->items[ VAR_14 ];
  }


  if ( VAR_28.numVerts >= 3 ) {
   VAR_17 = FUNC_2( &VAR_28 );
   FUNC_0( VAR_25, VAR_17 );
  }


  if ( VAR_29.numVerts >= 3 ) {
   VAR_17 = FUNC_2( &VAR_29 );
   FUNC_0( VAR_26, VAR_17 );
  }
 }


 VAR_24->numItems = 0;
 VAR_24->maxItems = 0;
 FUNC_9( VAR_24->items );
 VAR_24->items = ((void*)0);


 if ( VAR_25->numItems <= 0 ) {
  VAR_25->maxItems = 0;
  FUNC_9( VAR_25->items );
  VAR_25->items = ((void*)0);
 }

 if ( VAR_26->numItems <= 0 ) {
  VAR_26->maxItems = 0;
  FUNC_9( VAR_26->items );
  VAR_26->items = ((void*)0);
 }


 FUNC_11( VAR_18, VAR_13 );
 FUNC_11( VAR_19, VAR_13 );
}
