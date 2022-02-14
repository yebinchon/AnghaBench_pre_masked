
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int range; int cacheSize; int* probs; scalar_t__ flushPos; scalar_t__ tempPos; int relatLimit; scalar_t__ fileSize; scalar_t__ fileIp; scalar_t__ ip; scalar_t__ low; scalar_t__ cache; scalar_t__ prevByte; int finishMode; int state; } ;
typedef TYPE_1__ CBcj2Enc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(CBcj2Enc *VAR_4)
{
  unsigned VAR_5;

  VAR_4->state = VAR_1;
  VAR_4->finishMode = VAR_0;

  VAR_4->prevByte = 0;

  VAR_4->cache = 0;
  VAR_4->range = 0xFFFFFFFF;
  VAR_4->low = 0;
  VAR_4->cacheSize = 1;

  VAR_4->ip = 0;

  VAR_4->fileIp = 0;
  VAR_4->fileSize = 0;
  VAR_4->relatLimit = VAR_2;

  VAR_4->tempPos = 0;

  VAR_4->flushPos = 0;

  for (VAR_5 = 0; VAR_5 < sizeof(VAR_4->probs) / sizeof(VAR_4->probs[0]); VAR_5++)
    VAR_4->probs[VAR_5] = VAR_3 >> 1;
}
