
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_16__ {int planeNum; float* plane; float* lightmapAxis; void** indexes; TYPE_1__* si; } ;
typedef TYPE_2__ metaTriangle_t ;
struct TYPE_17__ {float* normal; int xyz; } ;
typedef TYPE_3__ bspDrawVert_t ;
struct TYPE_18__ {float* normal; float dist; } ;
struct TYPE_15__ {int compileFlags; float* lightmapAxis; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (float*,float*) ;
 void* FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (float*,int ,int ,int ) ;
 int FUNC_4 (float*,float*) ;
 float FUNC_5 (float*) ;
 int FUNC_6 (int ,int ,float*) ;
 TYPE_9__* VAR_1 ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_9( metaTriangle_t *VAR_5, bspDrawVert_t *VAR_6, bspDrawVert_t *VAR_7, bspDrawVert_t *VAR_8, int VAR_9 ){
 int VAR_10;
 vec3_t VAR_11;




 FUNC_6( VAR_6->xyz, VAR_7->xyz, VAR_11 );
 if ( FUNC_5( VAR_11 ) < 0.125f ) {
  return -1;
 }
 FUNC_6( VAR_7->xyz, VAR_8->xyz, VAR_11 );
 if ( FUNC_5( VAR_11 ) < 0.125f ) {
  return -1;
 }
 FUNC_6( VAR_8->xyz, VAR_6->xyz, VAR_11 );
 if ( FUNC_5( VAR_11 ) < 0.125f ) {
  return -1;
 }


 if ( VAR_9 >= 0 ) {

  VAR_5->planeNum = VAR_9;
  FUNC_4( VAR_1[ VAR_9 ].normal, VAR_5->plane );
  VAR_5->plane[ 3 ] = VAR_1[ VAR_9 ].dist;
 }
 else
 {

  VAR_5->planeNum = -1;
  if ( FUNC_3( VAR_5->plane, VAR_6->xyz, VAR_7->xyz, VAR_8->xyz ) == VAR_4 ) {
   return -1;
  }
 }


 if ( FUNC_5( VAR_6->normal ) <= 0.0f ) {
  FUNC_4( VAR_5->plane, VAR_6->normal );
 }
 if ( FUNC_5( VAR_7->normal ) <= 0.0f ) {
  FUNC_4( VAR_5->plane, VAR_7->normal );
 }
 if ( FUNC_5( VAR_8->normal ) <= 0.0f ) {
  FUNC_4( VAR_5->plane, VAR_8->normal );
 }


 if ( !( VAR_5->si->compileFlags & VAR_0 ) &&
   VAR_5->lightmapAxis[ 0 ] == 0.0f && VAR_5->lightmapAxis[ 1 ] == 0.0f && VAR_5->lightmapAxis[ 2 ] == 0.0f ) {

  if ( VAR_5->si->lightmapAxis[ 0 ] || VAR_5->si->lightmapAxis[ 1 ] || VAR_5->si->lightmapAxis[ 2 ] ) {
   FUNC_4( VAR_5->si->lightmapAxis, VAR_5->lightmapAxis );
  }


  else{
   FUNC_1( VAR_5->plane, VAR_5->lightmapAxis );
  }
 }


 VAR_5->indexes[ 0 ] = FUNC_2( VAR_6 );
 VAR_5->indexes[ 1 ] = FUNC_2( VAR_7 );
 VAR_5->indexes[ 2 ] = FUNC_2( VAR_8 );
 VAR_10 = FUNC_0();


 FUNC_8( &VAR_2[ VAR_10 ], VAR_5, sizeof( metaTriangle_t ) );


 return VAR_10;
}
