
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; scalar_t__ sndChunk; } ;
typedef TYPE_1__ sndBuffer ;
typedef size_t byte ;


 short* VAR_0 ;

void FUNC_0(sndBuffer *VAR_1, short *VAR_2) {
 int VAR_3;
 byte *VAR_4;

 int VAR_5 = VAR_1->size;

 VAR_4 = (byte *)VAR_1->sndChunk;
 for(VAR_3=0;VAR_3<VAR_5;VAR_3++) {
  VAR_2[VAR_3] = VAR_0[VAR_4[VAR_3]];
 }
}
