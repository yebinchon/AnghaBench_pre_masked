
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cs; } ;
struct TYPE_7__ {size_t inBufSize; TYPE_1__ mtProgress; TYPE_2__* threads; scalar_t__ allocatedBufsSize; int * mtCallbackObject; int * mtCallback; int * alloc; int * progress; scalar_t__ numFilledThreads; scalar_t__ crossEnd; scalar_t__ crossStart; int * crossBlock; int * inStream; scalar_t__ numThreadsMax; } ;
struct TYPE_6__ {unsigned int index; int thread; int canWrite; int canRead; int * inBuf; TYPE_3__* mtDec; } ;
typedef TYPE_2__ CMtDecThread ;
typedef TYPE_3__ CMtDec ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3(CMtDec *VAR_1)
{
  unsigned VAR_2;

  VAR_1->inBufSize = (size_t)1 << 18;

  VAR_1->numThreadsMax = 0;

  VAR_1->inStream = ((void*)0);




  VAR_1->crossBlock = ((void*)0);
  VAR_1->crossStart = 0;
  VAR_1->crossEnd = 0;

  VAR_1->numFilledThreads = 0;

  VAR_1->progress = ((void*)0);
  VAR_1->alloc = ((void*)0);

  VAR_1->mtCallback = ((void*)0);
  VAR_1->mtCallbackObject = ((void*)0);

  VAR_1->allocatedBufsSize = 0;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  {
    CMtDecThread *VAR_3 = &VAR_1->threads[VAR_2];
    VAR_3->mtDec = VAR_1;
    VAR_3->index = VAR_2;
    VAR_3->inBuf = ((void*)0);
    FUNC_1(&VAR_3->canRead);
    FUNC_1(&VAR_3->canWrite);
    FUNC_2(&VAR_3->thread);
  }



  FUNC_0(&VAR_1->mtProgress.cs);
}
