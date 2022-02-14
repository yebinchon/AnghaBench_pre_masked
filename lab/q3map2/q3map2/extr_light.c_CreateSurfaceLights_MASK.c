
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_12__ {int lm; int maxs; int mins; TYPE_2__* si; } ;
typedef TYPE_1__ surfaceInfo_t ;
struct TYPE_13__ {float skyLightValue; int value; float lightSubdivide; int lightStyle; int color; scalar_t__ autosprite; int lightFilterRadius; int skyLightIterations; int shader; int * sun; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_14__ {int photons; float fade; int style; int falloffTolerance; int color; int origin; TYPE_2__* si; int type; int flags; struct TYPE_14__* next; } ;
typedef TYPE_3__ light_t ;
typedef int clipWork_t ;
struct TYPE_15__ {int surfaceType; } ;
typedef TYPE_4__ bspDrawSurface_t ;


 int VAR_0 ;
 int FUNC_0 (int ,float,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_2 (int,int ,int ,TYPE_2__*,int ,float,int *) ;
 int FUNC_3 (int,int ,int ,TYPE_2__*,int ,float,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int ) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,float,int ) ;
 TYPE_4__* VAR_4 ;
 float VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_9 (TYPE_3__*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__* FUNC_10 (int) ;
 TYPE_1__* VAR_12 ;

void FUNC_11( void ){
 int VAR_13;
 bspDrawSurface_t *VAR_14;
 surfaceInfo_t *VAR_15;
 shaderInfo_t *VAR_16;
 light_t *VAR_17;
 float VAR_18;
 vec3_t VAR_19;
 clipWork_t VAR_20;
 const char *VAR_21;



 VAR_21 = FUNC_5( &VAR_6[ 0 ], "_noshadersun" );


 for ( VAR_13 = 0; VAR_13 < VAR_9; VAR_13++ )
 {

  VAR_14 = &VAR_4[ VAR_13 ];
  VAR_15 = &VAR_12[ VAR_13 ];
  VAR_16 = VAR_15->si;


  if ( VAR_16->sun != ((void*)0) && VAR_21[ 0 ] != '1' ) {
   FUNC_4( VAR_3, "Sun: %s\n", VAR_16->shader );
   FUNC_1( VAR_16->sun );
   VAR_16->sun = ((void*)0);
  }


  if ( VAR_16->skyLightValue > 0.0f ) {
   FUNC_4( VAR_3, "Sky: %s\n", VAR_16->shader );
   FUNC_0( VAR_16->color, VAR_16->skyLightValue, VAR_16->skyLightIterations, VAR_16->lightFilterRadius, VAR_16->lightStyle );
   VAR_16->skyLightValue = 0.0f;
  }


  if ( VAR_16->value <= 0 ) {
   continue;
  }


  if ( VAR_16->autosprite ) {

   FUNC_6( VAR_15->mins, VAR_15->maxs, VAR_19 );
   FUNC_8( VAR_19, 0.5f, VAR_19 );


   VAR_17 = FUNC_10( sizeof( *VAR_17 ) );
   FUNC_9( VAR_17, 0, sizeof( *VAR_17 ) );
   VAR_17->next = VAR_8;
   VAR_8 = VAR_17;


   VAR_17->flags = VAR_2;
   VAR_17->type = VAR_1;
   VAR_17->photons = VAR_16->value * VAR_11;
   VAR_17->fade = 1.0f;
   VAR_17->si = VAR_16;
   FUNC_7( VAR_19, VAR_17->origin );
   FUNC_7( VAR_16->color, VAR_17->color );
   VAR_17->falloffTolerance = VAR_7;
   VAR_17->style = VAR_16->lightStyle;


   VAR_10++;
   continue;
  }


  if ( VAR_16->lightSubdivide > 0 ) {
   VAR_18 = VAR_16->lightSubdivide;
  }
  else{
   VAR_18 = VAR_5;
  }


  switch ( VAR_14->surfaceType )
  {
  case 129:
  case 128:
   FUNC_3( VAR_13, 0, VAR_15->lm, VAR_16, VAR_0, VAR_18, &VAR_20 );
   break;

  case 130:
   FUNC_2( VAR_13, 0, VAR_15->lm, VAR_16, VAR_0, VAR_18, &VAR_20 );
   break;

  default:
   break;
  }
 }
}
