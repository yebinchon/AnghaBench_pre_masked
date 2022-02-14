
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sndChunk; struct TYPE_8__* next; } ;
typedef TYPE_1__ sndBuffer ;
struct TYPE_9__ {TYPE_1__* soundData; } ;
typedef TYPE_2__ sfx_t ;
struct TYPE_10__ {int left; int right; } ;
typedef TYPE_3__ portable_samplepair_t ;
struct TYPE_11__ {int leftvol; int rightvol; float dopplerScale; int doppler; } ;
typedef TYPE_4__ channel_t ;
typedef size_t byte ;


 int VAR_0 ;
 int* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;

void FUNC_0( channel_t *VAR_4, sfx_t *VAR_5, int VAR_6, int VAR_7, int VAR_8 ) {
 int VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;
 portable_samplepair_t *VAR_13;
 sndBuffer *VAR_14;
 byte *VAR_15;
 float VAR_16;

 VAR_10 = VAR_4->leftvol*VAR_3;
 VAR_11 = VAR_4->rightvol*VAR_3;

 VAR_13 = &VAR_2[ VAR_8 ];
 VAR_14 = VAR_5->soundData;
 while (VAR_7>=(VAR_0*2)) {
  VAR_14 = VAR_14->next;
  VAR_7 -= (VAR_0*2);
  if (!VAR_14) {
   VAR_14 = VAR_5->soundData;
  }
 }

 if (!VAR_4->doppler) {
  VAR_15 = (byte *)VAR_14->sndChunk + VAR_7;
  for ( VAR_12=0 ; VAR_12<VAR_6 ; VAR_12++ ) {
   VAR_9 = VAR_1[*VAR_15];
   VAR_13[VAR_12].left += (VAR_9 * VAR_10)>>8;
   VAR_13[VAR_12].right += (VAR_9 * VAR_11)>>8;
   VAR_15++;
   if (VAR_14 != ((void*)0) && VAR_15 == (byte *)VAR_14->sndChunk+(VAR_0*2)) {
    VAR_14 = VAR_14->next;
    VAR_15 = (byte *)VAR_14->sndChunk;
   }
  }
 } else {
  VAR_16 = VAR_7;
  VAR_15 = (byte *)VAR_14->sndChunk;
  for ( VAR_12=0 ; VAR_12<VAR_6 ; VAR_12++ ) {
   VAR_9 = VAR_1[VAR_15[(int)(VAR_16)]];
   VAR_16 = VAR_16 + VAR_4->dopplerScale;
   VAR_13[VAR_12].left += (VAR_9 * VAR_10)>>8;
   VAR_13[VAR_12].right += (VAR_9 * VAR_11)>>8;
   if (VAR_16 >= VAR_0*2) {
    VAR_14 = VAR_14->next;
    if (!VAR_14) {
     VAR_14 = VAR_5->soundData;
    }
    VAR_15 = (byte *)VAR_14->sndChunk;
    VAR_16 = 0.0;
   }
  }
 }
}
