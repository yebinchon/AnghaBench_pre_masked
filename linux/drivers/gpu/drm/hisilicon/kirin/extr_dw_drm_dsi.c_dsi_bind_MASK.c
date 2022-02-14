
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dsi {int encoder; } ;
struct dsi_data {struct dw_dsi dsi; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 struct dsi_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct drm_device*,struct dw_dsi*) ;
 int FUNC_2 (struct device*,struct dw_dsi*) ;
 int FUNC_3 (struct device*,struct drm_device*,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_0(VAR_0);
 struct dw_dsi *VAR_4 = &VAR_3->dsi;
 struct drm_device *VAR_5 = VAR_2;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_0, VAR_5, &VAR_4->encoder);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;

 return 0;
}
