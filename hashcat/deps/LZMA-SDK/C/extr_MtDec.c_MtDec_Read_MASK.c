
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UInt64 ;
struct TYPE_8__ {scalar_t__ numFilledThreads; size_t filledThreadStart; size_t numStartedThreads; size_t inBufSize; size_t crossEnd; size_t crossStart; void* crossBlock; int alloc; TYPE_1__* threads; } ;
struct TYPE_7__ {void* next; } ;
struct TYPE_6__ {void* inBuf; scalar_t__ inDataSize; size_t inDataSize_Start; } ;
typedef TYPE_1__ CMtDecThread ;
typedef TYPE_2__ CMtDecBufLink ;
typedef TYPE_3__ CMtDec ;
typedef int Byte ;


 int FUNC_0 (int ,void*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*) ;

const Byte *FUNC_3(CMtDec *VAR_0, size_t *VAR_1)
{
  while (VAR_0->numFilledThreads != 0)
  {
    CMtDecThread *VAR_2 = &VAR_0->threads[VAR_0->filledThreadStart];

    if (*VAR_1 != 0)
    {
      {
        void *VAR_3 = VAR_2->inBuf;
        void *VAR_4 = ((CMtDecBufLink *)VAR_3)->next;
        FUNC_0(VAR_0->alloc, VAR_3);
        VAR_2->inBuf = VAR_4;
      }

      if (VAR_2->inDataSize == 0)
      {
        FUNC_2(VAR_2);
        if (--VAR_0->numFilledThreads == 0)
          break;
        if (++VAR_0->filledThreadStart == VAR_0->numStartedThreads)
          VAR_0->filledThreadStart = 0;
        VAR_2 = &VAR_0->threads[VAR_0->filledThreadStart];
      }
    }

    {
      size_t VAR_5 = VAR_2->inDataSize_Start;
      if (VAR_5 != 0)
        VAR_2->inDataSize_Start = 0;
      else
      {
        UInt64 VAR_6 = VAR_2->inDataSize;
        VAR_5 = VAR_0->inBufSize;
        if (VAR_5 > VAR_6)
          VAR_5 = (size_t)VAR_6;
      }
      VAR_2->inDataSize -= VAR_5;
      *VAR_1 = VAR_5;
      return (const Byte *)FUNC_1(VAR_2->inBuf);
    }
  }

  {
    size_t VAR_7 = VAR_0->crossEnd - VAR_0->crossStart;
    if (VAR_7 != 0)
    {
      const Byte *VAR_8 = FUNC_1(VAR_0->crossBlock) + VAR_0->crossStart;
      *VAR_1 = VAR_7;
      VAR_0->crossStart = 0;
      VAR_0->crossEnd = 0;
      return VAR_8;
    }
    *VAR_1 = 0;
    if (VAR_0->crossBlock)
    {
      FUNC_0(VAR_0->alloc, VAR_0->crossBlock);
      VAR_0->crossBlock = ((void*)0);
    }
    return ((void*)0);
  }
}
