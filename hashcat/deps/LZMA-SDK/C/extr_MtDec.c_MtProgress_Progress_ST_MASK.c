
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ res; int totalOutSize; int totalInSize; scalar_t__ progress; } ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ CMtProgress ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

SRes FUNC_1(CMtProgress *VAR_2)
{
  if (VAR_2->res == VAR_1 && VAR_2->progress)
    if (FUNC_0(VAR_2->progress, VAR_2->totalInSize, VAR_2->totalOutSize) != VAR_1)
      VAR_2->res = VAR_0;
  return VAR_2->res;
}
