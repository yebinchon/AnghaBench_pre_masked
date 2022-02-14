
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int UInt64 ;
struct TYPE_6__ {unsigned int reduceSize; } ;
struct TYPE_8__ {int numTotalThreads; TYPE_1__ lzmaProps; } ;
struct TYPE_7__ {int numTotalThreads; int numBlockThreads_Max; unsigned int reduceSize; unsigned int blockSize; int numBlockThreads_Reduced; TYPE_3__ lzma2Props; } ;
typedef scalar_t__ Int64 ;
typedef TYPE_2__ CXzProps ;
typedef TYPE_3__ CLzma2EncProps ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(CXzProps *VAR_1)
{
  UInt64 VAR_2;
  int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
  {
    CLzma2EncProps VAR_8 = VAR_1->lzma2Props;
    if (VAR_8.numTotalThreads <= 0)
      VAR_8.numTotalThreads = VAR_1->numTotalThreads;
    FUNC_0(&VAR_8);
    VAR_4 = VAR_8.numTotalThreads;
  }

  VAR_3 = VAR_1->lzma2Props.numTotalThreads;
  VAR_5 = VAR_1->numBlockThreads_Max;
  VAR_7 = VAR_1->numTotalThreads;

  if (VAR_5 > VAR_0)
    VAR_5 = VAR_0;

  if (VAR_7 <= 0)
  {
    if (VAR_5 <= 0)
      VAR_5 = 1;
    VAR_7 = VAR_4 * VAR_5;
  }
  else if (VAR_5 <= 0)
  {
    VAR_5 = VAR_7 / VAR_4;
    if (VAR_5 == 0)
    {
      VAR_3 = 1;
      VAR_5 = VAR_7;
    }
    if (VAR_5 > VAR_0)
      VAR_5 = VAR_0;
  }
  else if (VAR_3 <= 0)
  {
    VAR_3 = VAR_7 / VAR_5;
    if (VAR_3 == 0)
      VAR_3 = 1;
  }
  else
    VAR_7 = VAR_4 * VAR_5;

  VAR_1->lzma2Props.numTotalThreads = VAR_3;

  VAR_6 = VAR_5;

  VAR_2 = VAR_1->reduceSize;

  if ((VAR_1->blockSize < VAR_2 || VAR_2 == (UInt64)(Int64)-1))
    VAR_1->lzma2Props.lzmaProps.reduceSize = VAR_1->blockSize;

  FUNC_0(&VAR_1->lzma2Props);

  VAR_3 = VAR_1->lzma2Props.numTotalThreads;

  {
    if (VAR_5 > 1 && VAR_2 != (UInt64)(Int64)-1)
    {
      UInt64 VAR_9 = VAR_2 / VAR_1->blockSize;
      if (VAR_9 * VAR_1->blockSize != VAR_2)
        VAR_9++;
      if (VAR_9 < (unsigned)VAR_5)
      {
        VAR_6 = (unsigned)VAR_9;
        if (VAR_6 == 0)
          VAR_6 = 1;
        VAR_7 = VAR_3 * VAR_6;
      }
    }
  }

  VAR_1->numBlockThreads_Max = VAR_5;
  VAR_1->numBlockThreads_Reduced = VAR_6;
  VAR_1->numTotalThreads = VAR_7;
}
