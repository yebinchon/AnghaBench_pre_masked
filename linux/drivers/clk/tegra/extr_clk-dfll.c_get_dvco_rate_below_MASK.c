
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct tegra_dfll {unsigned long* lut_uv; TYPE_1__* soc; } ;
struct dev_pm_opp {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_1 (int ,unsigned long*) ;
 unsigned long FUNC_2 (struct dev_pm_opp*) ;
 int FUNC_3 (struct dev_pm_opp*) ;

__attribute__((used)) static unsigned long FUNC_4(struct tegra_dfll *VAR_0, u8 VAR_1)
{
 struct dev_pm_opp *VAR_2;
 unsigned long VAR_3, VAR_4;
 unsigned long VAR_5, VAR_6;

 VAR_6 = VAR_0->lut_uv[VAR_1];
 for (VAR_3 = 0, VAR_4 = 0; ; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0->soc->dev, &VAR_3);
  if (FUNC_0(VAR_2))
   break;

  VAR_5 = FUNC_2(VAR_2);
  FUNC_3(VAR_2);

  if (VAR_5 && VAR_5 > VAR_6)
   return VAR_4;

  VAR_4 = VAR_3;
 }

 return VAR_4;
}
