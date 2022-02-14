
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; scalar_t__ sndChunk; } ;
typedef TYPE_1__ sndBuffer ;
typedef size_t byte ;


 float* VAR_0 ;
 int FUNC_0 (float*,int,int) ;

void FUNC_1(sndBuffer *VAR_1, short *VAR_2) {
 float VAR_3[4097] = {0};
 int VAR_4;
 byte *VAR_5;

 int VAR_6 = VAR_1->size;

 VAR_5 = (byte *)VAR_1->sndChunk;
 for(VAR_4=0;VAR_4<VAR_6;VAR_4++) {
  VAR_3[VAR_4] = VAR_0[VAR_5[VAR_4]];
 }

 FUNC_0(VAR_3, VAR_6, -1);

 if (!VAR_2) return;

 for(VAR_4=0; VAR_4<VAR_6; VAR_4++) {
  VAR_2[VAR_4] = VAR_3[VAR_4];
 }
}
