
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_dfll {int lut_bottom; int lut_size; int* lut_uv; TYPE_2__* soc; } ;
struct dev_pm_opp {int dummy; } ;
struct TYPE_3__ {int step_uv; } ;
struct TYPE_4__ {TYPE_1__ alignment; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (struct dev_pm_opp*) ;
 int FUNC_4 (struct dev_pm_opp*) ;

__attribute__((used)) static int FUNC_5(struct tegra_dfll *VAR_1, unsigned long VAR_2)
{
 struct dev_pm_opp *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_1->soc->dev, &VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_5 = FUNC_3(VAR_3) / VAR_1->soc->alignment.step_uv;
 FUNC_4(VAR_3);

 for (VAR_4 = VAR_1->lut_bottom; VAR_4 < VAR_1->lut_size; VAR_4++) {
  if ((VAR_1->lut_uv[VAR_4] / VAR_1->soc->alignment.step_uv) >= VAR_5)
   return VAR_4;
 }

 return -VAR_0;
}
