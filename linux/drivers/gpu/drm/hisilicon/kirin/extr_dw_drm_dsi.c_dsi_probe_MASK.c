
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dw_dsi {struct dsi_hw_ctx* ctx; } ;
struct dsi_hw_ctx {int dummy; } ;
struct dsi_data {struct dsi_hw_ctx ctx; struct dw_dsi dsi; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 struct dsi_data* FUNC_2 (int *,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct platform_device*,struct dw_dsi*) ;
 int FUNC_4 (struct platform_device*,struct dsi_data*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct dsi_data *VAR_4;
 struct dw_dsi *VAR_5;
 struct dsi_hw_ctx *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  FUNC_0("failed to allocate dsi data.\n");
  return -VAR_0;
 }
 VAR_5 = &VAR_4->dsi;
 VAR_6 = &VAR_4->ctx;
 VAR_5->ctx = VAR_6;

 VAR_7 = FUNC_3(VAR_3, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_3, VAR_4);

 return FUNC_1(&VAR_3->dev, &VAR_2);
}
