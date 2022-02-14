
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p; int (* Free ) (int *,int ) ;} ;
struct TYPE_5__ {int * buf; TYPE_1__ StateCoder; } ;
typedef int ISzAllocPtr ;
typedef TYPE_2__ CSeqInFilter ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(CSeqInFilter *VAR_0, ISzAllocPtr VAR_1)
{
  if (VAR_0->StateCoder.p)
  {
    VAR_0->StateCoder.Free(VAR_0->StateCoder.p, VAR_1);
    VAR_0->StateCoder.p = ((void*)0);
  }
  if (VAR_0->buf)
  {
    FUNC_0(VAR_1, VAR_0->buf);
    VAR_0->buf = ((void*)0);
  }
}
