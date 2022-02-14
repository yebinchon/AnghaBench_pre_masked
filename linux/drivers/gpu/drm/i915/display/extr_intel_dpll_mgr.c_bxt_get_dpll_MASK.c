
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_shared_dpll {TYPE_3__* info; } ;
struct intel_encoder {scalar_t__ port; } ;
struct intel_crtc_state {struct intel_shared_dpll* shared_dpll; int dpll_hw_state; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {int name; TYPE_1__ base; int dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_crtc_state*) ;
 int FUNC_2 (struct intel_crtc_state*) ;
 struct intel_crtc_state* FUNC_3 (struct intel_atomic_state*,struct intel_crtc*) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_5 (struct intel_crtc_state*,int ) ;
 struct intel_shared_dpll* FUNC_6 (struct drm_i915_private*,int) ;
 int FUNC_7 (struct intel_atomic_state*,struct intel_crtc*,struct intel_shared_dpll*,int *) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(struct intel_atomic_state *VAR_1,
    struct intel_crtc *VAR_2,
    struct intel_encoder *VAR_3)
{
 struct intel_crtc_state *VAR_4 =
  FUNC_3(VAR_1, VAR_2);
 struct drm_i915_private *VAR_5 = FUNC_8(VAR_2->base.dev);
 struct intel_shared_dpll *VAR_6;
 enum intel_dpll_id VAR_7;

 if (FUNC_5(VAR_4, VAR_0) &&
     !FUNC_2(VAR_4))
  return 0;

 if (FUNC_4(VAR_4) &&
     !FUNC_1(VAR_4))
  return 0;


 VAR_7 = (enum intel_dpll_id) VAR_3->port;
 VAR_6 = FUNC_6(VAR_5, VAR_7);

 FUNC_0("[CRTC:%d:%s] using pre-allocated %s\n",
        VAR_2->base.base.id, VAR_2->base.name, VAR_6->info->name);

 FUNC_7(VAR_1, VAR_2,
        VAR_6, &VAR_4->dpll_hw_state);

 VAR_4->shared_dpll = VAR_6;

 return 1;
}
