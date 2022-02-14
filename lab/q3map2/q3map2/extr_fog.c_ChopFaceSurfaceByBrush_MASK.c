
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_16__ {size_t planenum; } ;
typedef TYPE_2__ side_t ;
typedef int qboolean ;
struct TYPE_17__ {int dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_18__ {int mapBrush; int fogNum; TYPE_1__* sideRef; } ;
typedef TYPE_4__ mapDrawSurface_t ;
typedef int entity_t ;
struct TYPE_19__ {int numsides; TYPE_2__* sides; } ;
typedef TYPE_5__ brush_t ;
struct TYPE_15__ {TYPE_2__* side; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,int ,int ,int ,int **,int **) ;
 TYPE_4__* FUNC_2 (int *,int ,TYPE_2__*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_5 (TYPE_4__*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_6 (TYPE_4__*,TYPE_4__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

qboolean FUNC_7( entity_t *VAR_7, mapDrawSurface_t *VAR_8, brush_t *VAR_9 ){
 int VAR_10, VAR_11;
 side_t *VAR_12;
 plane_t *VAR_13;
 winding_t *VAR_14;
 winding_t *VAR_15, *VAR_16;
 winding_t *VAR_17[ VAR_0 ];
 int VAR_18;
 mapDrawSurface_t *VAR_19;



 if ( VAR_8->sideRef == ((void*)0) || VAR_8->sideRef->side == ((void*)0) ) {
  return VAR_5;
 }


 VAR_14 = FUNC_5( VAR_8 );
 VAR_18 = 0;


 for ( VAR_10 = 0; VAR_10 < VAR_9->numsides; VAR_10++ )
 {

  VAR_12 = &VAR_9->sides[ VAR_10 ];
  VAR_13 = &VAR_2[ VAR_12->planenum ];


  if ( VAR_8->sideRef->side->planenum == VAR_12->planenum ) {
   return VAR_5;
  }


  if ( ( VAR_8->sideRef->side->planenum ^ 1 ) == VAR_12->planenum ) {
   continue;
  }


  FUNC_1( VAR_14, VAR_13->normal, VAR_13->dist, VAR_1, &VAR_15, &VAR_16 );
  FUNC_4( VAR_14 );

  if ( VAR_16 == ((void*)0) ) {

   for ( VAR_11 = 0; VAR_11 < VAR_18; VAR_11++ )
    FUNC_4( VAR_17[ VAR_11 ] );
   return VAR_5;
  }

  if ( VAR_15 != ((void*)0) ) {
   if ( VAR_18 == VAR_0 ) {
    FUNC_3( "MAX_BRUSH_SIDES" );
   }
   VAR_17[ VAR_18 ] = VAR_15;
   VAR_18++;
  }

  VAR_14 = VAR_16;
 }




 VAR_3 += VAR_18;
 VAR_12 = VAR_8->sideRef->side;
 for ( VAR_10 = 0; VAR_10 < VAR_18; VAR_10++ )
 {
  VAR_19 = FUNC_2( VAR_7, VAR_8->mapBrush, VAR_12, VAR_17[ VAR_10 ] );
  VAR_19->fogNum = VAR_8->fogNum;
  FUNC_4( VAR_17[ VAR_10 ] );
 }






 VAR_19 = FUNC_2( VAR_7, VAR_8->mapBrush, VAR_12, VAR_14 );
 if ( VAR_19 == ((void*)0) ) {
  return VAR_5;
 }


 FUNC_0( VAR_8 );
 FUNC_6( VAR_8, VAR_19, sizeof( mapDrawSurface_t ) );


 VAR_4--;


 return VAR_6;
}
