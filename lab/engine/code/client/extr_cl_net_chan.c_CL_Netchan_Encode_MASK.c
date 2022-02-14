
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursize; int readcount; int bit; int oob; int* data; } ;
typedef TYPE_1__ msg_t ;
typedef int byte ;
struct TYPE_6__ {int challenge; scalar_t__* serverCommands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_1( msg_t *VAR_3 ) {
 int VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 byte VAR_12, *VAR_13;

 if ( VAR_3->cursize <= VAR_0 ) {
  return;
 }

        VAR_9 = VAR_3->readcount;
        VAR_10 = VAR_3->bit;
        VAR_11 = VAR_3->oob;

        VAR_3->bit = 0;
        VAR_3->readcount = 0;
        VAR_3->oob = 0;

        VAR_4 = FUNC_0(VAR_3);
 VAR_5 = FUNC_0(VAR_3);
 VAR_6 = FUNC_0(VAR_3);

        VAR_3->oob = VAR_11;
        VAR_3->bit = VAR_10;
        VAR_3->readcount = VAR_9;

 VAR_13 = (byte *)VAR_2.serverCommands[ VAR_6 & (VAR_1-1) ];
 VAR_8 = 0;

 VAR_12 = VAR_2.challenge ^ VAR_4 ^ VAR_5;
 for (VAR_7 = VAR_0; VAR_7 < VAR_3->cursize; VAR_7++) {

  if (!VAR_13[VAR_8])
   VAR_8 = 0;
  if (VAR_13[VAR_8] > 127 || VAR_13[VAR_8] == '%') {
   VAR_12 ^= '.' << (VAR_7 & 1);
  }
  else {
   VAR_12 ^= VAR_13[VAR_8] << (VAR_7 & 1);
  }
  VAR_8++;

  *(VAR_3->data + VAR_7) = (*(VAR_3->data + VAR_7)) ^ VAR_12;
 }
}
