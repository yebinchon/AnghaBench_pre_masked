
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_4__ {int cs; int res; } ;
struct TYPE_5__ {scalar_t__ interruptIndex; TYPE_1__ mtProgress; scalar_t__ needInterrupt; } ;
typedef int SRes ;
typedef TYPE_2__ CMtDec ;
typedef int BoolInt ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static SRes FUNC_2(CMtDec *VAR_0, UInt64 VAR_1, BoolInt *VAR_2)
{
  SRes VAR_3;
  FUNC_0(&VAR_0->mtProgress.cs);
  *VAR_2 = (VAR_0->needInterrupt && VAR_1 > VAR_0->interruptIndex);
  VAR_3 = VAR_0->mtProgress.res;
  FUNC_1(&VAR_0->mtProgress.cs);
  return VAR_3;
}
