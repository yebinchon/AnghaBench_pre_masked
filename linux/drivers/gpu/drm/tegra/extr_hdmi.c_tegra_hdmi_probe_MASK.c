
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * dev; int * ops; int list; } ;
struct TYPE_3__ {int * dev; } ;
struct tegra_hdmi {int stereo; int dvi; int irq; TYPE_2__ client; int * dev; void* regs; TYPE_1__ output; void* vdd; void* pll; void* hdmi; void* clk_parent; void* clk; void* rst; int audio_source; int config; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *,char*) ;
 void* FUNC_7 (int *,struct resource*) ;
 struct tegra_hdmi* FUNC_8 (int *,int,int ) ;
 void* FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int,int ,int ,int ,struct tegra_hdmi*) ;
 void* FUNC_11 (int *,char*) ;
 int VAR_4 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct tegra_hdmi*) ;
 int FUNC_17 (int *) ;
 int VAR_5 ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_6)
{
 struct tegra_hdmi *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_8(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->config = FUNC_13(&VAR_6->dev);
 VAR_7->dev = &VAR_6->dev;

 VAR_7->audio_source = VAR_0;
 VAR_7->stereo = 0;
 VAR_7->dvi = 0;

 VAR_7->clk = FUNC_6(&VAR_6->dev, ((void*)0));
 if (FUNC_1(VAR_7->clk)) {
  FUNC_4(&VAR_6->dev, "failed to get clock\n");
  return FUNC_2(VAR_7->clk);
 }

 VAR_7->rst = FUNC_11(&VAR_6->dev, "hdmi");
 if (FUNC_1(VAR_7->rst)) {
  FUNC_4(&VAR_6->dev, "failed to get reset\n");
  return FUNC_2(VAR_7->rst);
 }

 VAR_7->clk_parent = FUNC_6(&VAR_6->dev, "parent");
 if (FUNC_1(VAR_7->clk_parent))
  return FUNC_2(VAR_7->clk_parent);

 VAR_9 = FUNC_3(VAR_7->clk, VAR_7->clk_parent);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_6->dev, "failed to setup clocks: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_7->hdmi = FUNC_9(&VAR_6->dev, "hdmi");
 if (FUNC_1(VAR_7->hdmi)) {
  FUNC_4(&VAR_6->dev, "failed to get HDMI regulator\n");
  return FUNC_2(VAR_7->hdmi);
 }

 VAR_7->pll = FUNC_9(&VAR_6->dev, "pll");
 if (FUNC_1(VAR_7->pll)) {
  FUNC_4(&VAR_6->dev, "failed to get PLL regulator\n");
  return FUNC_2(VAR_7->pll);
 }

 VAR_7->vdd = FUNC_9(&VAR_6->dev, "vdd");
 if (FUNC_1(VAR_7->vdd)) {
  FUNC_4(&VAR_6->dev, "failed to get VDD regulator\n");
  return FUNC_2(VAR_7->vdd);
 }

 VAR_7->output.dev = &VAR_6->dev;

 VAR_9 = FUNC_18(&VAR_7->output);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_15(VAR_6, VAR_3, 0);
 VAR_7->regs = FUNC_7(&VAR_6->dev, VAR_8);
 if (FUNC_1(VAR_7->regs))
  return FUNC_2(VAR_7->regs);

 VAR_9 = FUNC_14(VAR_6, 0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->irq = VAR_9;

 VAR_9 = FUNC_10(VAR_7->dev, VAR_7->irq, VAR_5, 0,
          FUNC_5(VAR_7->dev), VAR_7);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_6->dev, "failed to request IRQ#%u: %d\n",
   VAR_7->irq, VAR_9);
  return VAR_9;
 }

 FUNC_16(VAR_6, VAR_7);
 FUNC_17(&VAR_6->dev);

 FUNC_0(&VAR_7->client.list);
 VAR_7->client.ops = &VAR_4;
 VAR_7->client.dev = &VAR_6->dev;

 VAR_9 = FUNC_12(&VAR_7->client);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_6->dev, "failed to register host1x client: %d\n",
   VAR_9);
  return VAR_9;
 }

 return 0;
}
