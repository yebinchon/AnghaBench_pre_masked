
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mixer_context {scalar_t__ mxr_ver; int dev; } ;
struct exynos_drm_crtc {struct mixer_context* ctx; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int flags; int vrefresh; } ;


 int FUNC_0 (int ,char*,int,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct exynos_drm_crtc *VAR_4,
  const struct drm_display_mode *VAR_5)
{
 struct mixer_context *VAR_6 = VAR_4->ctx;
 u32 VAR_7 = VAR_5->hdisplay, VAR_8 = VAR_5->vdisplay;

 FUNC_0(VAR_6->dev, "xres=%d, yres=%d, refresh=%d, intl=%d\n",
     VAR_7, VAR_8, VAR_5->vrefresh,
     !!(VAR_5->flags & VAR_0));

 if (VAR_6->mxr_ver == VAR_3)
  return VAR_2;

 if ((VAR_7 >= 464 && VAR_7 <= 720 && VAR_8 >= 261 && VAR_8 <= 576) ||
     (VAR_7 >= 1024 && VAR_7 <= 1280 && VAR_8 >= 576 && VAR_8 <= 720) ||
     (VAR_7 >= 1664 && VAR_7 <= 1920 && VAR_8 >= 936 && VAR_8 <= 1080))
  return VAR_2;

 if ((VAR_7 == 1024 && VAR_8 == 768) ||
     (VAR_7 == 1366 && VAR_8 == 768) ||
     (VAR_7 == 1280 && VAR_8 == 1024))
  return VAR_2;

 return VAR_1;
}
