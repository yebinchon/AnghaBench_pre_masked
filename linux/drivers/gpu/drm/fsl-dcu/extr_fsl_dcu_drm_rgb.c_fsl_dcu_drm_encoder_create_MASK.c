
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int possible_crtcs; } ;
struct fsl_dcu_drm_device {int drm; scalar_t__ tcon; struct drm_encoder encoder; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct drm_encoder*,int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct fsl_dcu_drm_device *VAR_2,
          struct drm_crtc *VAR_3)
{
 struct drm_encoder *VAR_4 = &VAR_2->encoder;
 int VAR_5;

 VAR_4->possible_crtcs = 1;


 if (VAR_2->tcon)
  FUNC_1(VAR_2->tcon);

 VAR_5 = FUNC_0(VAR_2->drm, VAR_4, &VAR_1,
          VAR_0, ((void*)0));
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
