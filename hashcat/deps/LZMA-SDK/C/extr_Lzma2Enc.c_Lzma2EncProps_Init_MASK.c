
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numBlockThreads_Reduced; int numBlockThreads_Max; int numTotalThreads; int blockSize; int lzmaProps; } ;
typedef TYPE_1__ CLzma2EncProps ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(CLzma2EncProps *VAR_1)
{
  FUNC_0(&VAR_1->lzmaProps);
  VAR_1->blockSize = VAR_0;
  VAR_1->numBlockThreads_Reduced = -1;
  VAR_1->numBlockThreads_Max = -1;
  VAR_1->numTotalThreads = -1;
}
