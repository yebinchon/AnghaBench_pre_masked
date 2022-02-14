
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct dsi_data {int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dsi_data*) ;
 int FUNC_3 (struct dsi_data*) ;
 int FUNC_4 (struct dsi_data*) ;
 int FUNC_5 (struct dsi_data*) ;
 int FUNC_6 (struct dsi_data*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct dsi_data* FUNC_9 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_10(struct omap_dss_device *VAR_0)
{
 struct dsi_data *VAR_1 = FUNC_9(VAR_0);
 int VAR_2;

 FUNC_0("dsi_display_enable\n");

 FUNC_1(!FUNC_3(VAR_1));

 FUNC_7(&VAR_1->lock);

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  goto err_get_dsi;

 FUNC_2(VAR_1);

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  goto err_init_dsi;

 FUNC_8(&VAR_1->lock);

 return;

err_init_dsi:
 FUNC_6(VAR_1);
err_get_dsi:
 FUNC_8(&VAR_1->lock);
 FUNC_0("dsi_display_enable FAILED\n");
}
