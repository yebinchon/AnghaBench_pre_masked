
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int soundLength; TYPE_3__* soundData; } ;
typedef TYPE_1__ sfx_t ;
struct TYPE_5__ {int* sndChunk; int * next; } ;


 TYPE_3__* FUNC_0 () ;

void FUNC_1( sfx_t *VAR_0 ) {

 int VAR_1;

 VAR_0->soundLength = 512;
 VAR_0->soundData = FUNC_0();
 VAR_0->soundData->next = ((void*)0);


 for ( VAR_1 = 0 ; VAR_1 < VAR_0->soundLength ; VAR_1++ ) {
  VAR_0->soundData->sndChunk[VAR_1] = VAR_1;
 }
}
