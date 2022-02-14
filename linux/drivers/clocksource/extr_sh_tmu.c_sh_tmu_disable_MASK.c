
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_tmu_channel {scalar_t__ enable_count; TYPE_2__* tmu; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sh_tmu_channel*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sh_tmu_channel *VAR_0)
{
 if (FUNC_0(VAR_0->enable_count == 0))
  return;

 if (--VAR_0->enable_count > 0)
  return;

 FUNC_1(VAR_0);

 FUNC_2(&VAR_0->tmu->pdev->dev, 0);
 FUNC_3(&VAR_0->tmu->pdev->dev);
}
