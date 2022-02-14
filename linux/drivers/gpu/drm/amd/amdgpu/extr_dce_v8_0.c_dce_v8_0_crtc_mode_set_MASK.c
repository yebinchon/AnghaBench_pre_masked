
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct amdgpu_crtc {struct drm_display_mode hw_mode; int adjusted_clock; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_crtc*,struct drm_framebuffer*,int,int,int ) ;
 int FUNC_5 (struct drm_crtc*) ;
 struct amdgpu_crtc* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_7(struct drm_crtc *VAR_1,
      struct drm_display_mode *VAR_2,
      struct drm_display_mode *VAR_3,
      int VAR_4, int VAR_5, struct drm_framebuffer *VAR_6)
{
 struct amdgpu_crtc *VAR_7 = FUNC_6(VAR_1);

 if (!VAR_7->adjusted_clock)
  return -VAR_0;

 FUNC_3(VAR_1, VAR_3);
 FUNC_2(VAR_1, VAR_3);
 FUNC_4(VAR_1, VAR_6, VAR_4, VAR_5, 0);
 FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_1);
 FUNC_5(VAR_1);

 VAR_7->hw_mode = *VAR_3;

 return 0;
}
