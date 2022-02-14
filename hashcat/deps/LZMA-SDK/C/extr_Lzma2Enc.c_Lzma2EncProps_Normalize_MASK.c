
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt64 ;
typedef int UInt32 ;
struct TYPE_5__ {int numThreads; int reduceSize; int dictSize; } ;
struct TYPE_6__ {int numBlockThreads_Max; int numTotalThreads; int blockSize; int numBlockThreads_Reduced; TYPE_1__ lzmaProps; } ;
typedef scalar_t__ Int64 ;
typedef TYPE_1__ CLzmaEncProps ;
typedef TYPE_2__ CLzma2EncProps ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;

void FUNC_1(CLzma2EncProps *VAR_3)
{
  UInt64 VAR_4;
  int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
  {
    CLzmaEncProps VAR_10 = VAR_3->lzmaProps;
    FUNC_0(&VAR_10);
    VAR_6 = VAR_10.numThreads;
  }

  VAR_5 = VAR_3->lzmaProps.numThreads;
  VAR_7 = VAR_3->numBlockThreads_Max;
  VAR_9 = VAR_3->numTotalThreads;

  if (VAR_7 > VAR_2)
    VAR_7 = VAR_2;

  if (VAR_9 <= 0)
  {
    if (VAR_7 <= 0)
      VAR_7 = 1;
    VAR_9 = VAR_6 * VAR_7;
  }
  else if (VAR_7 <= 0)
  {
    VAR_7 = VAR_9 / VAR_6;
    if (VAR_7 == 0)
    {
      VAR_5 = 1;
      VAR_7 = VAR_9;
    }
    if (VAR_7 > VAR_2)
      VAR_7 = VAR_2;
  }
  else if (VAR_5 <= 0)
  {
    VAR_5 = VAR_9 / VAR_7;
    if (VAR_5 == 0)
      VAR_5 = 1;
  }
  else
    VAR_9 = VAR_6 * VAR_7;

  VAR_3->lzmaProps.numThreads = VAR_5;

  VAR_8 = VAR_7;

  VAR_4 = VAR_3->lzmaProps.reduceSize;

  if ( VAR_3->blockSize != VAR_1
      && VAR_3->blockSize != VAR_0
      && (VAR_3->blockSize < VAR_4 || VAR_4 == (UInt64)(Int64)-1))
    VAR_3->lzmaProps.reduceSize = VAR_3->blockSize;

  FUNC_0(&VAR_3->lzmaProps);

  VAR_3->lzmaProps.reduceSize = VAR_4;

  VAR_5 = VAR_3->lzmaProps.numThreads;

  if (VAR_3->blockSize == VAR_1)
  {
    VAR_8 = VAR_7 = 1;
    VAR_9 = VAR_5;
  }
  else if (VAR_3->blockSize == VAR_0 && VAR_7 <= 1)
  {

    VAR_3->blockSize = VAR_1;
  }
  else
  {
    if (VAR_3->blockSize == VAR_0)
    {
      const UInt32 VAR_11 = (UInt32)1 << 20;
      const UInt32 VAR_12 = (UInt32)1 << 28;
      const UInt32 VAR_13 = VAR_3->lzmaProps.dictSize;
      UInt64 VAR_14 = (UInt64)VAR_13 << 2;
      if (VAR_14 < VAR_11) VAR_14 = VAR_11;
      if (VAR_14 > VAR_12) VAR_14 = VAR_12;
      if (VAR_14 < VAR_13) VAR_14 = VAR_13;
      VAR_14 += (VAR_11 - 1);
      VAR_14 &= ~(UInt64)(VAR_11 - 1);
      VAR_3->blockSize = VAR_14;
    }

    if (VAR_7 > 1 && VAR_4 != (UInt64)(Int64)-1)
    {
      UInt64 VAR_15 = VAR_4 / VAR_3->blockSize;
      if (VAR_15 * VAR_3->blockSize != VAR_4)
        VAR_15++;
      if (VAR_15 < (unsigned)VAR_7)
      {
        VAR_8 = (unsigned)VAR_15;
        if (VAR_8 == 0)
          VAR_8 = 1;
        VAR_9 = VAR_5 * VAR_8;
      }
    }
  }

  VAR_3->numBlockThreads_Max = VAR_7;
  VAR_3->numBlockThreads_Reduced = VAR_8;
  VAR_3->numTotalThreads = VAR_9;
}
