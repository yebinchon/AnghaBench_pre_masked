
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {short* sndChunk; struct TYPE_8__* next; } ;
typedef TYPE_1__ sndBuffer ;
struct TYPE_9__ {int soundChannels; TYPE_1__* soundData; } ;
typedef TYPE_2__ sfx_t ;
struct TYPE_10__ {int left; int right; } ;
typedef TYPE_3__ portable_samplepair_t ;
struct TYPE_11__ {int oldDopplerScale; float dopplerScale; int leftvol; int rightvol; scalar_t__ doppler; } ;
typedef TYPE_4__ channel_t ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0( channel_t *VAR_3, const sfx_t *VAR_4, int VAR_5, int VAR_6, int VAR_7 ) {
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 portable_samplepair_t *VAR_15;
 sndBuffer *VAR_16;
 short *VAR_17;
 float VAR_18, VAR_19[2], VAR_20, VAR_21, VAR_22;

 if (VAR_4->soundChannels <= 0) {
  return;
 }

 VAR_15 = &VAR_1[ VAR_7 ];

 if (VAR_3->doppler) {
  VAR_6 = VAR_6*VAR_3->oldDopplerScale;
 }

 if ( VAR_4->soundChannels == 2 ) {
  VAR_6 *= VAR_4->soundChannels;

  if ( VAR_6 & 1 ) {
   VAR_6 &= ~1;
  }
 }

 VAR_16 = VAR_4->soundData;
 while (VAR_6>=VAR_0) {
  VAR_16 = VAR_16->next;
  VAR_6 -= VAR_0;
  if (!VAR_16) {
   VAR_16 = VAR_4->soundData;
  }
 }

 if (!VAR_3->doppler || VAR_3->dopplerScale==1.0f) {
  VAR_11 = VAR_3->leftvol*VAR_2;
  VAR_12 = VAR_3->rightvol*VAR_2;
  VAR_17 = VAR_16->sndChunk;
  for ( VAR_13=0 ; VAR_13<VAR_5 ; VAR_13++ ) {
   VAR_8 = VAR_17[VAR_6++];
   VAR_15[VAR_13].left += (VAR_8 * VAR_11)>>8;

   if ( VAR_4->soundChannels == 2 ) {
    VAR_8 = VAR_17[VAR_6++];
   }
   VAR_15[VAR_13].right += (VAR_8 * VAR_12)>>8;

   if (VAR_6 == VAR_0) {
    VAR_16 = VAR_16->next;
    VAR_17 = VAR_16->sndChunk;
    VAR_6 = 0;
   }
  }
 } else {
  VAR_21 = VAR_3->leftvol*VAR_2;
  VAR_22 = VAR_3->rightvol*VAR_2;

  VAR_18 = VAR_6;
  VAR_17 = VAR_16->sndChunk;




  for ( VAR_13=0 ; VAR_13<VAR_5 ; VAR_13++ ) {

   VAR_9 = VAR_18;
   VAR_18 = VAR_18 + VAR_3->dopplerScale * VAR_4->soundChannels;
   VAR_10 = VAR_18;
   VAR_19[0] = VAR_19[1] = 0;
   for (VAR_14=VAR_9; VAR_14<VAR_10; VAR_14 += VAR_4->soundChannels) {
    if (VAR_14 == VAR_0) {
     VAR_16 = VAR_16->next;
     if (!VAR_16) {
      VAR_16 = VAR_4->soundData;
     }
     VAR_17 = VAR_16->sndChunk;
     VAR_18 -= VAR_0;
    }
    if ( VAR_4->soundChannels == 2 ) {
     VAR_19[0] += VAR_17[VAR_14&(VAR_0-1)];
     VAR_19[1] += VAR_17[(VAR_14+1)&(VAR_0-1)];
    } else {
     VAR_19[0] += VAR_17[VAR_14&(VAR_0-1)];
     VAR_19[1] += VAR_17[VAR_14&(VAR_0-1)];
    }
   }
   VAR_20 = 256 * (VAR_10-VAR_9) / VAR_4->soundChannels;
   VAR_15[VAR_13].left += (VAR_19[0] * VAR_21)/VAR_20;
   VAR_15[VAR_13].right += (VAR_19[1] * VAR_22)/VAR_20;
  }
 }
}
