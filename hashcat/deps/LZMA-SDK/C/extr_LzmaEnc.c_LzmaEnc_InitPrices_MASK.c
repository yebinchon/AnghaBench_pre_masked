
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tableSize; } ;
struct TYPE_6__ {int pb; int ProbPrices; int repLenProbs; TYPE_3__ repLenEnc; int lenProbs; TYPE_3__ lenEnc; int repLenEncCounter; scalar_t__ numFastBytes; int fastMode; } ;
typedef TYPE_1__ CLzmaEnc ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*,int,int *,int ) ;
 int VAR_1 ;

void FUNC_3(CLzmaEnc *VAR_2)
{
  if (!VAR_2->fastMode)
  {
    FUNC_1(VAR_2);
    FUNC_0(VAR_2);
  }

  VAR_2->lenEnc.tableSize =
  VAR_2->repLenEnc.tableSize =
      VAR_2->numFastBytes + 1 - VAR_0;

  VAR_2->repLenEncCounter = VAR_1;

  FUNC_2(&VAR_2->lenEnc, 1 << VAR_2->pb, &VAR_2->lenProbs, VAR_2->ProbPrices);
  FUNC_2(&VAR_2->repLenEnc, 1 << VAR_2->pb, &VAR_2->repLenProbs, VAR_2->ProbPrices);
}
