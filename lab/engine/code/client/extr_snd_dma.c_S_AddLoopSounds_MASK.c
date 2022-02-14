
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mergeFrame; int oldDopplerScale; int dopplerScale; scalar_t__ doppler; TYPE_1__* sfx; int origin; scalar_t__ kill; int active; } ;
typedef TYPE_2__ loopSound_t ;
struct TYPE_8__ {int master_vol; int leftvol; int rightvol; int fullVolume; int oldDopplerScale; int dopplerScale; scalar_t__ doppler; TYPE_1__* thesfx; } ;
typedef TYPE_3__ channel_t ;
struct TYPE_6__ {int lastTimeUsed; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int*,int*) ;
 TYPE_2__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;

void FUNC_2 (void) {
 int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 channel_t *VAR_13;
 loopSound_t *VAR_14, *VAR_15;
 static int VAR_16;


 VAR_4 = 0;

 VAR_8 = FUNC_0();

 VAR_16++;
 for ( VAR_6 = 0 ; VAR_6 < VAR_1 ; VAR_6++) {
  VAR_14 = &VAR_2[VAR_6];
  if ( !VAR_14->active || VAR_14->mergeFrame == VAR_16 ) {
   continue;
  }

  if (VAR_14->kill) {
   FUNC_1( VAR_14->origin, 127, &VAR_9, &VAR_10);
  } else {
   FUNC_1( VAR_14->origin, 90, &VAR_9, &VAR_10);
  }

  VAR_14->sfx->lastTimeUsed = VAR_8;

  for (VAR_7=(VAR_6+1); VAR_7< VAR_1 ; VAR_7++) {
   VAR_15 = &VAR_2[VAR_7];
   if ( !VAR_15->active || VAR_15->doppler || VAR_15->sfx != VAR_14->sfx) {
    continue;
   }
   VAR_15->mergeFrame = VAR_16;

   if (VAR_15->kill) {
    FUNC_1( VAR_15->origin, 127, &VAR_11, &VAR_12);
   } else {
    FUNC_1( VAR_15->origin, 90, &VAR_11, &VAR_12);
   }

   VAR_15->sfx->lastTimeUsed = VAR_8;
   VAR_9 += VAR_11;
   VAR_10 += VAR_12;
  }
  if (VAR_9 == 0 && VAR_10 == 0) {
   continue;
  }


  VAR_13 = &VAR_3[VAR_4];

  if (VAR_9 > 255) {
   VAR_9 = 255;
  }
  if (VAR_10 > 255) {
   VAR_10 = 255;
  }

  VAR_13->master_vol = 127;
  VAR_13->leftvol = VAR_9;
  VAR_13->rightvol = VAR_10;
  VAR_13->thesfx = VAR_14->sfx;
  VAR_13->doppler = VAR_14->doppler;
  VAR_13->dopplerScale = VAR_14->dopplerScale;
  VAR_13->oldDopplerScale = VAR_14->oldDopplerScale;
  VAR_13->fullVolume = VAR_5;
  VAR_4++;
  if (VAR_4 == VAR_0) {
   return;
  }
 }
}
