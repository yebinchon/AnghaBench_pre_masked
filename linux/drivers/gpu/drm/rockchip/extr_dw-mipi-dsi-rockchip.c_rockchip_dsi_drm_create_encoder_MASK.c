
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int possible_crtcs; } ;
struct dw_mipi_dsi_rockchip {TYPE_1__* dev; struct drm_encoder encoder; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_encoder*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_3 (struct drm_device*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct dw_mipi_dsi_rockchip *VAR_3,
        struct drm_device *VAR_4)
{
 struct drm_encoder *VAR_5 = &VAR_3->encoder;
 int VAR_6;

 VAR_5->possible_crtcs = FUNC_3(VAR_4,
            VAR_3->dev->of_node);

 VAR_6 = FUNC_2(VAR_4, VAR_5, &VAR_1,
          VAR_0, ((void*)0));
 if (VAR_6) {
  FUNC_0("Failed to initialize encoder with drm\n");
  return VAR_6;
 }

 FUNC_1(VAR_5, &VAR_2);

 return 0;
}
