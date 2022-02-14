
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_mipi_dsi {int bridge; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_encoder*,int *,int *) ;

int FUNC_2(struct dw_mipi_dsi *VAR_0, struct drm_encoder *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, &VAR_0->bridge, ((void*)0));
 if (VAR_2) {
  FUNC_0("Failed to initialize bridge with drm\n");
  return VAR_2;
 }

 return VAR_2;
}
