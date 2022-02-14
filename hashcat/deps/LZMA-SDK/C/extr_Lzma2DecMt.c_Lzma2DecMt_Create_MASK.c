
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int numAlignBits; void* baseAlloc; scalar_t__ offset; } ;
struct TYPE_7__ {TYPE_1__* coders; void* mtc_WasConstructed; void* dec_created; scalar_t__ inBufSize; int * inBuf; TYPE_5__ alignOffsetAlloc; void* allocMid; } ;
struct TYPE_6__ {scalar_t__ outBufSize; int * outBuf; void* dec_created; } ;
typedef void* ISzAllocPtr ;
typedef TYPE_1__ CLzma2DecMtThread ;
typedef TYPE_2__* CLzma2DecMtHandle ;
typedef TYPE_2__ CLzma2DecMt ;


 int FUNC_0 (TYPE_5__*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (void*,int) ;
 unsigned int VAR_1 ;

CLzma2DecMtHandle FUNC_2(ISzAllocPtr VAR_2, ISzAllocPtr VAR_3)
{
  CLzma2DecMt *VAR_4 = (CLzma2DecMt *)FUNC_1(VAR_2, sizeof(CLzma2DecMt));
  if (!VAR_4)
    return ((void*)0);


  VAR_4->allocMid = VAR_3;

  FUNC_0(&VAR_4->alignOffsetAlloc);
  VAR_4->alignOffsetAlloc.numAlignBits = 7;
  VAR_4->alignOffsetAlloc.offset = 0;
  VAR_4->alignOffsetAlloc.baseAlloc = VAR_2;

  VAR_4->inBuf = ((void*)0);
  VAR_4->inBufSize = 0;
  VAR_4->dec_created = VAR_0;




  VAR_4->mtc_WasConstructed = VAR_0;
  {
    unsigned VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    {
      CLzma2DecMtThread *VAR_6 = &VAR_4->coders[VAR_5];
      VAR_6->dec_created = VAR_0;
      VAR_6->outBuf = ((void*)0);
      VAR_6->outBufSize = 0;
    }
  }


  return VAR_4;
}
