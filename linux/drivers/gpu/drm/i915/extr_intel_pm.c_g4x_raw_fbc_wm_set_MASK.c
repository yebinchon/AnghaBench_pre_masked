
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
struct TYPE_5__ {TYPE_4__ g4x; } ;
struct TYPE_7__ {TYPE_2__* crtc; } ;
struct intel_crtc_state {TYPE_1__ wm; TYPE_3__ base; } ;
struct g4x_pipe_wm {scalar_t__ fbc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int,int ) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct intel_crtc_state *VAR_1,
          int VAR_2, u16 VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_1->base.crtc->dev);
 bool VAR_5 = 0;


 VAR_2 = FUNC_1(VAR_2, VAR_0);

 for (; VAR_2 < FUNC_0(VAR_4); VAR_2++) {
  struct g4x_pipe_wm *VAR_6 = &VAR_1->wm.g4x.raw[VAR_2];

  VAR_5 |= VAR_6->fbc != VAR_3;
  VAR_6->fbc = VAR_3;
 }

 return VAR_5;
}
