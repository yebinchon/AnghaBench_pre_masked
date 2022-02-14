
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skl_wm_params {int dummy; } ;
struct TYPE_2__ {int crtc_w; int rotation; int src; struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct intel_plane {scalar_t__ id; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_framebuffer {int modifier; int format; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct intel_crtc_state const*,struct intel_plane_state const*) ;
 int FUNC_2 (struct intel_crtc_state const*,int,int ,int ,int ,int ,struct skl_wm_params*,int) ;
 struct intel_plane* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(const struct intel_crtc_state *VAR_1,
       const struct intel_plane_state *VAR_2,
       struct skl_wm_params *VAR_3, int VAR_4)
{
 struct intel_plane *VAR_5 = FUNC_3(VAR_2->base.plane);
 const struct drm_framebuffer *VAR_6 = VAR_2->base.fb;
 int VAR_7;

 if (VAR_5->id == VAR_0) {
  VAR_7 = VAR_2->base.crtc_w;
 } else {





  VAR_7 = FUNC_0(&VAR_2->base.src) >> 16;
 }

 return FUNC_2(VAR_1, VAR_7,
         VAR_6->format, VAR_6->modifier,
         VAR_2->base.rotation,
         FUNC_1(VAR_1, VAR_2),
         VAR_3, VAR_4);
}
