
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gtt_range {int dummy; } ;
struct drm_crtc_helper_funcs {int (* dpms ) (struct drm_crtc*,int ) ;} ;
struct drm_crtc {TYPE_2__* primary; struct drm_crtc_helper_funcs* helper_private; } ;
struct TYPE_4__ {TYPE_1__* fb; } ;
struct TYPE_3__ {int * obj; } ;


 int VAR_0 ;
 int FUNC_0 (struct gtt_range*) ;
 int FUNC_1 (struct drm_crtc*,int ) ;
 struct gtt_range* FUNC_2 (int ) ;

void FUNC_3(struct drm_crtc *VAR_1)
{
 struct gtt_range *VAR_2;
 const struct drm_crtc_helper_funcs *VAR_3 = VAR_1->helper_private;

 VAR_3->dpms(VAR_1, VAR_0);

 if (VAR_1->primary->fb) {
  VAR_2 = FUNC_2(VAR_1->primary->fb->obj[0]);
  FUNC_0(VAR_2);
 }
}
