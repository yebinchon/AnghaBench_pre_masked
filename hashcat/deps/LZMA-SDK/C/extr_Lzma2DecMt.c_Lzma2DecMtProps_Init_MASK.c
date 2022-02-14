
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inBufSize_ST; int outStep_ST; int numThreads; int inBufSize_MT; int outBlockMax; int inBlockMax; } ;
typedef TYPE_1__ CLzma2DecMtProps ;


 int VAR_0 ;

void FUNC_0(CLzma2DecMtProps *VAR_1)
{
  VAR_1->inBufSize_ST = 1 << 20;
  VAR_1->outStep_ST = 1 << 20;


  VAR_1->numThreads = 1;
  VAR_1->inBufSize_MT = 1 << 18;
  VAR_1->outBlockMax = VAR_0;
  VAR_1->inBlockMax = VAR_1->outBlockMax + VAR_1->outBlockMax / 16;

}
