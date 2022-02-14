
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {int pll; int core; int debugfs; int wp; int pdev; struct dss_device* dss; } ;
struct dss_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 struct omap_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (struct dss_device*,char*,int ,struct omap_hdmi*) ;
 struct dss_device* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct omap_hdmi*) ;
 int VAR_0 ;
 int FUNC_7 (struct dss_device*,int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct omap_hdmi*) ;
 int FUNC_10 (struct omap_hdmi*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_1, struct device *VAR_2, void *VAR_3)
{
 struct dss_device *VAR_4 = FUNC_3(VAR_2);
 struct omap_hdmi *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 VAR_5->dss = VAR_4;

 VAR_6 = FUNC_9(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_7(VAR_4, VAR_5->pdev, &VAR_5->pll, &VAR_5->wp);
 if (VAR_6)
  goto err_runtime_put;

 VAR_6 = FUNC_4(VAR_5->pdev, &VAR_5->core, &VAR_5->wp);
 if (VAR_6)
  goto err_pll_uninit;

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6) {
  FUNC_0("Registering HDMI audio failed\n");
  goto err_cec_uninit;
 }

 VAR_5->debugfs = FUNC_2(VAR_4, "hdmi", VAR_0,
            VAR_5);

 FUNC_10(VAR_5);

 return 0;

err_cec_uninit:
 FUNC_5(&VAR_5->core);
err_pll_uninit:
 FUNC_8(&VAR_5->pll);
err_runtime_put:
 FUNC_10(VAR_5);
 return VAR_6;
}
