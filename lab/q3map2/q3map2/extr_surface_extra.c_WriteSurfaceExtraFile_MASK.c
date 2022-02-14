
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int parentSurfaceNum; int entityNum; int castShadows; int recvShadows; int sampleSize; double longestCurve; double* lightmapAxis; TYPE_2__* si; TYPE_1__* mds; } ;
typedef TYPE_3__ surfaceExtra_t ;
struct TYPE_7__ {char* shader; } ;
struct TYPE_6__ {size_t type; int numVerts; int numIndexes; scalar_t__ planar; } ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (double*,double*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char const*) ;
 char** VAR_3 ;

void FUNC_10( const char *VAR_4 ){
 char VAR_5[ 1024 ];
 FILE *VAR_6;
 surfaceExtra_t *VAR_7;
 int VAR_8;



 if ( VAR_4 == ((void*)0) || VAR_4[ 0 ] == '\0' ) {
  return;
 }


 FUNC_3( "--- WriteSurfaceExtraFile ---\n" );


 FUNC_9( VAR_5, VAR_4 );
 FUNC_2( VAR_5 );
 FUNC_8( VAR_5, ".srf" );
 FUNC_3( "Writing %s\n", VAR_5 );
 VAR_6 = FUNC_6( VAR_5, "w" );
 if ( VAR_6 == ((void*)0) ) {
  FUNC_0( "Error opening %s for writing", VAR_5 );
 }


 for ( VAR_8 = -1; VAR_8 < VAR_0; VAR_8++ )
 {

  VAR_7 = FUNC_1( VAR_8 );


  if ( VAR_8 < 0 ) {
   FUNC_7( VAR_6, "default" );
  }
  else{
   FUNC_7( VAR_6, "%d", VAR_8 );
  }


  if ( VAR_7->mds == ((void*)0) ) {
   FUNC_7( VAR_6, "\n" );
  }
  else
  {
   FUNC_7( VAR_6, " // %s V: %d I: %d %s\n",
      VAR_3[ VAR_7->mds->type ],
      VAR_7->mds->numVerts,
      VAR_7->mds->numIndexes,
      ( VAR_7->mds->planar ? "planar" : "" ) );
  }


  FUNC_7( VAR_6, "{\n" );


  if ( VAR_7->si != ((void*)0) ) {
   FUNC_7( VAR_6, "\tshader %s\n", VAR_7->si->shader );
  }


  if ( VAR_7->parentSurfaceNum != VAR_2.parentSurfaceNum ) {
   FUNC_7( VAR_6, "\tparent %d\n", VAR_7->parentSurfaceNum );
  }


  if ( VAR_7->entityNum != VAR_2.entityNum ) {
   FUNC_7( VAR_6, "\tentity %d\n", VAR_7->entityNum );
  }


  if ( VAR_7->castShadows != VAR_2.castShadows || VAR_7 == &VAR_2 ) {
   FUNC_7( VAR_6, "\tcastShadows %d\n", VAR_7->castShadows );
  }


  if ( VAR_7->recvShadows != VAR_2.recvShadows || VAR_7 == &VAR_2 ) {
   FUNC_7( VAR_6, "\treceiveShadows %d\n", VAR_7->recvShadows );
  }


  if ( VAR_7->sampleSize != VAR_2.sampleSize || VAR_7 == &VAR_2 ) {
   FUNC_7( VAR_6, "\tsampleSize %d\n", VAR_7->sampleSize );
  }


  if ( VAR_7->longestCurve != VAR_2.longestCurve || VAR_7 == &VAR_2 ) {
   FUNC_7( VAR_6, "\tlongestCurve %f\n", VAR_7->longestCurve );
  }


  if ( FUNC_4( VAR_7->lightmapAxis, VAR_2.lightmapAxis ) == VAR_1 ) {
   FUNC_7( VAR_6, "\tlightmapAxis ( %f %f %f )\n", VAR_7->lightmapAxis[ 0 ], VAR_7->lightmapAxis[ 1 ], VAR_7->lightmapAxis[ 2 ] );
  }


  FUNC_7( VAR_6, "}\n\n" );
 }


 FUNC_5( VAR_6 );
}
