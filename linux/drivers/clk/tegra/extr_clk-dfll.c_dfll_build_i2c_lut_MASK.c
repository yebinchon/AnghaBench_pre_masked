
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_dfll {int* lut; int lut_size; int vdd_reg; int * lut_uv; TYPE_2__* soc; int dev; int dvco_rate_min; scalar_t__ lut_bottom; } ;
struct dev_pm_opp {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cvb; int dev; } ;
struct TYPE_3__ {int min_millivolts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 struct dev_pm_opp* FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (struct dev_pm_opp*) ;
 unsigned long FUNC_4 (struct dev_pm_opp*) ;
 int FUNC_5 (struct dev_pm_opp*) ;
 int FUNC_6 (struct tegra_dfll*,unsigned long) ;
 int FUNC_7 (struct tegra_dfll*,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct tegra_dfll *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;
 int VAR_7 = -VAR_0;
 int VAR_8, VAR_9, VAR_10;

 VAR_5 = VAR_2->soc->cvb->min_millivolts * 1000;
 VAR_10 = FUNC_6(VAR_2, VAR_5);
 if (VAR_10 < 0)
  goto out;
 VAR_2->lut[0] = VAR_10;
 VAR_2->lut_bottom = 0;

 for (VAR_8 = 1, VAR_4 = 0; ; VAR_4++) {
  struct dev_pm_opp *VAR_11;

  VAR_11 = FUNC_2(VAR_2->soc->dev, &VAR_4);
  if (FUNC_0(VAR_11))
   break;
  VAR_6 = FUNC_4(VAR_11);

  if (VAR_6 <= VAR_2->soc->cvb->min_millivolts * 1000)
   VAR_2->dvco_rate_min = FUNC_3(VAR_11);

  FUNC_5(VAR_11);

  for (;;) {
   VAR_5 += FUNC_8(1UL, (VAR_3 - VAR_5) / (VAR_1 - VAR_8));
   if (VAR_5 >= VAR_6)
    break;

   VAR_9 = FUNC_7(VAR_2, VAR_5);
   if (VAR_9 < 0)
    goto out;
   if (VAR_9 != VAR_2->lut[VAR_8 - 1])
    VAR_2->lut[VAR_8++] = VAR_9;
  }

  VAR_5 = (VAR_8 == VAR_1 - 1) ? VAR_3 : VAR_6;
  VAR_9 = FUNC_6(VAR_2, VAR_5);
  if (VAR_9 < 0)
   goto out;
  if (VAR_9 != VAR_2->lut[VAR_8 - 1])
   VAR_2->lut[VAR_8++] = VAR_9;

  if (VAR_5 >= VAR_3)
   break;
 }
 VAR_2->lut_size = VAR_8;

 if (!VAR_2->dvco_rate_min)
  FUNC_1(VAR_2->dev, "no opp above DFLL minimum voltage %d mV\n",
   VAR_2->soc->cvb->min_millivolts);
 else {
  VAR_7 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_2->lut_size; VAR_8++)
   VAR_2->lut_uv[VAR_8] =
    FUNC_9(VAR_2->vdd_reg,
             VAR_2->lut[VAR_8]);
 }

out:
 return VAR_7;
}
