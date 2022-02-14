
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct amdgpu_crtc {struct drm_display_mode hw_mode; } ;


 struct amdgpu_crtc* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_1(struct drm_crtc *VAR_0,
      struct drm_display_mode *VAR_1,
      struct drm_display_mode *VAR_2,
      int VAR_3, int VAR_4, struct drm_framebuffer *VAR_5)
{
 struct amdgpu_crtc *VAR_6 = FUNC_0(VAR_0);


 VAR_6->hw_mode = *VAR_2;

 return 0;
}
