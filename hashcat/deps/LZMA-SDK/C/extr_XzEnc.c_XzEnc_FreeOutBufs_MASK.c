
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ outBufSize; int ** outBufs; int alloc; } ;
typedef TYPE_1__ CXzEnc ;


 int FUNC_0 (int ,int *) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_1(CXzEnc *VAR_1)
{
  unsigned VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    if (VAR_1->outBufs[VAR_2])
    {
      FUNC_0(VAR_1->alloc, VAR_1->outBufs[VAR_2]);
      VAR_1->outBufs[VAR_2] = ((void*)0);
    }
  VAR_1->outBufSize = 0;
}
