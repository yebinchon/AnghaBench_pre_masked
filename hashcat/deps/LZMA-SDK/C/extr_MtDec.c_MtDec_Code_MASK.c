
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ WRes ;
typedef scalar_t__ UInt64 ;
struct TYPE_9__ {int blockIndex; scalar_t__ threadingErrorSRes; unsigned int numThreadsMax; unsigned int numStartedThreads_Limit; scalar_t__ inBufSize; scalar_t__ allocatedBufsSize; void* needContinue; void* overflow; void* isAllocError; scalar_t__ numStartedThreads; TYPE_1__* threads; scalar_t__ exitThreadWRes; void* exitThread; int progress; int mtProgress; int * crossBlock; int alloc; scalar_t__ numFilledThreads; scalar_t__ filledThreadStart; scalar_t__ crossEnd; scalar_t__ crossStart; void* wasInterrupted; scalar_t__ codeRes; scalar_t__ readRes; scalar_t__ readProcessed; scalar_t__ interruptIndex; void* needInterrupt; void* readWasFinished; scalar_t__ inProcessed; } ;
struct TYPE_8__ {int canRead; int canWrite; scalar_t__ inBuf; } ;
typedef scalar_t__ SRes ;
typedef scalar_t__ Int64 ;
typedef TYPE_1__ CMtDecThread ;
typedef TYPE_2__ CMtDec ;


 scalar_t__ FUNC_0 (int *) ;
 void* VAR_0 ;
 int FUNC_1 (int ,int *) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 void* VAR_3 ;

SRes FUNC_8(CMtDec *VAR_4)
{
  unsigned VAR_5;

  VAR_4->inProcessed = 0;

  VAR_4->blockIndex = 1;
  VAR_4->isAllocError = VAR_0;
  VAR_4->overflow = VAR_0;
  VAR_4->threadingErrorSRes = VAR_2;

  VAR_4->needContinue = VAR_3;

  VAR_4->readWasFinished = VAR_0;
  VAR_4->needInterrupt = VAR_0;
  VAR_4->interruptIndex = (UInt64)(Int64)-1;

  VAR_4->readProcessed = 0;
  VAR_4->readRes = VAR_2;
  VAR_4->codeRes = VAR_2;
  VAR_4->wasInterrupted = VAR_0;

  VAR_4->crossStart = 0;
  VAR_4->crossEnd = 0;

  VAR_4->filledThreadStart = 0;
  VAR_4->numFilledThreads = 0;

  {
    unsigned VAR_6 = VAR_4->numThreadsMax;
    if (VAR_6 > VAR_1)
      VAR_6 = VAR_1;
    VAR_4->numStartedThreads_Limit = VAR_6;
    VAR_4->numStartedThreads = 0;
  }

  if (VAR_4->inBufSize != VAR_4->allocatedBufsSize)
  {
    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    {
      CMtDecThread *VAR_7 = &VAR_4->threads[VAR_5];
      if (VAR_7->inBuf)
        FUNC_4(VAR_7);
    }
    if (VAR_4->crossBlock)
    {
      FUNC_1(VAR_4->alloc, VAR_4->crossBlock);
      VAR_4->crossBlock = ((void*)0);
    }

    VAR_4->allocatedBufsSize = VAR_4->inBufSize;
  }

  FUNC_6(&VAR_4->mtProgress, VAR_4->progress);


  VAR_4->exitThread = VAR_0;
  VAR_4->exitThreadWRes = 0;

  {
    WRes VAR_8;
    WRes VAR_9;
    CMtDecThread *VAR_10 = &VAR_4->threads[VAR_4->numStartedThreads++];

    VAR_8 = FUNC_3(VAR_10);
    if (VAR_8 == 0) { VAR_8 = FUNC_0(&VAR_10->canWrite);
    if (VAR_8 == 0) { VAR_8 = FUNC_0(&VAR_10->canRead);
    if (VAR_8 == 0) { VAR_8 = FUNC_7(VAR_10);
    if (VAR_8 != 0)
    {
      VAR_4->needContinue = VAR_0;
      FUNC_5(VAR_4);
    }}}}




    VAR_9 = FUNC_2(VAR_8);

    if (VAR_9 != 0)
      VAR_4->threadingErrorSRes = VAR_9;

    if (



        VAR_4->isAllocError
        || VAR_4->threadingErrorSRes != VAR_2
        || VAR_4->overflow)
    {

    }
    else
      VAR_4->needContinue = VAR_0;

    if (VAR_4->needContinue)
      return VAR_2;


      return VAR_9;

  }
}
