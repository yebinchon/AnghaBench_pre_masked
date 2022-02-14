
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_7__ {int numSamples; float photons; int* direction; float deviance; int filterRadius; int* color; struct TYPE_7__* next; int style; } ;
typedef TYPE_1__ sun_t ;
struct TYPE_8__ {float fade; int filterRadius; int* color; float photons; int normal; int origin; int dist; int style; int falloffTolerance; int type; int flags; struct TYPE_8__* next; } ;
typedef TYPE_2__ light_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float VAR_3 ;
 float FUNC_1 () ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int ,float,int*,int ) ;
 int FUNC_4 (int*,double,int ) ;
 float FUNC_5 (int,float) ;
 int FUNC_6 (float) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_8 (int) ;
 int FUNC_9 (float) ;
 float VAR_8 ;
 float FUNC_10 (int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_11( sun_t *VAR_10 ){
 int VAR_11;
 float VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 vec3_t VAR_18;
 light_t *VAR_19;



 if ( VAR_10 == ((void*)0) ) {
  return;
 }


 if ( VAR_10->numSamples < 1 ) {
  VAR_10->numSamples = 1;
 }


 VAR_12 = VAR_10->photons / VAR_10->numSamples;


 for ( VAR_11 = 0; VAR_11 < VAR_10->numSamples; VAR_11++ )
 {

  if ( VAR_11 == 0 ) {
   FUNC_2( VAR_10->direction, VAR_18 );
  }
  else
  {
   VAR_13 = FUNC_10( VAR_10->direction[ 0 ] * VAR_10->direction[ 0 ] + VAR_10->direction[ 1 ] * VAR_10->direction[ 1 ] );
   VAR_14 = FUNC_5( VAR_10->direction[ 1 ], VAR_10->direction[ 0 ] );
   VAR_15 = FUNC_5( VAR_10->direction[ 2 ], VAR_13 );


   do
   {
    VAR_16 = ( FUNC_1() * 2.0f - 1.0f ) * VAR_10->deviance;
    VAR_17 = ( FUNC_1() * 2.0f - 1.0f ) * VAR_10->deviance;
   }
   while ( ( VAR_16 * VAR_16 + VAR_17 * VAR_17 ) > ( VAR_10->deviance * VAR_10->deviance ) );
   VAR_14 += VAR_16;
   VAR_15 += VAR_17;





   VAR_18[ 0 ] = FUNC_6( VAR_14 ) * FUNC_6( VAR_15 );
   VAR_18[ 1 ] = FUNC_9( VAR_14 ) * FUNC_6( VAR_15 );
   VAR_18[ 2 ] = FUNC_9( VAR_15 );
  }


  VAR_7++;
  VAR_19 = FUNC_8( sizeof( *VAR_19 ) );
  FUNC_7( VAR_19, 0, sizeof( *VAR_19 ) );
  VAR_19->next = VAR_5;
  VAR_5 = VAR_19;


  VAR_19->flags = VAR_1;
  VAR_19->type = VAR_0;
  VAR_19->fade = 1.0f;
  VAR_19->falloffTolerance = VAR_4;
  VAR_19->filterRadius = VAR_10->filterRadius / VAR_10->numSamples;
  VAR_19->style = VAR_6 ? VAR_2 : VAR_10->style;


  FUNC_3( VAR_9, ( VAR_3 * 8.0f ), VAR_18, VAR_19->origin );


  FUNC_4( VAR_18, -1.0, VAR_19->normal );
  VAR_19->dist = FUNC_0( VAR_19->origin, VAR_19->normal );


  FUNC_2( VAR_10->color, VAR_19->color );
  VAR_19->photons = VAR_12 * VAR_8;
 }


 if ( VAR_10->next != ((void*)0) ) {
  FUNC_11( VAR_10->next );
 }
}
