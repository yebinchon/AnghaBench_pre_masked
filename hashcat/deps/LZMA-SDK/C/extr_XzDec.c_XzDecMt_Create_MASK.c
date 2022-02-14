
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int numAlignBits; int vt; scalar_t__ offset; void* baseAlloc; } ;
struct TYPE_7__ {TYPE_1__* coders; void* mtc_WasConstructed; int props; scalar_t__ unpackBlockMaxSize; TYPE_5__ alignOffsetAlloc; int dec; scalar_t__ inBufSize; int * inBuf; scalar_t__ outBufSize; int * outBuf; void* allocMid; } ;
struct TYPE_6__ {scalar_t__ outBufSize; int * outBuf; void* dec_created; } ;
typedef void* ISzAllocPtr ;
typedef TYPE_1__ CXzDecMtThread ;
typedef TYPE_2__* CXzDecMtHandle ;
typedef TYPE_2__ CXzDecMt ;


 int FUNC_0 (TYPE_5__*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (void*,int) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

CXzDecMtHandle FUNC_4(ISzAllocPtr VAR_2, ISzAllocPtr VAR_3)
{
  CXzDecMt *VAR_4 = (CXzDecMt *)FUNC_1(VAR_2, sizeof(CXzDecMt));
  if (!VAR_4)
    return ((void*)0);

  FUNC_0(&VAR_4->alignOffsetAlloc);
  VAR_4->alignOffsetAlloc.baseAlloc = VAR_2;
  VAR_4->alignOffsetAlloc.numAlignBits = 7;
  VAR_4->alignOffsetAlloc.offset = 0;

  VAR_4->allocMid = VAR_3;

  VAR_4->outBuf = ((void*)0);
  VAR_4->outBufSize = 0;
  VAR_4->inBuf = ((void*)0);
  VAR_4->inBufSize = 0;

  FUNC_3(&VAR_4->dec, &VAR_4->alignOffsetAlloc.vt);

  VAR_4->unpackBlockMaxSize = 0;

  FUNC_2(&VAR_4->props);


  VAR_4->mtc_WasConstructed = VAR_0;
  {
    unsigned VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    {
      CXzDecMtThread *VAR_6 = &VAR_4->coders[VAR_5];
      VAR_6->dec_created = VAR_0;
      VAR_6->outBuf = ((void*)0);
      VAR_6->outBufSize = 0;
    }
  }


  return VAR_4;
}
