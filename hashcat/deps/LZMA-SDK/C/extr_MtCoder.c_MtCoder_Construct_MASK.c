
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_5__ {int cs; } ;
struct TYPE_7__ {TYPE_1__ mtProgress; int cs; int finishedEvent; int * writeEvents; TYPE_2__* threads; int blocksSemaphore; int readEvent; scalar_t__ allocatedBufsSize; int * mtCallbackObject; int * mtCallback; int * allocBig; int * progress; scalar_t__ inDataSize; int * inData; int * inStream; scalar_t__ expectedDataSize; scalar_t__ numThreadsMax; scalar_t__ blockSize; } ;
struct TYPE_6__ {unsigned int index; int thread; int startEvent; int stop; int * inBuf; TYPE_3__* mtCoder; } ;
typedef scalar_t__ Int64 ;
typedef TYPE_2__ CMtCoderThread ;
typedef TYPE_3__ CMtCoder ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(CMtCoder *VAR_3)
{
  unsigned VAR_4;

  VAR_3->blockSize = 0;
  VAR_3->numThreadsMax = 0;
  VAR_3->expectedDataSize = (UInt64)(Int64)-1;

  VAR_3->inStream = ((void*)0);
  VAR_3->inData = ((void*)0);
  VAR_3->inDataSize = 0;

  VAR_3->progress = ((void*)0);
  VAR_3->allocBig = ((void*)0);

  VAR_3->mtCallback = ((void*)0);
  VAR_3->mtCallbackObject = ((void*)0);

  VAR_3->allocatedBufsSize = 0;

  FUNC_1(&VAR_3->readEvent);
  FUNC_2(&VAR_3->blocksSemaphore);

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
    CMtCoderThread *VAR_5 = &VAR_3->threads[VAR_4];
    VAR_5->mtCoder = VAR_3;
    VAR_5->index = VAR_4;
    VAR_5->inBuf = ((void*)0);
    VAR_5->stop = VAR_0;
    FUNC_1(&VAR_5->startEvent);
    FUNC_3(&VAR_5->thread);
  }





    FUNC_1(&VAR_3->finishedEvent);


  FUNC_0(&VAR_3->cs);
  FUNC_0(&VAR_3->mtProgress.cs);
}
