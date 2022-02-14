
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UInt32 ;
struct TYPE_5__ {int* reps; size_t lp; size_t lc; int pbMask; int pb; size_t lpMask; scalar_t__ additionalOffset; TYPE_1__* opt; scalar_t__ optCur; scalar_t__ optEnd; int repLenProbs; int lenProbs; void** litProbs; void** posEncoders; void*** posSlotEncoder; void** isRepG2; void** isRepG1; void** isRepG0; void** isRep; void*** isRep0Long; void*** isMatch; void** posAlignEncoder; int rc; scalar_t__ state; } ;
struct TYPE_4__ {int price; } ;
typedef void* CLzmaProb ;
typedef TYPE_2__ CLzmaEnc ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 void* VAR_8 ;

void FUNC_2(CLzmaEnc *VAR_9)
{
  unsigned VAR_10;
  VAR_9->state = 0;
  VAR_9->reps[0] =
  VAR_9->reps[1] =
  VAR_9->reps[2] =
  VAR_9->reps[3] = 1;

  FUNC_1(&VAR_9->rc);

  for (VAR_10 = 0; VAR_10 < (1 << VAR_2); VAR_10++)
    VAR_9->posAlignEncoder[VAR_10] = VAR_8;

  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  {
    unsigned VAR_11;
    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
    {
      VAR_9->isMatch[VAR_10][VAR_11] = VAR_8;
      VAR_9->isRep0Long[VAR_10][VAR_11] = VAR_8;
    }
    VAR_9->isRep[VAR_10] = VAR_8;
    VAR_9->isRepG0[VAR_10] = VAR_8;
    VAR_9->isRepG1[VAR_10] = VAR_8;
    VAR_9->isRepG2[VAR_10] = VAR_8;
  }

  {
    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
    {
      CLzmaProb *VAR_12 = VAR_9->posSlotEncoder[VAR_10];
      unsigned VAR_13;
      for (VAR_13 = 0; VAR_13 < (1 << VAR_6); VAR_13++)
        VAR_12[VAR_13] = VAR_8;
    }
  }
  {
    for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
      VAR_9->posEncoders[VAR_10] = VAR_8;
  }

  {
    UInt32 VAR_14 = (UInt32)0x300 << (VAR_9->lp + VAR_9->lc);
    UInt32 VAR_15;
    CLzmaProb *VAR_16 = VAR_9->litProbs;
    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
      VAR_16[VAR_15] = VAR_8;
  }


  FUNC_0(&VAR_9->lenProbs);
  FUNC_0(&VAR_9->repLenProbs);

  VAR_9->optEnd = 0;
  VAR_9->optCur = 0;

  {
    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
      VAR_9->opt[VAR_10].price = VAR_1;
  }

  VAR_9->additionalOffset = 0;

  VAR_9->pbMask = (1 << VAR_9->pb) - 1;
  VAR_9->lpMask = ((UInt32)0x100 << VAR_9->lp) - ((unsigned)0x100 >> VAR_9->lc);
}
