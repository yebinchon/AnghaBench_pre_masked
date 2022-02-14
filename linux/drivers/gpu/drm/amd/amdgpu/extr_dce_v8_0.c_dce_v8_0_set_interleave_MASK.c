
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int flags; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 struct amdgpu_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_3,
        struct drm_display_mode *VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct amdgpu_device *VAR_6 = VAR_5->dev_private;
 struct amdgpu_crtc *VAR_7 = FUNC_1(VAR_3);

 if (VAR_4->flags & VAR_0)
  FUNC_0(VAR_2 + VAR_7->crtc_offset,
         VAR_1);
 else
  FUNC_0(VAR_2 + VAR_7->crtc_offset, 0);
}
