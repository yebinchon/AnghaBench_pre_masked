
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dvo_device {int dummy; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int clock; int vtotal; int htotal; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int FUNC_0 (char*,int,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum drm_mode_status FUNC_1(struct intel_dvo_device *VAR_2,
           struct drm_display_mode *VAR_3)
{
 FUNC_0
     ("is mode valid (hdisplay=%d,htotal=%d,vdisplay=%d,vtotal=%d)\n",
      VAR_3->hdisplay, VAR_3->htotal, VAR_3->vdisplay, VAR_3->vtotal);







 if ((VAR_3->hdisplay == 640 && VAR_3->vdisplay == 480 && VAR_3->clock == 25175) ||
     (VAR_3->hdisplay == 800 && VAR_3->vdisplay == 600 && VAR_3->clock == 40000) ||
     (VAR_3->hdisplay == 1024 && VAR_3->vdisplay == 768 && VAR_3->clock == 65000)) {
  return VAR_0;
 } else {
  return VAR_1;
 }
}
