
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_5__ {int litProbs; int repLenProbs; int lenProbs; int state; } ;
struct TYPE_6__ {int lclp; int litProbs; int repLenProbs; int lenProbs; int state; TYPE_1__ saveState; } ;
typedef TYPE_1__ CSaveState ;
typedef int CLzmaProb ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_2__ CLzmaEnc ;


 int FUNC_0 (TYPE_2__*,TYPE_1__ const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_2(CLzmaEncHandle VAR_10)
{
  CLzmaEnc *VAR_11 = (CLzmaEnc *)VAR_10;
  const CSaveState *VAR_12 = &VAR_11->saveState;

  VAR_11->state = VAR_12->state;

  VAR_11->lenProbs = VAR_12->lenProbs;
  VAR_11->repLenProbs = VAR_12->repLenProbs;

  FUNC_0(VAR_11, VAR_12, VAR_9);

  FUNC_0(VAR_11, VAR_12, VAR_6);
  FUNC_0(VAR_11, VAR_12, VAR_1);
  FUNC_0(VAR_11, VAR_12, VAR_3);
  FUNC_0(VAR_11, VAR_12, VAR_4);
  FUNC_0(VAR_11, VAR_12, VAR_5);
  FUNC_0(VAR_11, VAR_12, VAR_0);
  FUNC_0(VAR_11, VAR_12, VAR_2);
  FUNC_0(VAR_11, VAR_12, VAR_8);
  FUNC_0(VAR_11, VAR_12, VAR_7);

  FUNC_1(VAR_11->litProbs, VAR_12->litProbs, ((UInt32)0x300 << VAR_11->lclp) * sizeof(CLzmaProb));
}
