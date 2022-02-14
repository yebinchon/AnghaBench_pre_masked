
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct dsi_data {int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dsi_data*) ;
 int FUNC_3 (struct dsi_data*,int,int) ;
 int FUNC_4 (struct dsi_data*) ;
 int FUNC_5 (struct dsi_data*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct dsi_data* FUNC_8 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_9(struct omap_dss_device *VAR_0,
  bool VAR_1, bool VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_8(VAR_0);

 FUNC_0("dsi_display_disable\n");

 FUNC_1(!FUNC_2(VAR_3));

 FUNC_6(&VAR_3->lock);

 FUNC_5(VAR_3, 0);
 FUNC_5(VAR_3, 1);
 FUNC_5(VAR_3, 2);
 FUNC_5(VAR_3, 3);

 FUNC_3(VAR_3, VAR_1, VAR_2);

 FUNC_4(VAR_3);

 FUNC_7(&VAR_3->lock);
}
