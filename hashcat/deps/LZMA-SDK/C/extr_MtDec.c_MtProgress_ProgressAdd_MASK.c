
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_3__ {scalar_t__ res; int cs; int totalOutSize; int totalInSize; scalar_t__ progress; } ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ CMtProgress ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

SRes FUNC_3(CMtProgress *VAR_2, UInt64 VAR_3, UInt64 VAR_4)
{
  SRes VAR_5;
  FUNC_0(&VAR_2->cs);

  VAR_2->totalInSize += VAR_3;
  VAR_2->totalOutSize += VAR_4;
  if (VAR_2->res == VAR_1 && VAR_2->progress)
    if (FUNC_2(VAR_2->progress, VAR_2->totalInSize, VAR_2->totalOutSize) != VAR_1)
      VAR_2->res = VAR_0;
  VAR_5 = VAR_2->res;

  FUNC_1(&VAR_2->cs);
  return VAR_5;
}
