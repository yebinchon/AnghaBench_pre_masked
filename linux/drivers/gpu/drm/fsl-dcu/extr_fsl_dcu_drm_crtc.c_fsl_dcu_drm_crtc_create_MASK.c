
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {int dummy; } ;
struct fsl_dcu_drm_device {int drm; struct drm_crtc crtc; } ;
struct drm_plane {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* destroy ) (struct drm_plane*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (int ,struct drm_crtc*,struct drm_plane*,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct drm_plane* FUNC_3 (int ) ;
 int FUNC_4 (struct drm_plane*) ;

int FUNC_5(struct fsl_dcu_drm_device *VAR_3)
{
 struct drm_plane *VAR_4;
 struct drm_crtc *VAR_5 = &VAR_3->crtc;
 int VAR_6;

 FUNC_2(VAR_3->drm);

 VAR_4 = FUNC_3(VAR_3->drm);
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3->drm, VAR_5, VAR_4, ((void*)0),
     &VAR_1, ((void*)0));
 if (VAR_6) {
  VAR_4->funcs->destroy(VAR_4);
  return VAR_6;
 }

 FUNC_0(VAR_5, &VAR_2);

 return 0;
}
