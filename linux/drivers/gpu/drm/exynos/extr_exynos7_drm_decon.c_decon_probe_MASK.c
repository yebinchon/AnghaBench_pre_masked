
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct decon_context {int suspended; int i80_if; int regs; void* encoder; int wait_vsync_event; int wait_vsync_queue; void* vclk; void* eclk; void* aclk; void* pclk; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct device*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*) ;
 struct decon_context* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int ,int ,int ,char*,struct decon_context*) ;
 void* FUNC_8 (struct device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 struct device_node* FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct device_node*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,char*) ;
 int FUNC_15 (struct platform_device*,struct decon_context*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct decon_context *VAR_9;
 struct device_node *VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 if (!VAR_8->of_node)
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_8, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = VAR_8;
 VAR_9->suspended = 1;

 VAR_10 = FUNC_11(VAR_8->of_node, "i80-if-timings");
 if (VAR_10)
  VAR_9->i80_if = 1;
 FUNC_13(VAR_10);

 VAR_9->regs = FUNC_12(VAR_8->of_node, 0);
 if (!VAR_9->regs)
  return -VAR_1;

 VAR_9->pclk = FUNC_5(VAR_8, "pclk_decon0");
 if (FUNC_0(VAR_9->pclk)) {
  FUNC_4(VAR_8, "failed to get bus clock pclk\n");
  VAR_12 = FUNC_1(VAR_9->pclk);
  goto err_iounmap;
 }

 VAR_9->aclk = FUNC_5(VAR_8, "aclk_decon0");
 if (FUNC_0(VAR_9->aclk)) {
  FUNC_4(VAR_8, "failed to get bus clock aclk\n");
  VAR_12 = FUNC_1(VAR_9->aclk);
  goto err_iounmap;
 }

 VAR_9->eclk = FUNC_5(VAR_8, "decon0_eclk");
 if (FUNC_0(VAR_9->eclk)) {
  FUNC_4(VAR_8, "failed to get eclock\n");
  VAR_12 = FUNC_1(VAR_9->eclk);
  goto err_iounmap;
 }

 VAR_9->vclk = FUNC_5(VAR_8, "decon0_vclk");
 if (FUNC_0(VAR_9->vclk)) {
  FUNC_4(VAR_8, "failed to get vclock\n");
  VAR_12 = FUNC_1(VAR_9->vclk);
  goto err_iounmap;
 }

 VAR_11 = FUNC_14(VAR_7, VAR_4,
        VAR_9->i80_if ? "lcd_sys" : "vsync");
 if (!VAR_11) {
  FUNC_4(VAR_8, "irq request failed.\n");
  VAR_12 = -VAR_2;
  goto err_iounmap;
 }

 VAR_12 = FUNC_7(VAR_8, VAR_11->start, VAR_6,
       0, "drm_decon", VAR_9);
 if (VAR_12) {
  FUNC_4(VAR_8, "irq request failed.\n");
  goto err_iounmap;
 }

 FUNC_9(&VAR_9->wait_vsync_queue);
 FUNC_2(&VAR_9->wait_vsync_event, 0);

 FUNC_15(VAR_7, VAR_9);

 VAR_9->encoder = FUNC_8(VAR_8);
 if (FUNC_0(VAR_9->encoder)) {
  VAR_12 = FUNC_1(VAR_9->encoder);
  goto err_iounmap;
 }

 FUNC_17(VAR_8);

 VAR_12 = FUNC_3(VAR_8, &VAR_5);
 if (VAR_12)
  goto err_disable_pm_runtime;

 return VAR_12;

err_disable_pm_runtime:
 FUNC_16(VAR_8);

err_iounmap:
 FUNC_10(VAR_9->regs);

 return VAR_12;
}
