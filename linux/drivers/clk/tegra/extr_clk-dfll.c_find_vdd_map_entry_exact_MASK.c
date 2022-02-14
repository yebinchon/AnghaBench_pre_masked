
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_dfll {scalar_t__ pmu_if; int dev; TYPE_1__* soc; int vdd_reg; } ;
struct TYPE_4__ {int step_uv; } ;
struct TYPE_3__ {TYPE_2__ alignment; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct tegra_dfll *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6,VAR_7, VAR_8;

 if (FUNC_0(VAR_2->pmu_if == VAR_1))
  return -VAR_0;

 VAR_8 = VAR_3 / VAR_2->soc->alignment.step_uv;
 VAR_5 = FUNC_2(VAR_2->vdd_reg);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_6 = FUNC_3(VAR_2->vdd_reg, VAR_4);
  if (VAR_6 < 0)
   break;

  VAR_7 = VAR_6 / VAR_2->soc->alignment.step_uv;

  if (VAR_8 == VAR_7)
   return VAR_4;
 }

 FUNC_1(VAR_2->dev, "no voltage map entry for %d uV\n", VAR_3);
 return -VAR_0;
}
