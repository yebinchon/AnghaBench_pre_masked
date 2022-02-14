
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* coders; int * outBuf; scalar_t__ outBufSize; scalar_t__ numCoders; int * buf; int alloc; } ;
struct TYPE_4__ {int * p; } ;
typedef int ISzAllocPtr ;
typedef TYPE_2__ CMixCoder ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(CMixCoder *VAR_1, ISzAllocPtr VAR_2)
{
  unsigned VAR_3;
  VAR_1->alloc = VAR_2;
  VAR_1->buf = ((void*)0);
  VAR_1->numCoders = 0;

  VAR_1->outBufSize = 0;
  VAR_1->outBuf = ((void*)0);


  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    VAR_1->coders[VAR_3].p = ((void*)0);
}
