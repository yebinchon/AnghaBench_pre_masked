
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * litProbs; } ;
struct TYPE_5__ {TYPE_1__ saveState; int * litProbs; } ;
typedef int ISzAllocPtr ;
typedef TYPE_2__ CLzmaEnc ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(CLzmaEnc *VAR_0, ISzAllocPtr VAR_1)
{
  FUNC_0(VAR_1, VAR_0->litProbs);
  FUNC_0(VAR_1, VAR_0->saveState.litProbs);
  VAR_0->litProbs = ((void*)0);
  VAR_0->saveState.litProbs = ((void*)0);
}
