
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int verts ;
typedef int vec3_t ;
struct TYPE_10__ {int numVerts; TYPE_4__* verts; } ;
typedef TYPE_1__ mapDrawSurface_t ;
struct TYPE_11__ {float intercept; struct TYPE_11__* prev; struct TYPE_11__* next; int xyz; } ;
typedef TYPE_2__ edgePoint_t ;
struct TYPE_12__ {TYPE_2__ chain; int dir; int origin; } ;
typedef TYPE_3__ edgeLine_t ;
typedef scalar_t__ byte ;
struct TYPE_13__ {float* st; scalar_t__** color; int normal; int xyz; scalar_t__** lightmap; } ;
typedef TYPE_4__ bspDrawVert_t ;


 float FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 void* FUNC_6 (int) ;

void FUNC_7( mapDrawSurface_t *VAR_9 ) {
 int VAR_10, VAR_11, VAR_12;
 edgeLine_t *VAR_13;
 edgePoint_t *VAR_14;
 int VAR_15;
 int VAR_16[VAR_1];
 int VAR_17[VAR_1];
 int VAR_18[VAR_1];
 bspDrawVert_t VAR_19[VAR_1], *VAR_20, *VAR_21;
 int VAR_22;
 float VAR_23, VAR_24, VAR_25, VAR_26;
 vec3_t VAR_27;


 VAR_15 = VAR_9->numVerts;

 VAR_22 = 0;
 for ( VAR_10 = 0 ; VAR_10 < VAR_9->numVerts ; VAR_10++ )
 {
  VAR_16[VAR_10] = 0;
  VAR_18[VAR_10] = VAR_22;


  if ( VAR_22 == VAR_1 ) {
   FUNC_1( "MAX_SURFACE_VERTS" );
  }
  VAR_19[VAR_22] = VAR_9->verts[VAR_10];
  VAR_17[VAR_22] = VAR_10;
  VAR_22++;


  VAR_20 = &VAR_9->verts[VAR_10];
  VAR_21 = &VAR_9->verts[ ( VAR_10 + 1 ) % VAR_9->numVerts ];

  VAR_11 = (int)VAR_9->verts[VAR_10].lightmap[ 0 ][ 0 ];
  if ( VAR_11 == -1 ) {
   continue;
  }
  VAR_13 = &VAR_8[ VAR_11 ];

  FUNC_3( VAR_20->xyz, VAR_13->origin, VAR_27 );
  VAR_23 = FUNC_0( VAR_27, VAR_13->dir );

  FUNC_3( VAR_21->xyz, VAR_13->origin, VAR_27 );
  VAR_24 = FUNC_0( VAR_27, VAR_13->dir );


  if ( VAR_23 < VAR_24 ) {
   VAR_14 = VAR_13->chain.next;
  }
  else {
   VAR_14 = VAR_13->chain.prev;
  }

  for ( ; VAR_14 != &VAR_13->chain ; ) {
   if ( VAR_23 < VAR_24 ) {
    if ( VAR_14->intercept > VAR_24 - VAR_2 ) {
     break;
    }
   }
   else {
    if ( VAR_14->intercept < VAR_24 + VAR_2 ) {
     break;
    }
   }

   if (
    ( VAR_23 < VAR_24 && VAR_14->intercept > VAR_23 + VAR_2 ) ||
    ( VAR_23 > VAR_24 && VAR_14->intercept < VAR_23 - VAR_2 ) ) {

    if ( VAR_22 == VAR_1 ) {
     FUNC_1( "MAX_SURFACE_VERTS" );
    }
    FUNC_5(&VAR_19[ VAR_22 ], 0, sizeof(VAR_19[ VAR_22 ]));


    FUNC_2( VAR_14->xyz, VAR_19[ VAR_22 ].xyz );


    VAR_25 = ( VAR_14->intercept - VAR_23 ) / ( VAR_24 - VAR_23 );
    for ( VAR_11 = 0 ; VAR_11 < 2 ; VAR_11++ ) {
     VAR_19[ VAR_22 ].st[VAR_11] = VAR_20->st[VAR_11] +
             VAR_25 * ( VAR_21->st[VAR_11] - VAR_20->st[VAR_11] );
    }


    FUNC_2( VAR_20->normal, VAR_19[ VAR_22 ].normal );


    for ( VAR_12 = 0; VAR_12 < VAR_0; VAR_12++ )
    {
     for ( VAR_11 = 0; VAR_11 < 4; VAR_11++ )
     {
      VAR_26 = (float) VAR_20->color[ VAR_12 ][ VAR_11 ] + VAR_25 * ( (float) VAR_21->color[ VAR_12 ][ VAR_11 ] - (float) VAR_20->color[ VAR_12 ][ VAR_11 ] );
      VAR_19[ VAR_22 ].color[ VAR_12 ][ VAR_11 ] = (byte) ( VAR_26 < 255.0f ? VAR_26 : 255 );
     }
    }


    VAR_17[ VAR_22 ] = VAR_10;
    VAR_22++;
    VAR_16[ VAR_10 ]++;
   }

   if ( VAR_23 < VAR_24 ) {
    VAR_14 = VAR_14->next;
   }
   else {
    VAR_14 = VAR_14->prev;
   }
  }
 }

 VAR_3 += VAR_22 - VAR_9->numVerts;
 VAR_7 += VAR_22;







 for ( VAR_10 = 0 ; VAR_10 < VAR_22 ; VAR_10++ ) {
  if ( VAR_17[ ( VAR_10 + 1 ) % VAR_22 ] == VAR_17[ VAR_10 ] ) {
   continue;
  }
  VAR_11 = ( VAR_10 + VAR_22 - 1 ) % VAR_22;
  VAR_12 = ( VAR_10 + VAR_22 - 2 ) % VAR_22;
  if ( VAR_17[ VAR_11 ] == VAR_17[ VAR_12 ] ) {
   continue;
  }
  break;
 }

 if ( VAR_10 == 0 ) {

  VAR_5++;

  VAR_9->numVerts = VAR_22;
  VAR_9->verts = FUNC_6( VAR_22 * sizeof( *VAR_9->verts ) );
  FUNC_4( VAR_9->verts, VAR_19, VAR_22 * sizeof( *VAR_9->verts ) );

  return;
 }
 if ( VAR_10 == VAR_22 ) {

  VAR_4++;
 }
 else {

  VAR_6++;

 }

 VAR_9->numVerts = VAR_22;
 VAR_9->verts = FUNC_6( VAR_22 * sizeof( *VAR_9->verts ) );

 for ( VAR_11 = 0 ; VAR_11 < VAR_9->numVerts ; VAR_11++ ) {
  VAR_9->verts[VAR_11] = VAR_19[ ( VAR_11 + VAR_10 ) % VAR_9->numVerts ];
 }
}
