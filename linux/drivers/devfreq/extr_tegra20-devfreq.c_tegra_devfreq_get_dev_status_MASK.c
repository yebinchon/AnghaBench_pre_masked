
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_devfreq {scalar_t__ regs; int emc_clock; } ;
struct device {int dummy; } ;
struct devfreq_dev_status {int busy_time; int total_time; int current_frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 struct tegra_devfreq* FUNC_1 (struct device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5,
     struct devfreq_dev_status *VAR_6)
{
 struct tegra_devfreq *VAR_7 = FUNC_1(VAR_5);
 VAR_6->busy_time = FUNC_2(VAR_7->regs + VAR_4);
 VAR_6->total_time = FUNC_2(VAR_7->regs + VAR_3) / 8;
 VAR_6->current_frequency = FUNC_0(VAR_7->emc_clock);

 FUNC_3(VAR_0, VAR_7->regs + VAR_2);
 FUNC_3(VAR_1, VAR_7->regs + VAR_2);

 return 0;
}
