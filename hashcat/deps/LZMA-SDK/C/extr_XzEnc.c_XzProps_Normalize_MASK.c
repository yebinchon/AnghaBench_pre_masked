
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_7__ {scalar_t__ reduceSize; } ;
struct TYPE_9__ {scalar_t__ numTotalThreads; scalar_t__ blockSize; int numBlockThreads_Reduced; int numBlockThreads_Max; TYPE_1__ lzmaProps; } ;
struct TYPE_8__ {scalar_t__ blockSize; scalar_t__ reduceSize; int numBlockThreads_Reduced; int numBlockThreads_Max; scalar_t__ numTotalThreads; TYPE_3__ lzma2Props; } ;
typedef scalar_t__ Int64 ;
typedef TYPE_2__ CXzProps ;
typedef TYPE_3__ CLzma2EncProps ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(CXzProps *VAR_3)
{



  if (VAR_3->blockSize == VAR_2)
  {
    VAR_3->lzma2Props.lzmaProps.reduceSize = VAR_3->reduceSize;
    VAR_3->numBlockThreads_Reduced = 1;
    VAR_3->numBlockThreads_Max = 1;
    if (VAR_3->lzma2Props.numTotalThreads <= 0)
      VAR_3->lzma2Props.numTotalThreads = VAR_3->numTotalThreads;
    return;
  }
  else
  {
    CLzma2EncProps *VAR_4 = &VAR_3->lzma2Props;
    if (VAR_3->blockSize == VAR_0)
    {

      VAR_3->lzma2Props.lzmaProps.reduceSize = VAR_3->reduceSize;

      if (VAR_4->blockSize == VAR_1)
      {

        VAR_3->blockSize = VAR_2;
        VAR_3->numBlockThreads_Reduced = 1;
        VAR_3->numBlockThreads_Max = 1;
        if (VAR_3->lzma2Props.numTotalThreads <= 0)
          VAR_3->lzma2Props.numTotalThreads = VAR_3->numTotalThreads;
      }
      else
      {


        CLzma2EncProps VAR_5 = VAR_3->lzma2Props;
        if (VAR_5.numTotalThreads <= 0)
          VAR_5.numTotalThreads = VAR_3->numTotalThreads;

        FUNC_0(&VAR_5);

        VAR_3->blockSize = VAR_5.blockSize;
        VAR_3->numBlockThreads_Reduced = VAR_5.numBlockThreads_Reduced;
        VAR_3->numBlockThreads_Max = VAR_5.numBlockThreads_Max;
        if (VAR_4->blockSize == VAR_0)
          VAR_4->blockSize = VAR_5.blockSize;
        if (VAR_4->lzmaProps.reduceSize > VAR_5.blockSize && VAR_5.blockSize != VAR_1)
          VAR_4->lzmaProps.reduceSize = VAR_5.blockSize;
        VAR_4->numBlockThreads_Reduced = 1;
        VAR_4->numBlockThreads_Max = 1;
        return;
      }
    }
    else
    {



      VAR_3->lzma2Props.lzmaProps.reduceSize = VAR_3->reduceSize;
      {
        UInt64 VAR_6 = VAR_3->reduceSize;
        if (VAR_6 > VAR_3->blockSize || VAR_6 == (UInt64)(Int64)-1)
          VAR_6 = VAR_3->blockSize;
        VAR_4->lzmaProps.reduceSize = VAR_6;
      }
      if (VAR_4->blockSize == VAR_0)
        VAR_4->blockSize = VAR_1;
      else if (VAR_4->blockSize > VAR_3->blockSize && VAR_4->blockSize != VAR_1)
        VAR_4->blockSize = VAR_3->blockSize;

      FUNC_1(VAR_3);
    }
  }
}
