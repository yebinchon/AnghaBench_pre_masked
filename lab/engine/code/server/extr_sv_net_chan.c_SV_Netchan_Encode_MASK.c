
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_8__ {long cursize; int readcount; int bit; int* data; int oob; } ;
typedef TYPE_2__ msg_t ;
struct TYPE_7__ {int outgoingSequence; } ;
struct TYPE_9__ {int challenge; TYPE_1__ netchan; } ;
typedef TYPE_3__ client_t ;
typedef int byte ;


 int FUNC_0 (TYPE_2__*) ;
 long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(client_t *VAR_2, msg_t *VAR_3, const char *VAR_4)
{
 long VAR_5, VAR_6;
 byte VAR_7, *VAR_8;
 int VAR_9, VAR_10;
 qboolean VAR_11;

 if ( VAR_3->cursize < VAR_0 ) {
  return;
 }

 VAR_9 = VAR_3->readcount;
 VAR_10 = VAR_3->bit;
 VAR_11 = VAR_3->oob;

 VAR_3->bit = 0;
 VAR_3->readcount = 0;
 VAR_3->oob = VAR_1;

                             FUNC_0(VAR_3);

 VAR_3->oob = VAR_11;
 VAR_3->bit = VAR_10;
 VAR_3->readcount = VAR_9;

 VAR_8 = (byte *) VAR_4;
 VAR_6 = 0;

 VAR_7 = VAR_2->challenge ^ VAR_2->netchan.outgoingSequence;
 for (VAR_5 = VAR_0; VAR_5 < VAR_3->cursize; VAR_5++) {

  if (!VAR_8[VAR_6])
   VAR_6 = 0;
  if (VAR_8[VAR_6] > 127 || VAR_8[VAR_6] == '%') {
   VAR_7 ^= '.' << (VAR_5 & 1);
  }
  else {
   VAR_7 ^= VAR_8[VAR_6] << (VAR_5 & 1);
  }
  VAR_6++;

  *(VAR_3->data + VAR_5) = *(VAR_3->data + VAR_5) ^ VAR_7;
 }
}
