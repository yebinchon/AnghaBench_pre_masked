
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_tmu_channel {scalar_t__ enable_count; TYPE_2__* tmu; int cs_enabled; } ;
struct clocksource {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct sh_tmu_channel*) ;
 struct sh_tmu_channel* FUNC_1 (struct clocksource*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct clocksource *VAR_0)
{
 struct sh_tmu_channel *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->cs_enabled)
  return;

 if (--VAR_1->enable_count == 0) {
  FUNC_0(VAR_1);
  FUNC_2(&VAR_1->tmu->pdev->dev);
 }
}
