
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int possible_crtcs; } ;
struct rockchip_dp_device {struct device* dev; struct drm_device* drm_dev; struct drm_encoder encoder; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_encoder*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct rockchip_dp_device *VAR_3)
{
 struct drm_encoder *VAR_4 = &VAR_3->encoder;
 struct drm_device *VAR_5 = VAR_3->drm_dev;
 struct device *VAR_6 = VAR_3->dev;
 int VAR_7;

 VAR_4->possible_crtcs = FUNC_4(VAR_5,
            VAR_6->of_node);
 FUNC_0("possible_crtcs = 0x%x\n", VAR_4->possible_crtcs);

 VAR_7 = FUNC_3(VAR_5, VAR_4, &VAR_1,
          VAR_0, ((void*)0));
 if (VAR_7) {
  FUNC_1("failed to initialize encoder with drm\n");
  return VAR_7;
 }

 FUNC_2(VAR_4, &VAR_2);

 return 0;
}
