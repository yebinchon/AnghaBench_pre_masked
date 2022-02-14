
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_6__ {scalar_t__ remainLen; scalar_t__ tempBufSize; scalar_t__* tempBuf; int code; int range; int* probs; int* reps; scalar_t__ dicPos; scalar_t__ const* buf; scalar_t__ state; int prop; } ;
typedef scalar_t__ SizeT ;
typedef int SRes ;
typedef int ELzmaStatus ;
typedef scalar_t__ ELzmaFinishMode ;
typedef int CLzmaProb ;
typedef TYPE_1__ CLzmaDec ;
typedef scalar_t__ Byte ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__ const*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__ const*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (scalar_t__*,scalar_t__ const*,scalar_t__) ;

SRes FUNC_5(CLzmaDec *VAR_15, SizeT VAR_16, const Byte *VAR_17, SizeT *VAR_18,
    ELzmaFinishMode VAR_19, ELzmaStatus *VAR_20)
{
  SizeT VAR_21 = *VAR_18;
  (*VAR_18) = 0;

  *VAR_20 = VAR_8;

  if (VAR_15->remainLen > VAR_14)
  {
    for (; VAR_21 > 0 && VAR_15->tempBufSize < VAR_9; (*VAR_18)++, VAR_21--)
      VAR_15->tempBuf[VAR_15->tempBufSize++] = *VAR_17++;
    if (VAR_15->tempBufSize != 0 && VAR_15->tempBuf[0] != 0)
      return VAR_10;
    if (VAR_15->tempBufSize < VAR_9)
    {
      *VAR_20 = VAR_6;
      return VAR_12;
    }
    VAR_15->code =
        ((UInt32)VAR_15->tempBuf[1] << 24)
      | ((UInt32)VAR_15->tempBuf[2] << 16)
      | ((UInt32)VAR_15->tempBuf[3] << 8)
      | ((UInt32)VAR_15->tempBuf[4]);
    VAR_15->range = 0xFFFFFFFF;
    VAR_15->tempBufSize = 0;

    if (VAR_15->remainLen > VAR_14 + 1)
    {
      SizeT VAR_22 = FUNC_3(&VAR_15->prop);
      SizeT VAR_23;
      CLzmaProb *VAR_24 = VAR_15->probs;
      for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
        VAR_24[VAR_23] = VAR_13 >> 1;
      VAR_15->reps[0] = VAR_15->reps[1] = VAR_15->reps[2] = VAR_15->reps[3] = 1;
      VAR_15->state = 0;
    }

    VAR_15->remainLen = 0;
  }

  FUNC_2(VAR_15, VAR_16);

  while (VAR_15->remainLen != VAR_14)
  {
      int VAR_25 = 0;

      if (VAR_15->dicPos >= VAR_16)
      {
        if (VAR_15->remainLen == 0 && VAR_15->code == 0)
        {
          *VAR_20 = VAR_5;
          return VAR_12;
        }
        if (VAR_19 == VAR_2)
        {
          *VAR_20 = VAR_7;
          return VAR_12;
        }
        if (VAR_15->remainLen != 0)
        {
          *VAR_20 = VAR_7;
          return VAR_10;
        }
        VAR_25 = 1;
      }

      if (VAR_15->tempBufSize == 0)
      {
        SizeT VAR_26;
        const Byte *VAR_27;
        if (VAR_21 < VAR_3 || VAR_25)
        {
          int VAR_28 = FUNC_1(VAR_15, VAR_17, VAR_21);
          if (VAR_28 == VAR_0)
          {
            FUNC_4(VAR_15->tempBuf, VAR_17, VAR_21);
            VAR_15->tempBufSize = (unsigned)VAR_21;
            (*VAR_18) += VAR_21;
            *VAR_20 = VAR_6;
            return VAR_12;
          }
          if (VAR_25 && VAR_28 != VAR_1)
          {
            *VAR_20 = VAR_7;
            return VAR_10;
          }
          VAR_27 = VAR_17;
        }
        else
          VAR_27 = VAR_17 + VAR_21 - VAR_3;
        VAR_15->buf = VAR_17;
        if (FUNC_0(VAR_15, VAR_16, VAR_27) != 0)
          return VAR_10;
        VAR_26 = (SizeT)(VAR_15->buf - VAR_17);
        (*VAR_18) += VAR_26;
        VAR_17 += VAR_26;
        VAR_21 -= VAR_26;
      }
      else
      {
        unsigned VAR_29 = VAR_15->tempBufSize, VAR_30 = 0;
        while (VAR_29 < VAR_3 && VAR_30 < VAR_21)
          VAR_15->tempBuf[VAR_29++] = VAR_17[VAR_30++];
        VAR_15->tempBufSize = VAR_29;
        if (VAR_29 < VAR_3 || VAR_25)
        {
          int VAR_31 = FUNC_1(VAR_15, VAR_15->tempBuf, (SizeT)VAR_29);
          if (VAR_31 == VAR_0)
          {
            (*VAR_18) += (SizeT)VAR_30;
            *VAR_20 = VAR_6;
            return VAR_12;
          }
          if (VAR_25 && VAR_31 != VAR_1)
          {
            *VAR_20 = VAR_7;
            return VAR_10;
          }
        }
        VAR_15->buf = VAR_15->tempBuf;
        if (FUNC_0(VAR_15, VAR_16, VAR_15->buf) != 0)
          return VAR_10;

        {
          unsigned VAR_32 = (unsigned)(VAR_15->buf - VAR_15->tempBuf);
          if (VAR_29 < VAR_32)
            return VAR_11;
          VAR_29 -= VAR_32;
          if (VAR_30 < VAR_29)
            return VAR_11;
          VAR_30 -= VAR_29;
        }
        (*VAR_18) += (SizeT)VAR_30;
        VAR_17 += VAR_30;
        VAR_21 -= (SizeT)VAR_30;
        VAR_15->tempBufSize = 0;
      }
  }

  if (VAR_15->code != 0)
    return VAR_10;
  *VAR_20 = VAR_4;
  return VAR_12;
}
