
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_drm_private {unsigned int num_crtcs; struct drm_crtc** crtcs; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


 struct drm_encoder* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static u32 FUNC_2(struct drm_device *VAR_0, unsigned int VAR_1)
{
 struct msm_drm_private *VAR_2 = VAR_0->dev_private;
 struct drm_crtc *VAR_3;
 struct drm_encoder *VAR_4;

 if (VAR_1 >= VAR_2->num_crtcs)
  return 0;

 VAR_3 = VAR_2->crtcs[VAR_1];
 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return 0;

 return FUNC_1(VAR_4);
}
