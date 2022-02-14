
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vt; } ;
struct TYPE_5__ {scalar_t__ inBufSize; int * inBuf; int allocMid; scalar_t__ dec_created; TYPE_1__ alignOffsetAlloc; int dec; } ;
typedef TYPE_2__ CLzma2DecMt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(CLzma2DecMt *VAR_1)
{
  if (VAR_1->dec_created)
  {
    FUNC_1(&VAR_1->dec, &VAR_1->alignOffsetAlloc.vt);
    VAR_1->dec_created = VAR_0;
  }
  if (VAR_1->inBuf)
  {
    FUNC_0(VAR_1->allocMid, VAR_1->inBuf);
    VAR_1->inBuf = ((void*)0);
  }
  VAR_1->inBufSize = 0;
}
