
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int winding_t ;
typedef int * vec3_t ;
typedef int qboolean ;
struct TYPE_4__ {int surfacePlane; int numBorders; int* borderPlanes; int * borderInward; } ;
typedef TYPE_1__ facet_t ;
struct TYPE_5__ {int plane; } ;


 int * FUNC_0 (float*,float) ;
 int FUNC_1 (int **,float*,float,float) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,float*) ;
 int FUNC_4 (int ,float*,float*) ;
 int FUNC_5 (int *,int *,int *) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static qboolean FUNC_6( facet_t *VAR_5 ) {
 float VAR_6[4];
 int VAR_7;
 winding_t *VAR_8;
 vec3_t VAR_9[2];

 if ( VAR_5->surfacePlane == -1 ) {
  return VAR_2;
 }

 FUNC_3( VAR_1[ VAR_5->surfacePlane ].plane, VAR_6 );
 VAR_8 = FUNC_0( VAR_6, VAR_6[3] );
 for ( VAR_7 = 0 ; VAR_7 < VAR_5->numBorders && VAR_8 ; VAR_7++ ) {
  if ( VAR_5->borderPlanes[VAR_7] == -1 ) {
   FUNC_2( VAR_8 );
   return VAR_2;
  }
  FUNC_3( VAR_1[ VAR_5->borderPlanes[VAR_7] ].plane, VAR_6 );
  if ( !VAR_5->borderInward[VAR_7] ) {
   FUNC_4( VAR_4, VAR_6, VAR_6 );
   VAR_6[3] = -VAR_6[3];
  }
  FUNC_1( &VAR_8, VAR_6, VAR_6[3], 0.1f );
 }

 if ( !VAR_8 ) {
  return VAR_2;
 }


 FUNC_5( VAR_8, VAR_9[0], VAR_9[1] );
 FUNC_2( VAR_8 );

 for ( VAR_7 = 0 ; VAR_7 < 3 ; VAR_7++ ) {
  if ( VAR_9[1][VAR_7] - VAR_9[0][VAR_7] > VAR_0 ) {
   return VAR_2;
  }
  if ( VAR_9[0][VAR_7] >= VAR_0 ) {
   return VAR_2;
  }
  if ( VAR_9[1][VAR_7] <= -VAR_0 ) {
   return VAR_2;
  }
 }
 return VAR_3;
}
