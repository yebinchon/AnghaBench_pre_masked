
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_9__ {float x; float y; double w; float h; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_10__ {scalar_t__* stats; int* powerups; } ;
typedef TYPE_3__ playerState_t ;
typedef int num ;
struct TYPE_11__ {int icon; } ;
typedef TYPE_4__ gitem_t ;
struct TYPE_12__ {int time; TYPE_1__* snap; } ;
struct TYPE_8__ {TYPE_3__ ps; } ;


 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (float,float,double,float,int ) ;
 int FUNC_2 (float,float,float,float*,char*,int ,int ,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (float*) ;

__attribute__((used)) static void FUNC_6(rectDef_t *VAR_7, int VAR_8, float VAR_9, float VAR_10, vec4_t VAR_11) {
 char VAR_12[16];
 int VAR_13[VAR_2];
 int VAR_14[VAR_2];
 int VAR_15, VAR_16, VAR_17;
 int VAR_18;
 playerState_t *VAR_19;
 int VAR_20;
 gitem_t *VAR_21;
 float VAR_22;
 rectDef_t VAR_23;
 float *VAR_24;
 VAR_23 = VAR_7->x;
 VAR_23 = VAR_7->y;
 VAR_23 = VAR_7->w;
 VAR_23 = VAR_7->h;

 VAR_24 = (VAR_8 == VAR_0) ? &VAR_23 : &VAR_23;

 VAR_19 = &VAR_6.snap->ps;

 if ( VAR_19->stats[VAR_5] <= 0 ) {
  return;
 }


 VAR_18 = 0;
 for ( VAR_15 = 0 ; VAR_15 < VAR_2 ; VAR_15++ ) {
  if ( !VAR_19->powerups[ VAR_15 ] ) {
   continue;
  }



  if ( VAR_19->powerups[ VAR_15 ] == VAR_1 ) {
   continue;
  }

  VAR_20 = VAR_19->powerups[ VAR_15 ] - VAR_6.time;
  if ( VAR_20 <= 0 ) {
   continue;
  }


  for ( VAR_16 = 0 ; VAR_16 < VAR_18 ; VAR_16++ ) {
   if ( VAR_14[VAR_16] >= VAR_20 ) {
    for ( VAR_17 = VAR_18 - 1 ; VAR_17 >= VAR_16 ; VAR_17-- ) {
     VAR_13[VAR_17+1] = VAR_13[VAR_17];
     VAR_14[VAR_17+1] = VAR_14[VAR_17];
    }
    break;
   }
  }
  VAR_13[VAR_16] = VAR_15;
  VAR_14[VAR_16] = VAR_20;
  VAR_18++;
 }


 for ( VAR_15 = 0 ; VAR_15 < VAR_18 ; VAR_15++ ) {
  VAR_21 = FUNC_0( VAR_13[VAR_15] );

  if (VAR_21) {
   VAR_20 = VAR_19->powerups[ VAR_13[VAR_15] ];
   if ( VAR_20 - VAR_6.time >= VAR_3 * VAR_4 ) {
    FUNC_5( ((void*)0) );
   } else {
    vec4_t VAR_25;

    VAR_22 = (float)( VAR_20 - VAR_6.time ) / VAR_4;
    VAR_22 -= (int)VAR_22;
    VAR_25[0] = VAR_25[1] = VAR_25[2] = VAR_25[3] = VAR_22;
    FUNC_5( VAR_25 );
   }

   FUNC_1( VAR_23, VAR_23, VAR_23 * .75, VAR_23, FUNC_4( VAR_21->icon ) );

   FUNC_3 (VAR_12, sizeof(VAR_12), "%i", VAR_14[VAR_15] / 1000);
   FUNC_2(VAR_23 + (VAR_23 * .75) + 3 , VAR_23 + VAR_23, VAR_10, VAR_11, VAR_12, 0, 0, 0);
   *VAR_24 += VAR_23 + VAR_9;
  }

 }
 FUNC_5( ((void*)0) );

}
