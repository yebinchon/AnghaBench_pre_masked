
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_9__ {scalar_t__ dicPos; } ;
struct TYPE_8__ {scalar_t__ state; scalar_t__ unpackSize; int control; scalar_t__ packSize; TYPE_2__ decoder; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef scalar_t__ ELzmaStatus ;
typedef scalar_t__ ELzmaFinishMode ;
typedef TYPE_1__ CLzma2Dec ;
typedef int Byte ;
typedef int BoolInt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,int const*,scalar_t__*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*,int const*,scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

SRes FUNC_5(CLzma2Dec *VAR_16, SizeT VAR_17,
    const Byte *VAR_18, SizeT *VAR_19, ELzmaFinishMode VAR_20, ELzmaStatus *VAR_21)
{
  SizeT VAR_22 = *VAR_19;
  *VAR_19 = 0;
  *VAR_21 = VAR_13;

  while (VAR_16->state != VAR_5)
  {
    SizeT VAR_23;

    if (VAR_16->state == VAR_6)
    {
      *VAR_21 = VAR_9;
      return VAR_15;
    }

    VAR_23 = VAR_16->decoder.dicPos;

    if (VAR_23 == VAR_17 && VAR_20 == VAR_7)
    {
      *VAR_21 = VAR_12;
      return VAR_15;
    }

    if (VAR_16->state != VAR_3 && VAR_16->state != VAR_4)
    {
      if (*VAR_19 == VAR_22)
      {
        *VAR_21 = VAR_11;
        return VAR_15;
      }
      (*VAR_19)++;
      VAR_16->state = FUNC_1(VAR_16, *VAR_18++);
      if (VAR_23 == VAR_17 && VAR_16->state != VAR_6)
        break;
      continue;
    }

    {
      SizeT VAR_24 = VAR_22 - *VAR_19;
      SizeT VAR_25 = VAR_17 - VAR_23;
      ELzmaFinishMode VAR_26 = VAR_7;

      if (VAR_25 >= VAR_16->unpackSize)
      {
        VAR_25 = (SizeT)VAR_16->unpackSize;
        VAR_26 = VAR_8;
      }

      if (FUNC_0(VAR_16))
      {
        if (VAR_24 == 0)
        {
          *VAR_21 = VAR_11;
          return VAR_15;
        }

        if (VAR_16->state == VAR_3)
        {
          BoolInt VAR_27 = (VAR_16->control == VAR_1);
          FUNC_3(&VAR_16->decoder, VAR_27, VAR_0);
        }

        if (VAR_24 > VAR_25)
          VAR_24 = VAR_25;
        if (VAR_24 == 0)
          break;

        FUNC_4(&VAR_16->decoder, VAR_18, VAR_24);

        VAR_18 += VAR_24;
        *VAR_19 += VAR_24;
        VAR_16->unpackSize -= (UInt32)VAR_24;
        VAR_16->state = (VAR_16->unpackSize == 0) ? VAR_2 : VAR_4;
      }
      else
      {
        SRes VAR_28;

        if (VAR_16->state == VAR_3)
        {
          BoolInt VAR_29 = (VAR_16->control >= 0xE0);
          BoolInt VAR_30 = (VAR_16->control >= 0xA0);
          FUNC_3(&VAR_16->decoder, VAR_29, VAR_30);
          VAR_16->state = VAR_4;
        }

        if (VAR_24 > VAR_16->packSize)
          VAR_24 = (SizeT)VAR_16->packSize;

        VAR_28 = FUNC_2(&VAR_16->decoder, VAR_23 + VAR_25, VAR_18, &VAR_24, VAR_26, VAR_21);

        VAR_18 += VAR_24;
        *VAR_19 += VAR_24;
        VAR_16->packSize -= (UInt32)VAR_24;
        VAR_25 = VAR_16->decoder.dicPos - VAR_23;
        VAR_16->unpackSize -= (UInt32)VAR_25;

        if (VAR_28 != 0)
          break;

        if (*VAR_21 == VAR_11)
        {
          if (VAR_16->packSize == 0)
            break;
          return VAR_15;
        }

        if (VAR_24 == 0 && VAR_25 == 0)
        {
          if (*VAR_21 != VAR_10
              || VAR_16->unpackSize != 0
              || VAR_16->packSize != 0)
            break;
          VAR_16->state = VAR_2;
        }

        *VAR_21 = VAR_13;
      }
    }
  }

  *VAR_21 = VAR_13;
  VAR_16->state = VAR_5;
  return VAR_14;
}
