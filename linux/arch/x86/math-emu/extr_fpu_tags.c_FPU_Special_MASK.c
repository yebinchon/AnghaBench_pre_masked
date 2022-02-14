
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sigh; scalar_t__ sigl; } ;
typedef TYPE_1__ FPU_REG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(FPU_REG const *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_6);

 if (VAR_7 == VAR_0 + VAR_2)
  return VAR_3;
 else if (VAR_7 != VAR_0 + VAR_1)
  return VAR_5;
 else if ((VAR_6->sigh == 0x80000000) && (VAR_6->sigl == 0))
  return VAR_4;
 return VAR_5;
}
