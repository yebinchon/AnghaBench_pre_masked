
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int flags; } ;
struct TYPE_2__ {int id; } ;
struct drm_crtc {TYPE_1__ base; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum drm_mode_status FUNC_1(struct drm_crtc *VAR_3,
      const struct drm_display_mode *VAR_4)
{

 if (VAR_4->flags & VAR_0) {
  FUNC_0("[CRTC:%d] Doublescan mode rejected.\n",
         VAR_3->base.id);
  return VAR_1;
 }

 return VAR_2;
}
