
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_crtc {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static enum drm_mode_status FUNC_1(struct drm_crtc *VAR_2,
         const struct drm_display_mode *VAR_3)
{
 if (FUNC_0(VAR_3->hdisplay, VAR_3->vdisplay, ((void*)0)) < 0)
  return VAR_0;
 return VAR_1;
}
