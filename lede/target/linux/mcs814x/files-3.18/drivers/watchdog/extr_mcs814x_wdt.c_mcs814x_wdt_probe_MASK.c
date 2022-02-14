
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int min_timeout; int max_timeout; int * ops; int * info; } ;
struct mcs814x_wdt {TYPE_1__ wdt_dev; int regs; struct clk* clk; int lock; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_4 ;
 struct clk* FUNC_2 (int *,char*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct mcs814x_wdt*) ;
 struct mcs814x_wdt* FUNC_9 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct mcs814x_wdt*) ;
 int FUNC_12 (struct resource*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,struct mcs814x_wdt*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_7)
{
 struct resource *VAR_8;
 struct mcs814x_wdt *VAR_9;
 int VAR_10;
 struct clk *VAR_11;

 VAR_8 = FUNC_10(VAR_7, VAR_3, 0);
 if (!VAR_8)
  return -VAR_0;

 VAR_11 = FUNC_2(((void*)0), "wdt");
 if (FUNC_0(VAR_11)) {
  FUNC_5(&VAR_7->dev, "failed to get watchdog clock\n");
  return FUNC_1(VAR_11);
 }

 VAR_9 = FUNC_9(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto out_clk;
 }

 FUNC_13(&VAR_9->lock);
 VAR_9->clk = VAR_11;
 VAR_9->wdt_dev.info = &VAR_5;
 VAR_9->wdt_dev.ops = &VAR_6;
 VAR_9->wdt_dev.min_timeout = 1;

 VAR_9->wdt_dev.max_timeout = (VAR_4 / FUNC_3(VAR_11));

 FUNC_11(VAR_7, VAR_9);


 VAR_9->regs = FUNC_7(&VAR_7->dev, VAR_8->start, FUNC_12(VAR_8));
 if (!VAR_9->regs) {
  VAR_10 = -VAR_1;
  goto out;
 }

 FUNC_15(&VAR_9->wdt_dev, VAR_9);

 VAR_10 = FUNC_14(&VAR_9->wdt_dev);
 if (VAR_10) {
  FUNC_5(&VAR_7->dev, "cannot register watchdog: %d\n", VAR_10);
  goto out;
 }

 FUNC_6(&VAR_7->dev, "registered\n");
 return 0;

out:
 FUNC_11(VAR_7, ((void*)0));
 FUNC_8(VAR_9);
out_clk:
 FUNC_4(VAR_11);
 return VAR_10;
}
