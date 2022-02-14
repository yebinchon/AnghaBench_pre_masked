
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_shared_dpll_state {int dummy; } ;
struct intel_atomic_state {int dpll_set; struct intel_shared_dpll_state* shared_dpll; } ;
struct drm_atomic_state {TYPE_2__* dev; } ;
struct TYPE_3__ {int connection_mutex; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct intel_shared_dpll_state*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct intel_atomic_state* FUNC_4 (struct drm_atomic_state*) ;

__attribute__((used)) static struct intel_shared_dpll_state *
FUNC_5(struct drm_atomic_state *VAR_0)
{
 struct intel_atomic_state *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(!FUNC_1(&VAR_0->dev->mode_config.connection_mutex));

 if (!VAR_1->dpll_set) {
  VAR_1->dpll_set = 1;

  FUNC_2(FUNC_3(VAR_0->dev),
        VAR_1->shared_dpll);
 }

 return VAR_1->shared_dpll;
}
