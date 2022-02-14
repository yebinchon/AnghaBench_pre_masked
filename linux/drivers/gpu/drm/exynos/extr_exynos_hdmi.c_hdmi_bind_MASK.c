
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; } ;
struct drm_encoder {int dummy; } ;
struct hdmi_context {TYPE_1__ phy_clk; struct drm_device* drm_dev; struct drm_encoder encoder; } ;
struct exynos_drm_crtc {TYPE_1__* pipe_clk; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hdmi_context* FUNC_1 (struct device*) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct exynos_drm_crtc* FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct drm_encoder*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct drm_encoder*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct device *VAR_5, struct device *VAR_6, void *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7;
 struct hdmi_context *VAR_9 = FUNC_1(VAR_5);
 struct drm_encoder *VAR_10 = &VAR_9->encoder;
 struct exynos_drm_crtc *VAR_11;
 int VAR_12;

 VAR_9->drm_dev = VAR_8;

 VAR_9->phy_clk.enable = VAR_4;

 FUNC_4(VAR_8, VAR_10, &VAR_2,
    VAR_0, ((void*)0));

 FUNC_3(VAR_10, &VAR_3);

 VAR_12 = FUNC_6(VAR_10, VAR_1);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = FUNC_5(VAR_8, VAR_1);
 VAR_11->pipe_clk = &VAR_9->phy_clk;

 VAR_12 = FUNC_7(VAR_10);
 if (VAR_12) {
  FUNC_0(VAR_5, "failed to create connector ret = %d\n",
         VAR_12);
  FUNC_2(VAR_10);
  return VAR_12;
 }

 return 0;
}
