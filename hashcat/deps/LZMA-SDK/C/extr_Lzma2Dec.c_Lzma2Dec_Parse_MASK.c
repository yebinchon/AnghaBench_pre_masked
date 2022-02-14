
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_6__ {int dicPos; } ;
struct TYPE_7__ {scalar_t__ state; int control; scalar_t__ unpackSize; scalar_t__ packSize; TYPE_1__ decoder; int isExtraMode; } ;
typedef scalar_t__ SizeT ;
typedef int ELzma2ParseStatus ;
typedef TYPE_2__ CLzma2Dec ;
typedef scalar_t__ Byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int VAR_13 ;

ELzma2ParseStatus FUNC_2(CLzma2Dec *VAR_14,
    SizeT VAR_15,
    const Byte *VAR_16, SizeT *VAR_17,
    int VAR_18)
{
  SizeT VAR_19 = *VAR_17;
  *VAR_17 = 0;

  while (VAR_14->state != VAR_6)
  {
    if (VAR_14->state == VAR_7)
      return (ELzma2ParseStatus)VAR_9;

    if (VAR_15 == 0 && !VAR_18)
      return (ELzma2ParseStatus)VAR_11;

    if (VAR_14->state != VAR_4 && VAR_14->state != VAR_5)
    {
      if (*VAR_17 == VAR_19)
        return (ELzma2ParseStatus)VAR_10;
      (*VAR_17)++;

      VAR_14->state = FUNC_1(VAR_14, *VAR_16++);

      if (VAR_14->state == VAR_8)
      {

        if (VAR_14->control == VAR_0 || VAR_14->control >= 0xE0)
          return VAR_1;

      }





      if (VAR_15 == 0 && VAR_14->state != VAR_7)
      {



        return (ELzma2ParseStatus)VAR_11;
      }

      if (VAR_14->state == VAR_4)
        return VAR_2;

      continue;
    }

    if (VAR_15 == 0)
      return (ELzma2ParseStatus)VAR_11;

    {
      SizeT VAR_20 = VAR_19 - *VAR_17;

      if (FUNC_0(VAR_14))
      {
        if (VAR_20 == 0)
          return (ELzma2ParseStatus)VAR_10;
        if (VAR_20 > VAR_14->unpackSize)
          VAR_20 = VAR_14->unpackSize;
        if (VAR_20 > VAR_15)
          VAR_20 = VAR_15;
        VAR_14->decoder.dicPos += VAR_20;
        VAR_16 += VAR_20;
        *VAR_17 += VAR_20;
        VAR_15 -= VAR_20;
        VAR_14->unpackSize -= (UInt32)VAR_20;
        VAR_14->state = (VAR_14->unpackSize == 0) ? VAR_3 : VAR_5;
      }
      else
      {
        VAR_14->isExtraMode = VAR_13;

        if (VAR_20 == 0)
        {
          if (VAR_14->packSize != 0)
            return (ELzma2ParseStatus)VAR_10;
        }
        else if (VAR_14->state == VAR_4)
        {
          VAR_14->state = VAR_5;
          if (*VAR_16 != 0)
          {

            *VAR_17 += 1;
            VAR_14->packSize--;
            break;
          }
        }

        if (VAR_20 > VAR_14->packSize)
          VAR_20 = (SizeT)VAR_14->packSize;

        VAR_16 += VAR_20;
        *VAR_17 += VAR_20;
        VAR_14->packSize -= (UInt32)VAR_20;

        if (VAR_14->packSize == 0)
        {
          SizeT VAR_21 = VAR_15;
          if (VAR_21 > VAR_14->unpackSize)
            VAR_21 = VAR_14->unpackSize;
          VAR_14->decoder.dicPos += VAR_21;
          VAR_14->unpackSize -= (UInt32)VAR_21;
          VAR_15 -= VAR_21;
          if (VAR_14->unpackSize == 0)
            VAR_14->state = VAR_3;
        }
      }
    }
  }

  VAR_14->state = VAR_6;
  return (ELzma2ParseStatus)VAR_12;
}
