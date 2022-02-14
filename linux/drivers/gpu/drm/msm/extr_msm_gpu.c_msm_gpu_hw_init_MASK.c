
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_gpu {int needs_hw_init; int irq; TYPE_2__* funcs; TYPE_1__* dev; } ;
struct TYPE_4__ {int (* hw_init ) (struct msm_gpu*) ;} ;
struct TYPE_3__ {int struct_mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct msm_gpu*) ;

int FUNC_5(struct msm_gpu *VAR_0)
{
 int VAR_1;

 FUNC_0(!FUNC_3(&VAR_0->dev->struct_mutex));

 if (!VAR_0->needs_hw_init)
  return 0;

 FUNC_1(VAR_0->irq);
 VAR_1 = VAR_0->funcs->hw_init(VAR_0);
 if (!VAR_1)
  VAR_0->needs_hw_init = 0;
 FUNC_2(VAR_0->irq);

 return VAR_1;
}
