
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct patchCollide_s {int** bounds; } ;
typedef struct patchCollide_s patchCollide_t ;
struct TYPE_7__ {int width; int height; int ** points; void* wrapHeight; void* wrapWidth; } ;
typedef TYPE_1__ cGrid_t ;


 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (TYPE_1__*,struct patchCollide_s*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_0 ;
 struct patchCollide_s* FUNC_8 (int,int ) ;
 int VAR_1 ;
 int FUNC_9 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;

struct patchCollide_s *FUNC_10( int VAR_5, int VAR_6, vec3_t *VAR_7 ) {
 patchCollide_t *VAR_8;
 cGrid_t VAR_9;
 int VAR_10, VAR_11;

 if ( VAR_5 <= 2 || VAR_6 <= 2 || !VAR_7 ) {
  FUNC_7( VAR_0, "CM_GeneratePatchFacets: bad parameters: (%i, %i, %p)",
   VAR_5, VAR_6, (void *)VAR_7 );
 }

 if ( !(VAR_5 & 1) || !(VAR_6 & 1) ) {
  FUNC_7( VAR_0, "CM_GeneratePatchFacets: even sizes are invalid for quadratic meshes" );
 }

 if ( VAR_5 > VAR_1 || VAR_6 > VAR_1 ) {
  FUNC_7( VAR_0, "CM_GeneratePatchFacets: source is > MAX_GRID_SIZE" );
 }


 VAR_9.width = VAR_5;
 VAR_9.height = VAR_6;
 VAR_9.wrapWidth = VAR_4;
 VAR_9.wrapHeight = VAR_4;
 for ( VAR_10 = 0 ; VAR_10 < VAR_5 ; VAR_10++ ) {
  for ( VAR_11 = 0 ; VAR_11 < VAR_6 ; VAR_11++ ) {
   FUNC_9( VAR_7[VAR_11*VAR_5 + VAR_10], VAR_9.points[VAR_10][VAR_11] );
  }
 }


 FUNC_3( &VAR_9 );
 FUNC_4( &VAR_9 );
 FUNC_2( &VAR_9 );

 FUNC_5( &VAR_9 );

 FUNC_3( &VAR_9 );
 FUNC_4( &VAR_9 );
 FUNC_2( &VAR_9 );




 VAR_8 = FUNC_8( sizeof( *VAR_8 ), VAR_3 );
 FUNC_6( VAR_8->bounds[0], VAR_8->bounds[1] );
 for ( VAR_10 = 0 ; VAR_10 < VAR_9.width ; VAR_10++ ) {
  for ( VAR_11 = 0 ; VAR_11 < VAR_9.height ; VAR_11++ ) {
   FUNC_0( VAR_9.points[VAR_10][VAR_11], VAR_8->bounds[0], VAR_8->bounds[1] );
  }
 }

 VAR_2 += ( VAR_9.width - 1 ) * ( VAR_9.height - 1 );


 FUNC_1( &VAR_9, VAR_8 );


 VAR_8->bounds[0][0] -= 1;
 VAR_8->bounds[0][1] -= 1;
 VAR_8->bounds[0][2] -= 1;

 VAR_8->bounds[1][0] += 1;
 VAR_8->bounds[1][1] += 1;
 VAR_8->bounds[1][2] += 1;

 return VAR_8;
}
