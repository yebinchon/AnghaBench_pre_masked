
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec4_t ;
typedef int * vec3_t ;
typedef int shaderInfo_t ;
struct TYPE_10__ {int numPlanes; int radius; int radius2; int ** planes; int * center; int maxs; int mins; int * si; } ;
typedef TYPE_1__ decalProjector_t ;
struct TYPE_11__ {int * xyz; } ;
typedef TYPE_2__ bspDrawVert_t ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 size_t VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,size_t) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,float,int ,int *) ;
 int FUNC_9 (int *,float,int *) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_12( shaderInfo_t *VAR_5, vec4_t VAR_6, float VAR_7, int VAR_8, bspDrawVert_t **VAR_9 ){
 int VAR_10, VAR_11;
 decalProjector_t *VAR_12;
 vec3_t VAR_13;



 if ( VAR_8 != 3 && VAR_8 != 4 ) {
  return -1;
 }


 if ( VAR_2 >= VAR_0 ) {
  FUNC_5( VAR_1, "WARNING: MAX_PROJECTORS (%d) exceeded, no more decal projectors available.\n", VAR_0 );
  return -2;
 }


 VAR_12 = &VAR_3[ VAR_2 ];
 FUNC_11( VAR_12, 0, sizeof( *VAR_12 ) );


 VAR_12->si = VAR_5;
 VAR_12->numPlanes = VAR_8 + 2;


 if ( !FUNC_3( VAR_12, VAR_6, VAR_9[ 0 ], VAR_9[ 1 ], VAR_9[ 2 ] ) ) {
  return -1;
 }


 FUNC_1( VAR_12->mins, VAR_12->maxs );
 for ( VAR_10 = 0; VAR_10 < VAR_8; VAR_10++ )
 {
  FUNC_0( VAR_9[ VAR_10 ]->xyz, VAR_12->mins, VAR_12->maxs );
  FUNC_8( VAR_9[ VAR_10 ]->xyz, VAR_7, VAR_6, VAR_13 );
  FUNC_0( VAR_13, VAR_12->mins, VAR_12->maxs );
 }


 FUNC_6( VAR_12->mins, VAR_12->maxs, VAR_12->center );
 FUNC_9( VAR_12->center, 0.5f, VAR_12->center );
 FUNC_10( VAR_12->maxs, VAR_12->center, VAR_13 );
 VAR_12->radius = FUNC_7( VAR_13 );
 VAR_12->radius2 = VAR_12->radius * VAR_12->radius;


 if ( !FUNC_4( VAR_12->planes[ 0 ], VAR_9[ 0 ]->xyz, VAR_9[ 1 ]->xyz, VAR_9[ 2 ]->xyz ) ) {
  return -1;
 }


 FUNC_10( VAR_4, VAR_12->planes[ 0 ], VAR_12->planes[ 1 ] );
 FUNC_8( VAR_9[ 0 ]->xyz, VAR_7, VAR_6, VAR_13 );
 VAR_12->planes[ 1 ][ 3 ] = FUNC_2( VAR_13, VAR_12->planes[ 1 ] );


 for ( VAR_10 = 0; VAR_10 < VAR_8; VAR_10++ )
 {
  VAR_11 = ( VAR_10 + 1 ) % VAR_8;
  FUNC_8( VAR_9[ VAR_10 ]->xyz, VAR_7, VAR_6, VAR_13 );
  if ( !FUNC_4( VAR_12->planes[ VAR_10 + 2 ], VAR_9[ VAR_11 ]->xyz, VAR_9[ VAR_10 ]->xyz, VAR_13 ) ) {
   return -1;
  }
 }


 VAR_2++;
 return VAR_2 - 1;
}
