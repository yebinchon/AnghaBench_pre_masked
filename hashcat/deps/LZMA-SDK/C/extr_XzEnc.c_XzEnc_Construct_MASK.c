
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ outBufSize; int ** outBufs; int mtCoder_WasConstructed; int * lzmaf_Items; int xzIndex; } ;
typedef TYPE_1__ CXzEnc ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CXzEnc *VAR_3)
{
  unsigned VAR_4;

  FUNC_1(&VAR_3->xzIndex);

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    FUNC_0(&VAR_3->lzmaf_Items[VAR_4]);


  VAR_3->mtCoder_WasConstructed = VAR_0;
  {
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
      VAR_3->outBufs[VAR_4] = ((void*)0);
    VAR_3->outBufSize = 0;
  }

}
