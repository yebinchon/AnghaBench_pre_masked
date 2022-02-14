
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ crtc_offset; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct radeon_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_3,
      struct drm_display_mode *VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 struct radeon_crtc *VAR_7 = FUNC_1(VAR_3);

 FUNC_0(VAR_0 + VAR_7->crtc_offset, 0);
 FUNC_0(VAR_1 + VAR_7->crtc_offset, 0);
 FUNC_0(VAR_2 + VAR_7->crtc_offset, 0);
}
