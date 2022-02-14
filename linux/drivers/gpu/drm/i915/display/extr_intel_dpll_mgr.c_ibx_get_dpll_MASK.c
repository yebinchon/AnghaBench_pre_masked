
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_shared_dpll {TYPE_3__* info; } ;
struct intel_encoder {int dummy; } ;
struct intel_crtc_state {struct intel_shared_dpll* shared_dpll; int dpll_hw_state; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {int name; TYPE_1__ base; int dev; } ;
struct intel_crtc {TYPE_2__ base; scalar_t__ pipe; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_i915_private {struct intel_shared_dpll* shared_dplls; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 struct intel_crtc_state* FUNC_2 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_shared_dpll* FUNC_3 (struct intel_atomic_state*,struct intel_crtc*,int *,int ,int ) ;
 int FUNC_4 (struct intel_atomic_state*,struct intel_crtc*,struct intel_shared_dpll*,int *) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct intel_atomic_state *VAR_2,
    struct intel_crtc *VAR_3,
    struct intel_encoder *VAR_4)
{
 struct intel_crtc_state *VAR_5 =
  FUNC_2(VAR_2, VAR_3);
 struct drm_i915_private *VAR_6 = FUNC_5(VAR_3->base.dev);
 struct intel_shared_dpll *VAR_7;
 enum intel_dpll_id VAR_8;

 if (FUNC_1(VAR_6)) {

  VAR_8 = (enum intel_dpll_id) VAR_3->pipe;
  VAR_7 = &VAR_6->shared_dplls[VAR_8];

  FUNC_0("[CRTC:%d:%s] using pre-allocated %s\n",
         VAR_3->base.base.id, VAR_3->base.name,
         VAR_7->info->name);
 } else {
  VAR_7 = FUNC_3(VAR_2, VAR_3,
          &VAR_5->dpll_hw_state,
          VAR_0,
          VAR_1);
 }

 if (!VAR_7)
  return 0;


 FUNC_4(VAR_2, VAR_3,
        VAR_7, &VAR_5->dpll_hw_state);

 VAR_5->shared_dpll = VAR_7;

 return 1;
}
