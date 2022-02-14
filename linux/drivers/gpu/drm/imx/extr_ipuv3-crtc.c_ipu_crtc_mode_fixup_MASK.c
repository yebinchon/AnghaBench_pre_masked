
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {scalar_t__ vsync_len; scalar_t__ hsync_len; } ;
struct ipu_crtc {int di; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct videomode*,struct drm_display_mode*) ;
 int FUNC_1 (struct drm_display_mode*,struct videomode*) ;
 int FUNC_2 (int ,struct videomode*) ;
 struct ipu_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_4(struct drm_crtc *VAR_0,
      const struct drm_display_mode *VAR_1,
      struct drm_display_mode *VAR_2)
{
 struct ipu_crtc *VAR_3 = FUNC_3(VAR_0);
 struct videomode VAR_4;
 int VAR_5;

 FUNC_1(VAR_2, &VAR_4);

 VAR_5 = FUNC_2(VAR_3->di, &VAR_4);
 if (VAR_5)
  return 0;

 if ((VAR_4.vsync_len == 0) || (VAR_4.hsync_len == 0))
  return 0;

 FUNC_0(&VAR_4, VAR_2);

 return 1;
}
