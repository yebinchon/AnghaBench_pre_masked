
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int readcount; int bit; int cursize; int* data; int oob; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_7__ {int challenge; scalar_t__* reliableCommands; } ;
typedef TYPE_2__ client_t ;
typedef int byte ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1( client_t *VAR_3, msg_t *VAR_4 ) {
 int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 qboolean VAR_12;
 byte VAR_13, *VAR_14;

 VAR_10 = VAR_4->readcount;
 VAR_11 = VAR_4->bit;
 VAR_12 = VAR_4->oob;

 VAR_4->oob = VAR_2;

 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = FUNC_0(VAR_4);
 VAR_7 = FUNC_0(VAR_4);

 VAR_4->oob = VAR_12;
 VAR_4->bit = VAR_11;
 VAR_4->readcount = VAR_10;

 VAR_14 = (byte *)VAR_3->reliableCommands[ VAR_7 & (VAR_0-1) ];
 VAR_9 = 0;

 VAR_13 = VAR_3->challenge ^ VAR_5 ^ VAR_6;
 for (VAR_8 = VAR_4->readcount + VAR_1; VAR_8 < VAR_4->cursize; VAR_8++) {

  if (!VAR_14[VAR_9])
   VAR_9 = 0;
  if (VAR_14[VAR_9] > 127 || VAR_14[VAR_9] == '%') {
   VAR_13 ^= '.' << (VAR_8 & 1);
  }
  else {
   VAR_13 ^= VAR_14[VAR_9] << (VAR_8 & 1);
  }
  VAR_9++;

  *(VAR_4->data + VAR_8) = *(VAR_4->data + VAR_8) ^ VAR_13;
 }
}
