
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_shared_dpll_state {int crtc_mask; } ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct intel_crtc {int pipe; } ;
struct intel_atomic_state {int base; } ;
struct TYPE_2__ {size_t id; } ;


 struct intel_shared_dpll_state* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct intel_atomic_state *VAR_0,
       const struct intel_crtc *VAR_1,
       const struct intel_shared_dpll *VAR_2)
{
 struct intel_shared_dpll_state *VAR_3;

 VAR_3 = FUNC_0(&VAR_0->base);
 VAR_3[VAR_2->info->id].crtc_mask &= ~(1 << VAR_1->pipe);
}
