
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* next; } ;
struct TYPE_6__ {TYPE_1__* mtDec; int * inBuf; } ;
struct TYPE_5__ {int alloc; } ;
typedef TYPE_2__ CMtDecThread ;
typedef TYPE_3__ CMtDecBufLink ;


 int FUNC_0 (int ,void*) ;

void FUNC_1(CMtDecThread *VAR_0)
{
  if (VAR_0->inBuf)
  {
    void *VAR_1 = VAR_0->inBuf;
    VAR_0->inBuf = ((void*)0);
    do
    {
      void *VAR_2 = ((CMtDecBufLink *)VAR_1)->next;
      FUNC_0(VAR_0->mtDec->alloc, VAR_1);
      VAR_1 = VAR_2;
    }
    while (VAR_1);
  }
}
