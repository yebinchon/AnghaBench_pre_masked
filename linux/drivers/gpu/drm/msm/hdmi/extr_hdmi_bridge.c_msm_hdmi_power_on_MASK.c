
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_platform_config {int pwr_reg_cnt; int pwr_clk_cnt; int * pwr_clk_names; int * pwr_reg_names; } ;
struct hdmi_bridge {struct hdmi* hdmi; } ;
struct hdmi {int * pwr_clks; int pixclock; int * pwr_regs; TYPE_1__* pdev; struct hdmi_platform_config* config; } ;
struct drm_device {int dev; } ;
struct drm_bridge {struct drm_device* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct hdmi_bridge* FUNC_6 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct hdmi_bridge *VAR_2 = FUNC_6(VAR_0);
 struct hdmi *VAR_3 = VAR_2->hdmi;
 const struct hdmi_platform_config *VAR_4 = VAR_3->config;
 int VAR_5, VAR_6;

 FUNC_4(&VAR_3->pdev->dev);

 for (VAR_5 = 0; VAR_5 < VAR_4->pwr_reg_cnt; VAR_5++) {
  VAR_6 = FUNC_5(VAR_3->pwr_regs[VAR_5]);
  if (VAR_6) {
   FUNC_1(VAR_1->dev, "failed to enable pwr regulator: %s (%d)\n",
     VAR_4->pwr_reg_names[VAR_5], VAR_6);
  }
 }

 if (VAR_4->pwr_clk_cnt > 0) {
  FUNC_0("pixclock: %lu", VAR_3->pixclock);
  VAR_6 = FUNC_3(VAR_3->pwr_clks[0], VAR_3->pixclock);
  if (VAR_6) {
   FUNC_1(VAR_1->dev, "failed to set pixel clk: %s (%d)\n",
     VAR_4->pwr_clk_names[0], VAR_6);
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->pwr_clk_cnt; VAR_5++) {
  VAR_6 = FUNC_2(VAR_3->pwr_clks[VAR_5]);
  if (VAR_6) {
   FUNC_1(VAR_1->dev, "failed to enable pwr clk: %s (%d)\n",
     VAR_4->pwr_clk_names[VAR_5], VAR_6);
  }
 }
}
