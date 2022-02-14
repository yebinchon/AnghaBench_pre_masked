
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {int pll; int debugfs; int wp; int pdev; struct dss_device* dss; } ;
struct dss_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 struct omap_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (struct dss_device*,char*,int ,struct omap_hdmi*) ;
 struct dss_device* FUNC_3 (struct device*) ;
 int FUNC_4 (struct omap_hdmi*) ;
 int VAR_0 ;
 int FUNC_5 (struct dss_device*,int ,int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1, struct device *VAR_2, void *VAR_3)
{
 struct dss_device *VAR_4 = FUNC_3(VAR_2);
 struct omap_hdmi *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 VAR_5->dss = VAR_4;

 VAR_6 = FUNC_5(VAR_4, VAR_5->pdev, &VAR_5->pll, &VAR_5->wp);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_0("Registering HDMI audio failed %d\n", VAR_6);
  goto err_pll_uninit;
 }

 VAR_5->debugfs = FUNC_2(VAR_4, "hdmi", VAR_0,
      VAR_5);

 return 0;

err_pll_uninit:
 FUNC_6(&VAR_5->pll);
 return VAR_6;
}
