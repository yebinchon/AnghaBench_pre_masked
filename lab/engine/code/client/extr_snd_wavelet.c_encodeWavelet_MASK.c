
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ sndChunk; struct TYPE_5__* next; } ;
typedef TYPE_1__ sndBuffer ;
struct TYPE_6__ {int soundLength; TYPE_1__* soundData; } ;
typedef TYPE_2__ sfx_t ;
typedef int byte ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (short) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ VAR_1 ;
 float* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (float*,int,int) ;

void FUNC_4( sfx_t *VAR_4, short *VAR_5) {
 float VAR_6[4097] = {0}, VAR_7;
 int VAR_8, VAR_9, VAR_10;
 sndBuffer *VAR_11, *VAR_12;
 byte *VAR_13;

 if (!VAR_1) {
  for (VAR_8=0;VAR_8<256;VAR_8++) {
   VAR_2[VAR_8] = (float)FUNC_0((byte)VAR_8);
  }
  VAR_1 = VAR_3;
 }
 VAR_12 = ((void*)0);

 VAR_9 = VAR_4->soundLength;
 while(VAR_9>0) {
  VAR_10 = VAR_9;
  if (VAR_10>(VAR_0*2)) {
   VAR_10 = (VAR_0*2);
  }

  if (VAR_10<4) {
   VAR_10 = 4;
  }

  VAR_11 = FUNC_2();
  if (VAR_4->soundData == ((void*)0)) {
   VAR_4->soundData = VAR_11;
  } else if (VAR_12 != ((void*)0)) {
   VAR_12->next = VAR_11;
  }
  VAR_12 = VAR_11;
  for(VAR_8=0; VAR_8<VAR_10; VAR_8++) {
   VAR_6[VAR_8] = *VAR_5;
   VAR_5++;
  }
  FUNC_3(VAR_6, VAR_10, 1);
  VAR_13 = (byte *)VAR_12->sndChunk;

  for(VAR_8=0;VAR_8<VAR_10;VAR_8++) {
   VAR_7 = VAR_6[VAR_8];
   if (VAR_7 > 32767) VAR_7 = 32767; else if (VAR_7<-32768) VAR_7 = -32768;
   VAR_13[VAR_8] = FUNC_1((short)VAR_7);
  }

  VAR_12->size = VAR_10;
  VAR_9 -= VAR_10;
 }
}
