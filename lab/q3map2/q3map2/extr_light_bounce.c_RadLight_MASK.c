
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* si; int * lm; } ;
typedef TYPE_1__ surfaceInfo_t ;
struct TYPE_10__ {float bounceScale; int compileFlags; float lightSubdivide; scalar_t__ autosprite; } ;
typedef TYPE_2__ shaderInfo_t ;
typedef int rawLightmap_t ;
typedef int clipWork_t ;
struct TYPE_11__ {size_t shaderNum; scalar_t__* lightmapStyles; int surfaceType; } ;
typedef TYPE_3__ bspDrawSurface_t ;
struct TYPE_12__ {int contentFlags; int surfaceFlags; } ;


 int FUNC_0 (char*,int*,int*,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int,int,int *,TYPE_2__*,float,float,int *) ;
 int FUNC_2 (int,int,int *,TYPE_2__*,float,float,int *) ;
 TYPE_3__* VAR_4 ;
 TYPE_5__* VAR_5 ;
 float VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_9 ;

void FUNC_5( int VAR_10 ){
 int VAR_11;
 float VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;
 bspDrawSurface_t *VAR_17;
 surfaceInfo_t *VAR_18;
 rawLightmap_t *VAR_19;
 shaderInfo_t *VAR_20;
 clipWork_t VAR_21;



 VAR_17 = &VAR_4[ VAR_10 ];
 VAR_18 = &VAR_9[ VAR_10 ];
 VAR_19 = VAR_18->lm;
 VAR_20 = VAR_18->si;
 VAR_12 = VAR_20->bounceScale;


 VAR_14 = VAR_15 = VAR_16 = 0;
 FUNC_0( "nodraw", &VAR_14, &VAR_15, &VAR_16 );


 if ( VAR_12 <= 0.0f || ( VAR_20->compileFlags & VAR_0 ) || VAR_20->autosprite ||
   ( VAR_5[ VAR_17->shaderNum ].contentFlags & VAR_14 ) || ( VAR_5[ VAR_17->shaderNum ].surfaceFlags & VAR_15 ) ||
   ( VAR_20->compileFlags & VAR_16 ) ) {
  return;
 }


 if ( VAR_20->lightSubdivide ) {
  VAR_13 = VAR_20->lightSubdivide;
 }
 else{
  VAR_13 = VAR_6;
 }


 FUNC_3( &VAR_7 );
 VAR_8++;
 FUNC_4( &VAR_7 );


 for ( VAR_11 = 0; VAR_11 < VAR_3; VAR_11++ )
 {

  if ( VAR_17->lightmapStyles[ VAR_11 ] != VAR_1 && VAR_17->lightmapStyles[ VAR_11 ] != VAR_2 ) {
   switch ( VAR_17->surfaceType )
   {
   case 129:
   case 128:
    FUNC_2( VAR_10, VAR_11, VAR_19, VAR_20, VAR_12, VAR_13, &VAR_21 );
    break;

   case 130:
    FUNC_1( VAR_10, VAR_11, VAR_19, VAR_20, VAR_12, VAR_13, &VAR_21 );
    break;

   default:
    break;
   }
  }
 }
}
