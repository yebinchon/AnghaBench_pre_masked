
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int dpms; struct drm_crtc crtc; } ;
struct shmob_drm_device {int ddev; TYPE_1__ crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (int ,struct drm_crtc*,int *) ;

int FUNC_2(struct shmob_drm_device *VAR_3)
{
 struct drm_crtc *VAR_4 = &VAR_3->crtc.crtc;
 int VAR_5;

 VAR_3->crtc.dpms = VAR_0;

 VAR_5 = FUNC_1(VAR_3->ddev, VAR_4, &VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(VAR_4, &VAR_2);

 return 0;
}
