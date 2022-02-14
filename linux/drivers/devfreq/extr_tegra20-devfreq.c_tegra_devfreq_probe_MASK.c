
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_mc {scalar_t__ regs; } ;
struct tegra_devfreq {struct tegra_mc* devfreq; scalar_t__ regs; struct tegra_mc* emc_clock; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tegra_mc*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct tegra_mc*) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_2 (struct tegra_mc*,unsigned long) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,unsigned long,int ) ;
 int FUNC_5 (int *) ;
 struct tegra_mc* FUNC_6 (int *,int *,int ,int *) ;
 struct tegra_mc* FUNC_7 (int *,char*) ;
 struct tegra_devfreq* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct platform_device*,struct tegra_devfreq*) ;
 int VAR_7 ;
 struct tegra_mc* FUNC_10 () ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct tegra_devfreq *VAR_9;
 struct tegra_mc *VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_10 = FUNC_10();
 if (FUNC_0(VAR_10)) {
  VAR_13 = FUNC_1(VAR_10);
  FUNC_3(&VAR_8->dev, "failed to get memory controller: %d\n",
   VAR_13);
  return VAR_13;
 }

 VAR_9 = FUNC_8(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;


 VAR_9->emc_clock = FUNC_7(&VAR_8->dev, "emc");
 if (FUNC_0(VAR_9->emc_clock)) {
  VAR_13 = FUNC_1(VAR_9->emc_clock);
  FUNC_3(&VAR_8->dev, "failed to get emc clock: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_9->regs = VAR_10->regs;

 VAR_11 = FUNC_2(VAR_9->emc_clock, VAR_6);

 for (VAR_12 = 0; VAR_12 <= VAR_11; VAR_12++) {
  VAR_12 = FUNC_2(VAR_9->emc_clock, VAR_12);

  VAR_13 = FUNC_4(&VAR_8->dev, VAR_12, 0);
  if (VAR_13) {
   FUNC_3(&VAR_8->dev, "failed to add opp: %d\n", VAR_13);
   goto remove_opps;
  }
 }






 FUNC_11(0x00000000, VAR_9->regs + VAR_3);
 FUNC_11(0x00000000, VAR_9->regs + VAR_5);
 FUNC_11(0xffffffff, VAR_9->regs + VAR_4);

 FUNC_9(VAR_8, VAR_9);

 VAR_9->devfreq = FUNC_6(&VAR_8->dev, &VAR_7,
         VAR_0, ((void*)0));
 if (FUNC_0(VAR_9->devfreq)) {
  VAR_13 = FUNC_1(VAR_9->devfreq);
  goto remove_opps;
 }

 return 0;

remove_opps:
 FUNC_5(&VAR_8->dev);

 return VAR_13;
}
