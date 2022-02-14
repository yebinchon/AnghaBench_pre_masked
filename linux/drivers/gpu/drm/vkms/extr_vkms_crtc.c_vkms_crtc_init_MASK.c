
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vkms_output {int composer_workq; int composer_lock; int lock; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct drm_crtc*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_crtc*,struct drm_plane*,struct drm_plane*,int *,int *) ;
 struct vkms_output* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_6(struct drm_device *VAR_3, struct drm_crtc *VAR_4,
     struct drm_plane *VAR_5, struct drm_plane *VAR_6)
{
 struct vkms_output *VAR_7 = FUNC_4(VAR_4);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6,
     &VAR_1, ((void*)0));
 if (VAR_8) {
  FUNC_0("Failed to init CRTC\n");
  return VAR_8;
 }

 FUNC_2(VAR_4, &VAR_2);

 FUNC_5(&VAR_7->lock);
 FUNC_5(&VAR_7->composer_lock);

 VAR_7->composer_workq = FUNC_1("vkms_composer", 0);
 if (!VAR_7->composer_workq)
  return -VAR_0;

 return VAR_8;
}
