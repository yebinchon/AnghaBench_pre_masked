
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_devfreq {int clock; int reset; int rate_change_nb; int emc_clock; int devfreq; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct tegra_devfreq* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct tegra_devfreq *VAR_2 = FUNC_5(VAR_1);

 FUNC_3(VAR_2->devfreq);
 FUNC_4(&VAR_0);

 FUNC_1(VAR_2->emc_clock, &VAR_2->rate_change_nb);
 FUNC_2(&VAR_1->dev);

 FUNC_6(VAR_2->reset);
 FUNC_0(VAR_2->clock);

 return 0;
}
