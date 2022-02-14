
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ totalOutSize; scalar_t__ totalInSize; int res; int * progress; } ;
typedef int ICompressProgress ;
typedef TYPE_1__ CMtProgress ;


 int VAR_0 ;

void FUNC_0(CMtProgress *VAR_1, ICompressProgress *VAR_2)
{
  VAR_1->progress = VAR_2;
  VAR_1->res = VAR_0;
  VAR_1->totalInSize = 0;
  VAR_1->totalOutSize = 0;
}
