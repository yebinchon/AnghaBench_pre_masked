
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {TYPE_1__* funcs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* irq ) (struct msm_gpu*) ;} ;


 int FUNC_0 (struct msm_gpu*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_0, void *VAR_1)
{
 struct msm_gpu *VAR_2 = VAR_1;
 return VAR_2->funcs->irq(VAR_2);
}
