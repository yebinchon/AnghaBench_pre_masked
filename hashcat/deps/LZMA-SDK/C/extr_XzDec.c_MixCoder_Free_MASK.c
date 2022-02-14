
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * buf; int alloc; TYPE_1__* coders; scalar_t__ numCoders; } ;
struct TYPE_4__ {int * p; int (* Free ) (int *,int ) ;} ;
typedef TYPE_1__ IStateCoder ;
typedef TYPE_2__ CMixCoder ;


 int FUNC_0 (int ,int *) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(CMixCoder *VAR_1)
{
  unsigned VAR_2;
  VAR_1->numCoders = 0;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  {
    IStateCoder *VAR_3 = &VAR_1->coders[VAR_2];
    if (VAR_3->p)
    {
      VAR_3->Free(VAR_3->p, VAR_1->alloc);
      VAR_3->p = ((void*)0);
    }
  }
  if (VAR_1->buf)
  {
    FUNC_0(VAR_1->alloc, VAR_1->buf);
    VAR_1->buf = ((void*)0);
  }
}
