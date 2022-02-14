
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ inBufSize; int * inBuf; int allocMid; scalar_t__ outBufSize; int * outBuf; int dec; } ;
typedef TYPE_1__ CXzDecMt ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CXzDecMt *VAR_0)
{
  FUNC_1(&VAR_0->dec);

  if (VAR_0->outBuf)
  {
    FUNC_0(VAR_0->allocMid, VAR_0->outBuf);
    VAR_0->outBuf = ((void*)0);
  }
  VAR_0->outBufSize = 0;

  if (VAR_0->inBuf)
  {
    FUNC_0(VAR_0->allocMid, VAR_0->inBuf);
    VAR_0->inBuf = ((void*)0);
  }
  VAR_0->inBufSize = 0;
}
