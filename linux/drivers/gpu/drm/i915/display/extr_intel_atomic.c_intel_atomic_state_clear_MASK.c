
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_atomic_state {int dpll_set; int modeset; int base; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (int *) ;
 struct intel_atomic_state* FUNC_1 (struct drm_atomic_state*) ;

void FUNC_2(struct drm_atomic_state *VAR_0)
{
 struct intel_atomic_state *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->base);
 VAR_1->dpll_set = VAR_1->modeset = 0;
}
