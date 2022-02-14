
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int winding_t ;
typedef int tree_t ;
struct TYPE_15__ {TYPE_3__* shaderInfo; } ;
typedef TYPE_2__ side_t ;
struct TYPE_16__ {int compileFlags; float subdivisions; } ;
typedef TYPE_3__ shaderInfo_t ;
struct TYPE_17__ {scalar_t__ type; float* texRange; float* maxs; float* mins; int fogNum; TYPE_1__* sideRef; int * mapBrush; } ;
typedef TYPE_4__ mapDrawSurface_t ;
struct TYPE_18__ {int firstDrawSurf; } ;
typedef TYPE_5__ entity_t ;
typedef int brush_t ;
struct TYPE_14__ {TYPE_2__* side; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,int *,TYPE_2__*,int *,int,float) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (float) ;
 double FUNC_7 (float) ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 float VAR_6 ;

void FUNC_8( entity_t *VAR_7, tree_t *VAR_8 ){
 int VAR_9, VAR_10, VAR_11, VAR_12;
 mapDrawSurface_t *VAR_13;
 brush_t *VAR_14;
 side_t *VAR_15;
 shaderInfo_t *VAR_16;
 winding_t *VAR_17;
 float VAR_18, VAR_19, VAR_20, VAR_21;



 FUNC_4( VAR_2, "--- SubdivideFaceSurfaces ---\n" );


 VAR_11 = VAR_4;
 for ( VAR_9 = VAR_7->firstDrawSurf; VAR_9 < VAR_11; VAR_9++ )
 {

  VAR_13 = &VAR_3[ VAR_9 ];


  if ( VAR_13->type != VAR_1 || VAR_13->mapBrush == ((void*)0) || VAR_13->sideRef == ((void*)0) || VAR_13->sideRef->side == ((void*)0) ) {
   continue;
  }


  VAR_14 = VAR_13->mapBrush;
  VAR_15 = VAR_13->sideRef->side;


  VAR_16 = VAR_15->shaderInfo;
  if ( VAR_16 == ((void*)0) ) {
   continue;
  }


  if ( VAR_16->compileFlags & VAR_0 ) {
   continue;
  }


  FUNC_1( 1, VAR_13 );
  if ( FUNC_0( VAR_13 ) == VAR_5 ) {

   VAR_18 = ( VAR_13->texRange[ 0 ] > VAR_13->texRange[ 1 ] ? VAR_13->texRange[ 0 ] : VAR_13->texRange[ 1 ] );
   VAR_19 = VAR_13->maxs[ 0 ] - VAR_13->mins[ 0 ];
   for ( VAR_10 = 1; VAR_10 < 3; VAR_10++ )
    if ( ( VAR_13->maxs[ VAR_10 ] - VAR_13->mins[ VAR_10 ] ) > VAR_19 ) {
     VAR_19 = VAR_13->maxs[ VAR_10 ] - VAR_13->mins[ VAR_10 ];
    }
   VAR_20 = ( VAR_19 / VAR_18 ) * VAR_6;
   VAR_20 = FUNC_6( VAR_20 / 2 ) * 2;
   for ( VAR_10 = 1; VAR_10 < 8; VAR_10++ )
   {
    VAR_21 = FUNC_6( (float) VAR_6 / VAR_10 );
    if ( FUNC_7( VAR_20 - VAR_21 ) <= 4.0 ) {
     VAR_20 = VAR_21;
     break;
    }
   }
  }
  else{
   VAR_20 = VAR_16->subdivisions;
  }


  if ( VAR_16->subdivisions > 0 && VAR_16->subdivisions < VAR_20 ) {
   VAR_20 = VAR_16->subdivisions;
  }
  if ( VAR_20 < 1.0f ) {
   continue;
  }


  VAR_12 = VAR_13->fogNum;


  VAR_17 = FUNC_5( VAR_13 );
  FUNC_2( VAR_13 );


  FUNC_3( VAR_7, VAR_14, VAR_15, VAR_17, VAR_12, VAR_20 );
 }
}
