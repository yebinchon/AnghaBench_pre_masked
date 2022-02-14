
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int flags; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 struct amdgpu_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_4,
         struct drm_display_mode *VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct amdgpu_device *VAR_7 = VAR_6->dev_private;
 struct amdgpu_crtc *VAR_8 = FUNC_3(VAR_4);
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_3 + VAR_8->crtc_offset);
 if (VAR_5->flags & VAR_0)
  VAR_9 = FUNC_0(VAR_9, VAR_2, VAR_1, 1);
 else
  VAR_9 = FUNC_0(VAR_9, VAR_2, VAR_1, 0);
 FUNC_2(VAR_3 + VAR_8->crtc_offset, VAR_9);
}
