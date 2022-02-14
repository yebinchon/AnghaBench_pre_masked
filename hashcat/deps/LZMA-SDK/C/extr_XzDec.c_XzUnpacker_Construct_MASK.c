
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ outBufSize; int * outBuf; int decoder; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CXzUnpacker ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(CXzUnpacker *VAR_0, ISzAllocPtr VAR_1)
{
  FUNC_0(&VAR_0->decoder, VAR_1);
  VAR_0->outBuf = ((void*)0);
  VAR_0->outBufSize = 0;
  FUNC_1(VAR_0);
}
