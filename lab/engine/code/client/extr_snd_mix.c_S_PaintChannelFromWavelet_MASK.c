
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* next; } ;
typedef TYPE_1__ sndBuffer ;
struct TYPE_12__ {TYPE_1__* soundData; } ;
typedef TYPE_2__ sfx_t ;
struct TYPE_13__ {int left; int right; } ;
typedef TYPE_3__ portable_samplepair_t ;
struct TYPE_14__ {int leftvol; int rightvol; } ;
typedef TYPE_4__ channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,short*) ;
 int FUNC_1 (TYPE_1__*,short*) ;
 TYPE_3__* VAR_2 ;
 short* VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;

void FUNC_2( channel_t *VAR_7, sfx_t *VAR_8, int VAR_9, int VAR_10, int VAR_11 ) {
 int VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;
 portable_samplepair_t *VAR_16;
 sndBuffer *VAR_17;
 short *VAR_18;

 VAR_13 = VAR_7->leftvol*VAR_6;
 VAR_14 = VAR_7->rightvol*VAR_6;

 VAR_15 = 0;
 VAR_16 = &VAR_2[ VAR_11 ];
 VAR_17 = VAR_8->soundData;
 while (VAR_10>=(VAR_1*4)) {
  VAR_17 = VAR_17->next;
  VAR_10 -= (VAR_1*4);
  VAR_15++;
 }

 if (VAR_15!=VAR_4 || VAR_5 != VAR_8) {
  FUNC_0( VAR_17, VAR_3 );
  VAR_4 = VAR_15;
  VAR_5 = VAR_8;
 }

 VAR_18 = VAR_3;

 for ( VAR_15=0 ; VAR_15<VAR_9 ; VAR_15++ ) {
  VAR_12 = VAR_18[VAR_10++];
  VAR_16[VAR_15].left += (VAR_12 * VAR_13)>>8;
  VAR_16[VAR_15].right += (VAR_12 * VAR_14)>>8;

  if (VAR_10 == VAR_0*2) {
   VAR_17 = VAR_17->next;
   FUNC_1(VAR_17, VAR_3);
   VAR_4++;
   VAR_10 = 0;
  }
 }
}
