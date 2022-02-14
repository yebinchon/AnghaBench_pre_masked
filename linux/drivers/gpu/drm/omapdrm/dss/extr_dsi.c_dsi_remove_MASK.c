
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dsi_data {int vdds_dsi_enabled; int * vdds_dsi_reg; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct dsi_data*) ;
 int FUNC_2 (int *) ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct dsi_data *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_1->dev, &VAR_0);

 FUNC_1(VAR_2);

 FUNC_2(&VAR_1->dev);

 FUNC_4(&VAR_1->dev);

 if (VAR_2->vdds_dsi_reg != ((void*)0) && VAR_2->vdds_dsi_enabled) {
  FUNC_5(VAR_2->vdds_dsi_reg);
  VAR_2->vdds_dsi_enabled = 0;
 }

 return 0;
}
