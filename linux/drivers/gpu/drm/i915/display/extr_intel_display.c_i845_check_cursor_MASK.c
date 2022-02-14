
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ visible; int crtc_h; int crtc_w; struct drm_framebuffer* fb; } ;
struct intel_plane_state {int ctl; TYPE_1__* color_plane; TYPE_2__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_framebuffer {int* pitches; } ;
struct TYPE_3__ {int stride; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_4 (struct intel_plane_state*) ;
 int FUNC_5 (struct intel_crtc_state*,struct intel_plane_state*) ;

__attribute__((used)) static int FUNC_6(struct intel_crtc_state *VAR_1,
        struct intel_plane_state *VAR_2)
{
 const struct drm_framebuffer *VAR_3 = VAR_2->base.fb;
 int VAR_4;

 VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;


 if (!VAR_3)
  return 0;


 if (!FUNC_4(VAR_2)) {
  FUNC_0("Cursor dimension %dx%d not supported\n",
     VAR_2->base.crtc_w,
     VAR_2->base.crtc_h);
  return -VAR_0;
 }

 FUNC_2(VAR_2->base.visible &&
  VAR_2->color_plane[0].stride != VAR_3->pitches[0]);

 switch (VAR_3->pitches[0]) {
 case 256:
 case 512:
 case 1024:
 case 2048:
  break;
 default:
  FUNC_1("Invalid cursor stride (%u)\n",
         VAR_3->pitches[0]);
  return -VAR_0;
 }

 VAR_2->ctl = FUNC_3(VAR_1, VAR_2);

 return 0;
}
