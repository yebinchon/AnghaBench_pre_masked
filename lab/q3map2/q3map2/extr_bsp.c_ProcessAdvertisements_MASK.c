
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numBSPSurfaces; size_t firstBSPSurface; } ;
typedef TYPE_1__ bspModel_t ;
struct TYPE_8__ {size_t firstVert; scalar_t__ surfaceType; int patchHeight; int numVerts; int patchWidth; } ;
typedef TYPE_2__ bspDrawSurface_t ;
struct TYPE_10__ {int cellId; int * rect; int normal; int model; } ;
struct TYPE_9__ {int xyz; int normal; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char const*) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char const*) ;
 TYPE_6__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int * VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_9( void ) {
 int VAR_11;
 const char* VAR_12;
 const char* VAR_13;
 int VAR_14;
 bspModel_t* VAR_15;
 bspDrawSurface_t* VAR_16;

 FUNC_3( VAR_3, "--- ProcessAdvertisements ---\n" );

 for ( VAR_11 = 0; VAR_11 < VAR_10; VAR_11++ ) {


  VAR_12 = FUNC_4( &VAR_8[ VAR_11 ], "classname" );

  if ( !FUNC_2( "advertisement", VAR_12 ) ) {

   VAR_13 = FUNC_4( &VAR_8[ VAR_11 ], "model" );

   if ( FUNC_7( VAR_13 ) > VAR_1 - 1 ) {
    FUNC_0( "Model Key for entity exceeds ad struct string length." );
   }
   else {
    if ( VAR_9 < VAR_0 ) {
     VAR_4[VAR_9].cellId = FUNC_1( &VAR_8[ VAR_11 ], "cellId" );
     FUNC_8( VAR_4[VAR_9].model, VAR_13, sizeof( VAR_4[VAR_9].model ) );

     VAR_13++;
     VAR_14 = FUNC_6( VAR_13 );
     VAR_15 = &VAR_7[VAR_14];

     if ( VAR_15->numBSPSurfaces != 1 ) {
      FUNC_0( "Ad cell id %d has more than one surface.", VAR_4[VAR_9].cellId );
     }

     VAR_16 = &VAR_5[VAR_15->firstBSPSurface];




     FUNC_5( VAR_6[VAR_16->firstVert].normal, VAR_4[VAR_9].normal );


     if ( VAR_16->surfaceType == VAR_2 ) {
      int VAR_17 = VAR_16->firstVert + VAR_16->patchHeight - 1;
      int VAR_18 = VAR_16->firstVert + VAR_16->numVerts - 1;
      int VAR_19 = VAR_16->firstVert + VAR_16->numVerts - VAR_16->patchWidth;
      int VAR_20 = VAR_16->firstVert;
      FUNC_5( VAR_6[VAR_17].xyz, VAR_4[VAR_9].rect[0] );
      FUNC_5( VAR_6[VAR_18].xyz, VAR_4[VAR_9].rect[1] );
      FUNC_5( VAR_6[VAR_19].xyz, VAR_4[VAR_9].rect[2] );
      FUNC_5( VAR_6[VAR_20].xyz, VAR_4[VAR_9].rect[3] );
     }
     else {
      FUNC_0( "Ad cell %d has an unsupported Ad Surface type.", VAR_4[VAR_9].cellId );
     }

     VAR_9++;
    }
    else {
     FUNC_0( "Maximum number of map advertisements exceeded." );
    }
   }
  }
 }

 FUNC_3( VAR_3, "%9d in-game advertisements\n", VAR_9 );
}
