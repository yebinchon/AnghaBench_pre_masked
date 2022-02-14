
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_3__ {int numBlockThreads_Reduced; int numBlockThreads_Max; int numTotalThreads; int lzma2Props; int filterProps; scalar_t__ forceWriteSizesInHeader; scalar_t__ reduceSize; int blockSize; int checkId; } ;
typedef scalar_t__ Int64 ;
typedef TYPE_1__ CXzProps ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

void FUNC_2(CXzProps *VAR_2)
{
  VAR_2->checkId = VAR_0;
  VAR_2->blockSize = VAR_1;
  VAR_2->numBlockThreads_Reduced = -1;
  VAR_2->numBlockThreads_Max = -1;
  VAR_2->numTotalThreads = -1;
  VAR_2->reduceSize = (UInt64)(Int64)-1;
  VAR_2->forceWriteSizesInHeader = 0;


  FUNC_1(&VAR_2->filterProps);
  FUNC_0(&VAR_2->lzma2Props);
}
