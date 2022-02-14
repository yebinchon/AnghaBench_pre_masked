
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_tmu_channel {TYPE_2__* tmu; int enable_count; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct sh_tmu_channel*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct sh_tmu_channel *VAR_0)
{
 if (VAR_0->enable_count++ > 0)
  return 0;

 FUNC_2(&VAR_0->tmu->pdev->dev);
 FUNC_1(&VAR_0->tmu->pdev->dev, 1);

 return FUNC_0(VAR_0);
}
