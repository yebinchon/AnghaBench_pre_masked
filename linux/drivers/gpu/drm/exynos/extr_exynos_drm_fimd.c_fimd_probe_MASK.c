
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct fimd_context {int suspended; int i80_if; int * encoder; int wait_vsync_event; int wait_vsync_queue; int * regs; int * lcd_clk; int * bus_clk; int * sysreg; int i80ifcon; int vidcon0; int vidout_con; TYPE_1__* driver_data; int vidcon1; struct device* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_vidoutcon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,char*) ;
 void* FUNC_10 (struct device*,char*) ;
 int * FUNC_11 (struct device*,struct resource*) ;
 struct fimd_context* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int ,int ,int ,char*,struct fimd_context*) ;
 int * FUNC_14 (struct device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (int *) ;
 TYPE_1__* FUNC_16 (struct device*) ;
 struct device_node* FUNC_17 (int ,char*) ;
 int FUNC_18 (struct device_node*) ;
 scalar_t__ FUNC_19 (int ,char*) ;
 scalar_t__ FUNC_20 (struct device_node*,char*,int*) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_22 (struct platform_device*,int ,char*) ;
 int FUNC_23 (struct platform_device*,struct fimd_context*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int * FUNC_26 (int ,char*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct fimd_context *VAR_15;
 struct device_node *VAR_16;
 struct resource *VAR_17;
 int VAR_18;

 if (!VAR_14->of_node)
  return -VAR_0;

 VAR_15 = FUNC_12(VAR_14, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->dev = VAR_14;
 VAR_15->suspended = 1;
 VAR_15->driver_data = FUNC_16(VAR_14);

 if (FUNC_19(VAR_14->of_node, "samsung,invert-vden"))
  VAR_15->vidcon1 |= VAR_9;
 if (FUNC_19(VAR_14->of_node, "samsung,invert-vclk"))
  VAR_15->vidcon1 |= VAR_8;

 VAR_16 = FUNC_17(VAR_14->of_node, "i80-if-timings");
 if (VAR_16) {
  u32 VAR_19;

  VAR_15->i80_if = 1;

  if (VAR_15->driver_data->has_vidoutcon)
   VAR_15->vidout_con |= VAR_10;
  else
   VAR_15->vidcon0 |= VAR_7;




  VAR_15->vidcon0 |= VAR_6;

  if (FUNC_20(VAR_16, "cs-setup", &VAR_19))
   VAR_19 = 0;
  VAR_15->i80ifcon = FUNC_1(VAR_19);
  if (FUNC_20(VAR_16, "wr-setup", &VAR_19))
   VAR_19 = 0;
  VAR_15->i80ifcon |= FUNC_4(VAR_19);
  if (FUNC_20(VAR_16, "wr-active", &VAR_19))
   VAR_19 = 1;
  VAR_15->i80ifcon |= FUNC_2(VAR_19);
  if (FUNC_20(VAR_16, "wr-hold", &VAR_19))
   VAR_19 = 0;
  VAR_15->i80ifcon |= FUNC_3(VAR_19);
 }
 FUNC_18(VAR_16);

 VAR_15->sysreg = FUNC_26(VAR_14->of_node,
       "samsung,sysreg");
 if (FUNC_0(VAR_15->sysreg)) {
  FUNC_9(VAR_14, "failed to get system register.\n");
  VAR_15->sysreg = ((void*)0);
 }

 VAR_15->bus_clk = FUNC_10(VAR_14, "fimd");
 if (FUNC_0(VAR_15->bus_clk)) {
  FUNC_8(VAR_14, "failed to get bus clock\n");
  return FUNC_5(VAR_15->bus_clk);
 }

 VAR_15->lcd_clk = FUNC_10(VAR_14, "sclk_fimd");
 if (FUNC_0(VAR_15->lcd_clk)) {
  FUNC_8(VAR_14, "failed to get lcd clock\n");
  return FUNC_5(VAR_15->lcd_clk);
 }

 VAR_17 = FUNC_21(VAR_13, VAR_5, 0);

 VAR_15->regs = FUNC_11(VAR_14, VAR_17);
 if (FUNC_0(VAR_15->regs))
  return FUNC_5(VAR_15->regs);

 VAR_17 = FUNC_22(VAR_13, VAR_4,
        VAR_15->i80_if ? "lcd_sys" : "vsync");
 if (!VAR_17) {
  FUNC_8(VAR_14, "irq request failed.\n");
  return -VAR_2;
 }

 VAR_18 = FUNC_13(VAR_14, VAR_17->start, VAR_12,
       0, "drm_fimd", VAR_15);
 if (VAR_18) {
  FUNC_8(VAR_14, "irq request failed.\n");
  return VAR_18;
 }

 FUNC_15(&VAR_15->wait_vsync_queue);
 FUNC_6(&VAR_15->wait_vsync_event, 0);

 FUNC_23(VAR_13, VAR_15);

 VAR_15->encoder = FUNC_14(VAR_14);
 if (FUNC_0(VAR_15->encoder))
  return FUNC_5(VAR_15->encoder);

 FUNC_25(VAR_14);

 VAR_18 = FUNC_7(VAR_14, &VAR_11);
 if (VAR_18)
  goto err_disable_pm_runtime;

 return VAR_18;

err_disable_pm_runtime:
 FUNC_24(VAR_14);

 return VAR_18;
}
