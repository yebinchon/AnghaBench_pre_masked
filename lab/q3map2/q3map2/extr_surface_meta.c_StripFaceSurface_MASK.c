
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
struct TYPE_8__ {int numVerts; scalar_t__ type; int numIndexes; int indexes; TYPE_4__* verts; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_9__ {scalar_t__* xyz; } ;
struct TYPE_7__ {scalar_t__ autosprite; } ;


 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int*,int ,int,int) ;
 int FUNC_5 (int ,int*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int) ;

void FUNC_7( mapDrawSurface_t *VAR_5 ){
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15[ VAR_0 ];
 vec_t *VAR_16, *VAR_17;



 if ( !VAR_5->numVerts || ( VAR_5->type != VAR_2 && VAR_5->type != VAR_1 ) ) {
  return;
 }


 if ( VAR_5->numVerts == 3 ) {
  VAR_10 = 3;
  FUNC_4( VAR_15, 0, 1, 2 );
 }
 else
 {

  VAR_8 = 0;
  if ( VAR_5->shaderInfo != ((void*)0) && VAR_5->shaderInfo->autosprite == VAR_4 ) {
   for ( VAR_6 = 0; VAR_6 < VAR_5->numVerts; VAR_6++ )
   {

    VAR_16 = VAR_5->verts[ VAR_6 ].xyz;
    VAR_17 = VAR_5->verts[ VAR_8 ].xyz;


    if ( VAR_16[ 0 ] < VAR_17[ 0 ] ||
      ( VAR_16[ 0 ] == VAR_17[ 0 ] && VAR_16[ 1 ] < VAR_17[ 1 ] ) ||
      ( VAR_16[ 0 ] == VAR_17[ 0 ] && VAR_16[ 1 ] == VAR_17[ 1 ] && VAR_16[ 2 ] < VAR_17[ 2 ] ) ) {
     VAR_8 = VAR_6;
    }
   }
  }


  VAR_10 = ( VAR_5->numVerts - 2 ) * 3;
  if ( VAR_10 > VAR_0 ) {
   FUNC_1( "MAX_INDEXES exceeded for surface (%d > %d) (%d verts)", VAR_10, VAR_0, VAR_5->numVerts );
  }


  for ( VAR_7 = 0; VAR_7 < VAR_5->numVerts; VAR_7++ )
  {

   VAR_9 = ( VAR_7 + VAR_8 ) % VAR_5->numVerts;


   for ( VAR_11 = 0, VAR_6 = 0; VAR_6 < VAR_5->numVerts - 2 - VAR_6; VAR_6++ )
   {

    VAR_12 = ( VAR_5->numVerts - 1 - VAR_6 + VAR_9 ) % VAR_5->numVerts;
    VAR_13 = ( VAR_6 + VAR_9 ) % VAR_5->numVerts;
    VAR_14 = ( VAR_5->numVerts - 2 - VAR_6 + VAR_9 ) % VAR_5->numVerts;


    if ( VAR_5->numVerts > 4 && FUNC_3( VAR_5->verts, VAR_12, VAR_13, VAR_14 ) ) {
     break;
    }
    VAR_15[ VAR_11++ ] = VAR_12;
    VAR_15[ VAR_11++ ] = VAR_13;
    VAR_15[ VAR_11++ ] = VAR_14;


    if ( VAR_6 + 1 != VAR_5->numVerts - 1 - VAR_6 ) {

     VAR_12 = ( VAR_5->numVerts - 2 - VAR_6 + VAR_9 ) % VAR_5->numVerts;
     VAR_13 = ( VAR_6 + VAR_9 ) % VAR_5->numVerts;
     VAR_14 = ( VAR_6 + 1 + VAR_9 ) % VAR_5->numVerts;


     if ( VAR_5->numVerts > 4 && FUNC_3( VAR_5->verts, VAR_12, VAR_13, VAR_14 ) ) {
      break;
     }
     VAR_15[ VAR_11++ ] = VAR_12;
     VAR_15[ VAR_11++ ] = VAR_13;
     VAR_15[ VAR_11++ ] = VAR_14;
    }
   }


   if ( VAR_11 == VAR_10 ) {
    break;
   }
  }


  if ( VAR_11 < VAR_10 ) {
   FUNC_2( VAR_5 );
   return;
  }
 }


 VAR_5->numIndexes = VAR_10;
 VAR_5->indexes = FUNC_6( VAR_5->numIndexes * sizeof( int ) );
 FUNC_5( VAR_5->indexes, VAR_15, VAR_5->numIndexes * sizeof( int ) );


 VAR_3++;


 FUNC_0( 1, VAR_5 );
}
