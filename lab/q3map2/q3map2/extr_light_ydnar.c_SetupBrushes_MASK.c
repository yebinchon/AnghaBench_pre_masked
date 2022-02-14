
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int compileFlags; } ;
typedef TYPE_1__ shaderInfo_t ;
typedef scalar_t__ qboolean ;
struct TYPE_11__ {int shader; } ;
typedef TYPE_2__ bspShader_t ;
struct TYPE_12__ {int numSides; int firstSide; } ;
typedef TYPE_3__ bspBrush_t ;
struct TYPE_13__ {size_t shaderNum; } ;
typedef TYPE_4__ bspBrushSide_t ;
struct TYPE_14__ {int numBSPBrushes; int firstBSPBrush; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_6__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int*,int ,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 scalar_t__ VAR_10 ;
 int* FUNC_3 (int) ;

void FUNC_4( void ){
 int VAR_11, VAR_12, VAR_13, VAR_14;
 qboolean VAR_15;
 bspBrush_t *VAR_16;
 bspBrushSide_t *VAR_17;
 bspShader_t *VAR_18;
 shaderInfo_t *VAR_19;



 FUNC_1( VAR_1, "--- SetupBrushes ---\n" );


 if ( VAR_9 == ((void*)0) ) {
  VAR_9 = FUNC_3( VAR_7 / 8 + 1 );
 }


 FUNC_2( VAR_9, 0, VAR_7 / 8 + 1 );
 VAR_8 = 0;


 for ( VAR_11 = 0; VAR_11 < VAR_4[ 0 ].numBSPBrushes; VAR_11++ )
 {

  VAR_13 = VAR_4[ 0 ].firstBSPBrush + VAR_11;
  VAR_16 = &VAR_3[ VAR_13 ];


  VAR_15 = VAR_10;
  VAR_14 = 0;
  for ( VAR_12 = 0; VAR_12 < VAR_16->numSides && VAR_15; VAR_12++ )
  {

   VAR_17 = &VAR_2[ VAR_16->firstSide + VAR_12 ];
   VAR_18 = &VAR_5[ VAR_17->shaderNum ];


   VAR_19 = FUNC_0( VAR_18->shader );
   if ( VAR_19 == ((void*)0) ) {
    continue;
   }


   VAR_14 |= VAR_19->compileFlags;
  }


  if ( !( VAR_14 & VAR_0 ) ) {
   VAR_9[ VAR_13 >> 3 ] |= ( 1 << ( VAR_13 & 7 ) );
   VAR_8++;
   VAR_6 = VAR_11;
  }
 }


 FUNC_1( VAR_1, "%9d opaque brushes\n", VAR_8 );
}
