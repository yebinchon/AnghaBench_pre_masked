
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_1__ sndBuffer ;
struct TYPE_11__ {TYPE_1__* soundData; } ;
typedef TYPE_2__ sfx_t ;
struct TYPE_12__ {int left; int right; } ;
typedef TYPE_3__ portable_samplepair_t ;
struct TYPE_13__ {int leftvol; int rightvol; int oldDopplerScale; scalar_t__ doppler; } ;
typedef TYPE_4__ channel_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,short*) ;
 TYPE_3__* VAR_1 ;
 short* VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;

void FUNC_1( channel_t *VAR_6, sfx_t *VAR_7, int VAR_8, int VAR_9, int VAR_10 ) {
 int VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;
 portable_samplepair_t *VAR_15;
 sndBuffer *VAR_16;
 short *VAR_17;

 VAR_12 = VAR_6->leftvol*VAR_5;
 VAR_13 = VAR_6->rightvol*VAR_5;

 VAR_14 = 0;
 VAR_15 = &VAR_1[ VAR_10 ];
 VAR_16 = VAR_7->soundData;

 if (VAR_6->doppler) {
  VAR_9 = VAR_9*VAR_6->oldDopplerScale;
 }

 while (VAR_9>=(VAR_0*4)) {
  VAR_16 = VAR_16->next;
  VAR_9 -= (VAR_0*4);
  VAR_14++;
 }

 if (VAR_14!=VAR_3 || VAR_4 != VAR_7) {
  FUNC_0( VAR_16, VAR_2 );
  VAR_3 = VAR_14;
  VAR_4 = VAR_7;
 }

 VAR_17 = VAR_2;

 for ( VAR_14=0 ; VAR_14<VAR_8 ; VAR_14++ ) {
  VAR_11 = VAR_17[VAR_9++];
  VAR_15[VAR_14].left += (VAR_11 * VAR_12)>>8;
  VAR_15[VAR_14].right += (VAR_11 * VAR_13)>>8;

  if (VAR_9 == VAR_0*4) {
   VAR_16 = VAR_16->next;
   FUNC_0( VAR_16, VAR_2);
   VAR_9 = 0;
   VAR_3++;
  }
 }
}
