
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int allocMid; TYPE_1__* coders; } ;
struct TYPE_4__ {scalar_t__ outBufSize; int * outBuf; } ;
typedef TYPE_1__ CLzma2DecMtThread ;
typedef TYPE_2__ CLzma2DecMt ;


 int FUNC_0 (int ,int *) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_1(CLzma2DecMt *VAR_1)
{
  unsigned VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  {
    CLzma2DecMtThread *VAR_3 = &VAR_1->coders[VAR_2];
    if (VAR_3->outBuf)
    {
      FUNC_0(VAR_1->allocMid, VAR_3->outBuf);
      VAR_3->outBuf = ((void*)0);
      VAR_3->outBufSize = 0;
    }
  }
}
