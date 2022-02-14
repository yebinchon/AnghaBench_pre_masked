
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_12__ {int width; int height; TYPE_2__* verts; } ;
typedef TYPE_1__ mesh_t ;
struct TYPE_13__ {int xyz; } ;
typedef TYPE_2__ bspDrawVert_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,float,TYPE_2__*) ;
 int VAR_0 ;
 float FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;

mesh_t *FUNC_6( mesh_t *VAR_1, float VAR_2, int VAR_3, int *VAR_4, int *VAR_5 ){
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 vec3_t VAR_13;
 float VAR_14, VAR_15, VAR_16;
 mesh_t VAR_17;
 bspDrawVert_t VAR_18[VAR_0][VAR_0];

 VAR_17.width = VAR_1->width;
 VAR_17.height = VAR_1->height;

 for ( VAR_6 = 0 ; VAR_6 < VAR_1->width ; VAR_6++ ) {
  for ( VAR_7 = 0 ; VAR_7 < VAR_1->height ; VAR_7++ ) {
   VAR_18[VAR_7][VAR_6] = VAR_1->verts[VAR_7 * VAR_1->width + VAR_6];
  }
 }

 if ( VAR_3 > VAR_0 ) {
  FUNC_1( "SubdivideMeshQuads: maxsize > MAX_EXPANDED_AXIS" );
 }



 VAR_11 = ( VAR_3 - VAR_1->width ) / ( VAR_1->width - 1 );

 for ( VAR_9 = 0, VAR_7 = 0 ; VAR_9 < VAR_1->width - 1; VAR_9++, VAR_7 += VAR_12 + 1 ) {
  VAR_15 = 0;
  for ( VAR_6 = 0 ; VAR_6 < VAR_17.height ; VAR_6++ ) {
   FUNC_4( VAR_18[VAR_6][VAR_7 + 1].xyz, VAR_18[VAR_6][VAR_7].xyz, VAR_13 );
   VAR_14 = FUNC_3( VAR_13 );
   if ( VAR_14 > VAR_15 ) {
    VAR_15 = VAR_14;
   }
  }

  VAR_12 = (int) ( VAR_15 / VAR_2 );
  if ( VAR_12 > VAR_11 ) {
   VAR_12 = VAR_11;
  }

  VAR_4[VAR_9] = VAR_12 + 1;
  if ( VAR_12 <= 0 ) {
   continue;
  }

  VAR_17.width += VAR_12;

  for ( VAR_6 = 0 ; VAR_6 < VAR_17.height ; VAR_6++ ) {
   for ( VAR_8 = VAR_17.width - 1 ; VAR_8 > VAR_7 + VAR_12; VAR_8-- ) {
    VAR_18[VAR_6][VAR_8] = VAR_18[VAR_6][VAR_8 - VAR_12];
   }
   for ( VAR_8 = 1; VAR_8 <= VAR_12; VAR_8++ )
   {
    VAR_16 = (float) VAR_8 / ( VAR_12 + 1 );
    FUNC_2( &VAR_18[VAR_6][VAR_7], &VAR_18[VAR_6][VAR_7 + VAR_12 + 1], VAR_16, &VAR_18[VAR_6][VAR_7 + VAR_8] );
   }
  }
 }

 VAR_11 = ( VAR_3 - VAR_1->height ) / ( VAR_1->height - 1 );

 for ( VAR_10 = 0, VAR_7 = 0 ; VAR_10 < VAR_1->height - 1; VAR_10++, VAR_7 += VAR_12 + 1 ) {
  VAR_15 = 0;
  for ( VAR_6 = 0 ; VAR_6 < VAR_17.width ; VAR_6++ ) {
   FUNC_4( VAR_18[VAR_7 + 1][VAR_6].xyz, VAR_18[VAR_7][VAR_6].xyz, VAR_13 );
   VAR_14 = FUNC_3( VAR_13 );
   if ( VAR_14 > VAR_15 ) {
    VAR_15 = VAR_14;
   }
  }

  VAR_12 = (int) ( VAR_15 / VAR_2 );
  if ( VAR_12 > VAR_11 ) {
   VAR_12 = VAR_11;
  }

  VAR_5[VAR_10] = VAR_12 + 1;
  if ( VAR_12 <= 0 ) {
   continue;
  }

  VAR_17.height += VAR_12;

  for ( VAR_6 = 0 ; VAR_6 < VAR_17.width ; VAR_6++ ) {
   for ( VAR_8 = VAR_17.height - 1 ; VAR_8 > VAR_7 + VAR_12; VAR_8-- ) {
    VAR_18[VAR_8][VAR_6] = VAR_18[VAR_8 - VAR_12][VAR_6];
   }
   for ( VAR_8 = 1; VAR_8 <= VAR_12; VAR_8++ )
   {
    VAR_16 = (float) VAR_8 / ( VAR_12 + 1 );
    FUNC_2( &VAR_18[VAR_7][VAR_6], &VAR_18[VAR_7 + VAR_12 + 1][VAR_6], VAR_16, &VAR_18[VAR_7 + VAR_8][VAR_6] );
   }
  }
 }


 VAR_17.verts = &VAR_18[0][0];
 for ( VAR_6 = 1 ; VAR_6 < VAR_17.height ; VAR_6++ ) {
  FUNC_5( &VAR_17.verts[VAR_6 * VAR_17.width], VAR_18[VAR_6], VAR_17.width * sizeof( bspDrawVert_t ) );
 }

 return FUNC_0( &VAR_17 );
}
