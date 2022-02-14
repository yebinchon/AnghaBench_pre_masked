
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct dsi_data {scalar_t__ mode; int output; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct dsi_data*,int ,int ,int,int) ;
 int FUNC_2 (struct dsi_data*) ;
 int FUNC_3 (struct dsi_data*,int) ;
 int FUNC_4 (struct dsi_data*,int,int) ;
 int FUNC_5 (int *) ;
 struct dsi_data* FUNC_6 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_7(struct omap_dss_device *VAR_1, int VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_6(VAR_1);

 if (VAR_3->mode == VAR_0) {
  FUNC_3(VAR_3, 0);
  FUNC_4(VAR_3, VAR_2, 0);


  FUNC_1(VAR_3, FUNC_0(VAR_2), 0, 4, 4);

  FUNC_4(VAR_3, VAR_2, 1);
  FUNC_3(VAR_3, 1);
 }

 FUNC_5(&VAR_3->output);

 FUNC_2(VAR_3);
}
