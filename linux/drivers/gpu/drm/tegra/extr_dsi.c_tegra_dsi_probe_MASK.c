
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* dev; int * ops; } ;
struct TYPE_18__ {TYPE_3__* dev; int * ops; int list; } ;
struct TYPE_14__ {int polled; } ;
struct TYPE_15__ {TYPE_1__ connector; TYPE_3__* dev; } ;
struct tegra_dsi {int video_fifo_depth; int host_fifo_depth; int lanes; void* mipi; TYPE_5__ host; TYPE_7__ client; void* regs; void* vdd; void* clk_parent; void* clk_lp; void* clk; void* rst; int format; int flags; TYPE_2__ output; TYPE_3__* dev; } ;
struct resource {int dummy; } ;
struct TYPE_16__ {int pm_domain; } ;
struct platform_device {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 void* FUNC_4 (TYPE_3__*,char*) ;
 void* FUNC_5 (TYPE_3__*,struct resource*) ;
 struct tegra_dsi* FUNC_6 (TYPE_3__*,int,int ) ;
 void* FUNC_7 (TYPE_3__*,char*) ;
 void* FUNC_8 (TYPE_3__*,char*) ;
 int VAR_6 ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct tegra_dsi*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (struct tegra_dsi*) ;
 int VAR_7 ;
 int FUNC_16 (struct tegra_dsi*) ;
 int FUNC_17 (void*) ;
 void* FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_8)
{
 struct tegra_dsi *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->output.dev = VAR_9->dev = &VAR_8->dev;
 VAR_9->video_fifo_depth = 1920;
 VAR_9->host_fifo_depth = 64;

 VAR_11 = FUNC_15(VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_19(&VAR_9->output);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9->output.connector.polled = VAR_0;






 VAR_9->flags = VAR_5;
 VAR_9->format = VAR_4;
 VAR_9->lanes = 4;

 if (!VAR_8->dev.pm_domain) {
  VAR_9->rst = FUNC_8(&VAR_8->dev, "dsi");
  if (FUNC_1(VAR_9->rst))
   return FUNC_2(VAR_9->rst);
 }

 VAR_9->clk = FUNC_4(&VAR_8->dev, ((void*)0));
 if (FUNC_1(VAR_9->clk)) {
  FUNC_3(&VAR_8->dev, "cannot get DSI clock\n");
  return FUNC_2(VAR_9->clk);
 }

 VAR_9->clk_lp = FUNC_4(&VAR_8->dev, "lp");
 if (FUNC_1(VAR_9->clk_lp)) {
  FUNC_3(&VAR_8->dev, "cannot get low-power clock\n");
  return FUNC_2(VAR_9->clk_lp);
 }

 VAR_9->clk_parent = FUNC_4(&VAR_8->dev, "parent");
 if (FUNC_1(VAR_9->clk_parent)) {
  FUNC_3(&VAR_8->dev, "cannot get parent clock\n");
  return FUNC_2(VAR_9->clk_parent);
 }

 VAR_9->vdd = FUNC_7(&VAR_8->dev, "avdd-dsi-csi");
 if (FUNC_1(VAR_9->vdd)) {
  FUNC_3(&VAR_8->dev, "cannot get VDD supply\n");
  return FUNC_2(VAR_9->vdd);
 }

 VAR_11 = FUNC_16(VAR_9);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_8->dev, "cannot setup clocks\n");
  return VAR_11;
 }

 VAR_10 = FUNC_12(VAR_8, VAR_3, 0);
 VAR_9->regs = FUNC_5(&VAR_8->dev, VAR_10);
 if (FUNC_1(VAR_9->regs))
  return FUNC_2(VAR_9->regs);

 VAR_9->mipi = FUNC_18(&VAR_8->dev);
 if (FUNC_1(VAR_9->mipi))
  return FUNC_2(VAR_9->mipi);

 VAR_9->host.ops = &VAR_7;
 VAR_9->host.dev = &VAR_8->dev;

 VAR_11 = FUNC_10(&VAR_9->host);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_8->dev, "failed to register DSI host: %d\n", VAR_11);
  goto mipi_free;
 }

 FUNC_13(VAR_8, VAR_9);
 FUNC_14(&VAR_8->dev);

 FUNC_0(&VAR_9->client.list);
 VAR_9->client.ops = &VAR_6;
 VAR_9->client.dev = &VAR_8->dev;

 VAR_11 = FUNC_9(&VAR_9->client);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_8->dev, "failed to register host1x client: %d\n",
   VAR_11);
  goto unregister;
 }

 return 0;

unregister:
 FUNC_11(&VAR_9->host);
mipi_free:
 FUNC_17(VAR_9->mipi);
 return VAR_11;
}
