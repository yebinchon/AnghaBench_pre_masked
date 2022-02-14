
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ func; } ;
struct TYPE_9__ {scalar_t__ rgbGen; int stateBits; int active; TYPE_2__ rgbWave; TYPE_1__* bundle; int alphaGen; } ;
typedef TYPE_3__ shaderStage_t ;
struct TYPE_10__ {scalar_t__ sort; scalar_t__ lightmapIndex; } ;
struct TYPE_7__ {scalar_t__ tcGen; scalar_t__ isLightmap; scalar_t__ numTexMods; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_5__ VAR_16 ;
 TYPE_3__* VAR_17 ;

__attribute__((used)) static void FUNC_1( void ) {
 int VAR_18;
 shaderStage_t *VAR_19;
 int VAR_20;
 int VAR_21;


 if ( VAR_16.sort == VAR_14 ) {


  VAR_19 = &VAR_17[0];
  VAR_20 = -999999;

  for ( VAR_18 = 0; VAR_18 < VAR_13; VAR_18++ ) {
   shaderStage_t *VAR_22 = &VAR_17[VAR_18];

   if ( !VAR_22->active ) {
    break;
   }
   VAR_21 = 0;

   if ( VAR_22->bundle[0].isLightmap ) {
    VAR_21 -= 100;
   }
   if ( VAR_22->bundle[0].tcGen != VAR_15 ) {
    VAR_21 -= 5;
   }
   if ( VAR_22->bundle[0].numTexMods ) {
    VAR_21 -= 5;
   }
   if ( VAR_22->rgbGen != VAR_2 && VAR_22->rgbGen != VAR_3 ) {
    VAR_21 -= 3;
   }

   if ( VAR_21 > VAR_20 ) {
    VAR_20 = VAR_21;
    VAR_19 = VAR_22;
   }
  }

  VAR_17[0].bundle[0] = VAR_19->bundle[0];
  VAR_17[0].stateBits &= ~( VAR_10 | VAR_11 );
  VAR_17[0].stateBits |= VAR_9;
  if ( VAR_16.lightmapIndex == VAR_12 ) {
   VAR_17[0].rgbGen = VAR_4;
  } else {
   VAR_17[0].rgbGen = VAR_1;
  }
  VAR_17[0].alphaGen = VAR_0;
 } else {

  if ( VAR_17[0].bundle[0].isLightmap ) {
   VAR_17[0] = VAR_17[1];
  }


  if ( VAR_17[0].rgbGen == VAR_5 || VAR_17[1].rgbGen == VAR_5 ) {
   VAR_17[0].rgbGen = VAR_3;
  }
  if ( ( VAR_17[0].rgbGen == VAR_6 && VAR_17[0].rgbWave.func == VAR_8 )
   && ( VAR_17[1].rgbGen == VAR_6 && VAR_17[1].rgbWave.func == VAR_7 ) ) {
   VAR_17[0].rgbGen = VAR_3;
  }
  if ( ( VAR_17[0].rgbGen == VAR_6 && VAR_17[0].rgbWave.func == VAR_7 )
   && ( VAR_17[1].rgbGen == VAR_6 && VAR_17[1].rgbWave.func == VAR_8 ) ) {
   VAR_17[0].rgbGen = VAR_3;
  }
 }

 for ( VAR_18 = 1; VAR_18 < VAR_13; VAR_18++ ) {
  shaderStage_t *VAR_23 = &VAR_17[VAR_18];

  if ( !VAR_23->active ) {
   break;
  }

  FUNC_0( VAR_23, 0, sizeof( *VAR_23 ) );
 }
}
