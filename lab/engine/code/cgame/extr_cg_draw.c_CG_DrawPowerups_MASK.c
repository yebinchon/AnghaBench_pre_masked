
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_7__ {scalar_t__* stats; int* powerups; } ;
typedef TYPE_2__ playerState_t ;
struct TYPE_8__ {int icon; } ;
typedef TYPE_3__ gitem_t ;
struct TYPE_9__ {int time; int powerupActive; float powerupTime; TYPE_1__* snap; } ;
struct TYPE_6__ {TYPE_2__ ps; } ;


 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (int,float,int,int) ;
 int FUNC_2 (int,float,float,float,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double VAR_6 ;
 float VAR_7 ;
 size_t VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float*) ;

__attribute__((used)) static float FUNC_5( float VAR_10 ) {
 int VAR_11[VAR_3];
 int VAR_12[VAR_3];
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;
 playerState_t *VAR_17;
 int VAR_18;
 gitem_t *VAR_19;
 int VAR_20;
 int VAR_21;
 float VAR_22;
 float VAR_23;
 static float VAR_24[2][4] = {
    { 0.2f, 1.0f, 0.2f, 1.0f } ,
    { 1.0f, 0.2f, 0.2f, 1.0f }
  };

 VAR_17 = &VAR_9.snap->ps;

 if ( VAR_17->stats[VAR_8] <= 0 ) {
  return VAR_10;
 }


 VAR_16 = 0;
 for ( VAR_13 = 0 ; VAR_13 < VAR_3 ; VAR_13++ ) {
  if ( !VAR_17->powerups[ VAR_13 ] ) {
   continue;
  }



  if ( VAR_17->powerups[ VAR_13 ] == VAR_2 ) {
   continue;
  }

  VAR_18 = VAR_17->powerups[ VAR_13 ] - VAR_9.time;
  if ( VAR_18 <= 0 ) {
   continue;
  }


  for ( VAR_14 = 0 ; VAR_14 < VAR_16 ; VAR_14++ ) {
   if ( VAR_12[VAR_14] >= VAR_18 ) {
    for ( VAR_15 = VAR_16 - 1 ; VAR_15 >= VAR_14 ; VAR_15-- ) {
     VAR_11[VAR_15+1] = VAR_11[VAR_15];
     VAR_12[VAR_15+1] = VAR_12[VAR_15];
    }
    break;
   }
  }
  VAR_11[VAR_14] = VAR_13;
  VAR_12[VAR_14] = VAR_18;
  VAR_16++;
 }


 VAR_20 = 640 - VAR_1 - VAR_0 * 2;
 for ( VAR_13 = 0 ; VAR_13 < VAR_16 ; VAR_13++ ) {
  VAR_19 = FUNC_0( VAR_11[VAR_13] );

    if (VAR_19) {

    VAR_21 = 1;

    VAR_10 -= VAR_1;

    FUNC_4( VAR_24[VAR_21] );
    FUNC_1( VAR_20, VAR_10, 2, VAR_12[ VAR_13 ] / 1000 );

    VAR_18 = VAR_17->powerups[ VAR_11[VAR_13] ];
    if ( VAR_18 - VAR_9.time >= VAR_4 * VAR_5 ) {
     FUNC_4( ((void*)0) );
    } else {
     vec4_t VAR_25;

     VAR_23 = (float)( VAR_18 - VAR_9.time ) / VAR_5;
     VAR_23 -= (int)VAR_23;
     VAR_25[0] = VAR_25[1] = VAR_25[2] = VAR_25[3] = VAR_23;
     FUNC_4( VAR_25 );
    }

    if ( VAR_9.powerupActive == VAR_11[VAR_13] &&
     VAR_9.time - VAR_9.powerupTime < VAR_7 ) {
     VAR_23 = 1.0 - ( ( (float)VAR_9.time - VAR_9.powerupTime ) / VAR_7 );
     VAR_22 = VAR_1 * ( 1.0 + ( VAR_6 - 1.0 ) * VAR_23 );
    } else {
     VAR_22 = VAR_1;
    }

    FUNC_2( 640 - VAR_22, VAR_10 + VAR_1 / 2 - VAR_22 / 2,
     VAR_22, VAR_22, FUNC_3( VAR_19->icon ) );
    }
 }
 FUNC_4( ((void*)0) );

 return VAR_10;
}
