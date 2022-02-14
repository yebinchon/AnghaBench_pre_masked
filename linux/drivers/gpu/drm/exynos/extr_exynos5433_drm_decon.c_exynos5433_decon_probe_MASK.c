
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct decon_context {unsigned long out_type; int first_win; int irq_vsync; int irq_lcd_sys; int te_irq; struct clk* sysreg; struct clk* addr; struct clk** clks; struct device* dev; int vblank_lock; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct device*,int *) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct decon_context*,char*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct device*,char*) ;
 struct clk* FUNC_6 (struct device*,int ) ;
 struct clk* FUNC_7 (struct device*,struct resource*) ;
 struct decon_context* FUNC_8 (struct device*,int,int ) ;
 scalar_t__ FUNC_9 (struct device*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct decon_context*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (int *) ;
 struct clk* FUNC_15 (int ,char*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct decon_context *VAR_12;
 struct resource *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_8(VAR_11, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->dev = VAR_11;
 VAR_12->out_type = (unsigned long)FUNC_9(VAR_11);
 FUNC_14(&VAR_12->vblank_lock);

 if (VAR_12->out_type & VAR_3)
  VAR_12->first_win = 1;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_6); VAR_15++) {
  struct clk *VAR_16;

  VAR_16 = FUNC_6(VAR_12->dev, VAR_6[VAR_15]);
  if (FUNC_1(VAR_16))
   return FUNC_2(VAR_16);

  VAR_12->clks[VAR_15] = VAR_16;
 }

 VAR_13 = FUNC_10(VAR_10, VAR_4, 0);
 VAR_12->addr = FUNC_7(VAR_11, VAR_13);
 if (FUNC_1(VAR_12->addr)) {
  FUNC_5(VAR_11, "ioremap failed\n");
  return FUNC_2(VAR_12->addr);
 }

 VAR_14 = FUNC_4(VAR_12, "vsync", VAR_8, 0);
 if (VAR_14 < 0)
  return VAR_14;
 VAR_12->irq_vsync = VAR_14;

 VAR_14 = FUNC_4(VAR_12, "lcd_sys", VAR_8, 0);
 if (VAR_14 < 0)
  return VAR_14;
 VAR_12->irq_lcd_sys = VAR_14;

 VAR_14 = FUNC_4(VAR_12, "te", VAR_9,
   VAR_5);
 if (VAR_14 < 0)
   return VAR_14;
 if (VAR_14) {
  VAR_12->te_irq = VAR_14;
  VAR_12->out_type &= ~VAR_2;
 }

 if (VAR_12->out_type & VAR_2) {
  VAR_12->sysreg = FUNC_15(VAR_11->of_node,
       "samsung,disp-sysreg");
  if (FUNC_1(VAR_12->sysreg)) {
   FUNC_5(VAR_11, "failed to get system register\n");
   return FUNC_2(VAR_12->sysreg);
  }
 }

 FUNC_11(VAR_10, VAR_12);

 FUNC_13(VAR_11);

 VAR_14 = FUNC_3(VAR_11, &VAR_7);
 if (VAR_14)
  goto err_disable_pm_runtime;

 return 0;

err_disable_pm_runtime:
 FUNC_12(VAR_11);

 return VAR_14;
}
