
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ crossStart; scalar_t__ crossEnd; unsigned int numStartedThreads; unsigned int numFilledThreads; unsigned int filledThreadStart; int * threads; int * crossBlock; int alloc; } ;
typedef TYPE_1__ CMtDec ;


 int FUNC_0 (int ,int *) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;

int FUNC_2(CMtDec *VAR_1)
{
  if (VAR_1->crossBlock && VAR_1->crossStart == VAR_1->crossEnd)
  {
    FUNC_0(VAR_1->alloc, VAR_1->crossBlock);
    VAR_1->crossBlock = ((void*)0);
  }

  {
    unsigned VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
      if (VAR_2 > VAR_1->numStartedThreads
          || VAR_1->numFilledThreads <=
            (VAR_2 >= VAR_1->filledThreadStart ?
              VAR_2 - VAR_1->filledThreadStart :
              VAR_2 + VAR_1->numStartedThreads - VAR_1->filledThreadStart))
        FUNC_1(&VAR_1->threads[VAR_2]);
  }

  return (VAR_1->numFilledThreads != 0) || (VAR_1->crossStart != VAR_1->crossEnd);
}
