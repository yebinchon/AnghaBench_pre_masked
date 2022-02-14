
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_4__ {scalar_t__ res; int cs; int totalOutSize; int totalInSize; scalar_t__ progress; } ;
struct TYPE_5__ {scalar_t__ interruptIndex; TYPE_1__ mtProgress; scalar_t__ needInterrupt; } ;
typedef scalar_t__ SRes ;
typedef TYPE_2__ CMtDec ;
typedef int BoolInt ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static SRes FUNC_3(CMtDec *VAR_2, UInt64 VAR_3, UInt64 VAR_4, UInt64 VAR_5, BoolInt *VAR_6)
{
  SRes VAR_7;
  FUNC_0(&VAR_2->mtProgress.cs);

  VAR_2->mtProgress.totalInSize += VAR_3;
  VAR_2->mtProgress.totalOutSize += VAR_4;
  if (VAR_2->mtProgress.res == VAR_1 && VAR_2->mtProgress.progress)
    if (FUNC_2(VAR_2->mtProgress.progress, VAR_2->mtProgress.totalInSize, VAR_2->mtProgress.totalOutSize) != VAR_1)
      VAR_2->mtProgress.res = VAR_0;

  *VAR_6 = (VAR_2->needInterrupt && VAR_5 > VAR_2->interruptIndex);
  VAR_7 = VAR_2->mtProgress.res;

  FUNC_1(&VAR_2->mtProgress.cs);

  return VAR_7;
}
