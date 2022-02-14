
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int filelen; int fileofs; } ;
typedef TYPE_1__ lump_t ;
typedef int image_t ;
typedef float byte ;
struct TYPE_13__ {scalar_t__ hardwareType; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {int (* Printf ) (int ,char*,int) ;int * (* Hunk_Alloc ) (int,int ) ;} ;
struct TYPE_9__ {int numLightmaps; int * lightmaps; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (float,double,double,float*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (float*,float*) ;
 int FUNC_2 (int ,float*,int,int,int ,int,int ) ;
 int FUNC_3 () ;
 float* VAR_7 ;
 TYPE_6__ VAR_8 ;
 int VAR_9 ;
 TYPE_5__* VAR_10 ;
 TYPE_4__* VAR_11 ;
 TYPE_3__ VAR_12 ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_2__ VAR_13 ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7( lump_t *VAR_14 ) {
 byte *VAR_15, *VAR_16;
 int VAR_17;
 byte VAR_18[VAR_5*VAR_5*4];
 int VAR_19, VAR_20;
 float VAR_21 = 0;
 double VAR_22 = 0;

 VAR_17 = VAR_14->filelen;
 if ( !VAR_17 ) {
  return;
 }
 VAR_15 = VAR_7 + VAR_14->fileofs;


 FUNC_3();


 VAR_13.numLightmaps = VAR_17 / (VAR_5 * VAR_5 * 3);
 if ( VAR_13.numLightmaps == 1 ) {


  VAR_13.numLightmaps++;
 }


 if ( VAR_11->integer || VAR_8.hardwareType == VAR_0 ) {
  return;
 }

 VAR_13.lightmaps = VAR_12.Hunk_Alloc( VAR_13.numLightmaps * sizeof(image_t *), VAR_9 );
 for ( VAR_19 = 0 ; VAR_19 < VAR_13.numLightmaps ; VAR_19++ ) {

  VAR_16 = VAR_15 + VAR_19 * VAR_5*VAR_5 * 3;

  if ( VAR_10->integer == 2 )
  {
   for ( VAR_20 = 0; VAR_20 < VAR_5 * VAR_5; VAR_20++ )
   {
    float VAR_23 = VAR_16[VAR_20*3+0];
    float VAR_24 = VAR_16[VAR_20*3+1];
    float VAR_25 = VAR_16[VAR_20*3+2];
    float VAR_26;
    float VAR_27[3] = {0.0, 0.0, 0.0};

    VAR_26 = 0.33f * VAR_23 + 0.685f * VAR_24 + 0.063f * VAR_25;

    if ( VAR_26 > 255 )
     VAR_26 = 1.0f;
    else
     VAR_26 /= 255.0f;

    if ( VAR_26 > VAR_21 )
     VAR_21 = VAR_26;

    FUNC_0( VAR_26, 1.00, 0.50, VAR_27 );

    VAR_18[VAR_20*4+0] = VAR_27[0] * 255;
    VAR_18[VAR_20*4+1] = VAR_27[1] * 255;
    VAR_18[VAR_20*4+2] = VAR_27[2] * 255;
    VAR_18[VAR_20*4+3] = 255;

    VAR_22 += VAR_26;
   }
  } else {
   for ( VAR_20 = 0 ; VAR_20 < VAR_5 * VAR_5; VAR_20++ ) {
    FUNC_1( &VAR_16[VAR_20*3], &VAR_18[VAR_20*4] );
    VAR_18[VAR_20*4+3] = 255;
   }
  }
  VAR_13.lightmaps[VAR_19] = FUNC_2( FUNC_6("*lightmap%d",VAR_19), VAR_18,
   VAR_5, VAR_5, VAR_4,
   VAR_2 | VAR_3 | VAR_1, 0 );
 }

 if ( VAR_10->integer == 2 ) {
  VAR_12.Printf( VAR_6, "Brightest lightmap value: %d\n", ( int ) ( VAR_21 * 255 ) );
 }
}
