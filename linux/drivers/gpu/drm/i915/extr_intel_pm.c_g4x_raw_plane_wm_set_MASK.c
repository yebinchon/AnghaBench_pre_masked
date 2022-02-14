
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_8__ {struct g4x_pipe_wm* raw; } ;
struct TYPE_7__ {TYPE_4__ g4x; } ;
struct TYPE_6__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {TYPE_3__ wm; TYPE_2__ base; } ;
struct g4x_pipe_wm {scalar_t__* plane; } ;
struct drm_i915_private {int dummy; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct intel_crtc_state *VAR_0,
     int VAR_1, enum plane_id VAR_2, u16 VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_1(VAR_0->base.crtc->dev);
 bool VAR_5 = 0;

 for (; VAR_1 < FUNC_0(VAR_4); VAR_1++) {
  struct g4x_pipe_wm *VAR_6 = &VAR_0->wm.g4x.raw[VAR_1];

  VAR_5 |= VAR_6->plane[VAR_2] != VAR_3;
  VAR_6->plane[VAR_2] = VAR_3;
 }

 return VAR_5;
}
