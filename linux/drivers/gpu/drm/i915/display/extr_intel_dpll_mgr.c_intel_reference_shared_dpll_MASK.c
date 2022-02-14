
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dpll_hw_state {int dummy; } ;
struct intel_shared_dpll_state {int crtc_mask; struct intel_dpll_hw_state hw_state; } ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct intel_crtc {int pipe; } ;
struct intel_atomic_state {int base; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_2__ {int id; int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 struct intel_shared_dpll_state* FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct intel_atomic_state *VAR_0,
       const struct intel_crtc *VAR_1,
       const struct intel_shared_dpll *VAR_2,
       const struct intel_dpll_hw_state *VAR_3)
{
 struct intel_shared_dpll_state *VAR_4;
 const enum intel_dpll_id VAR_5 = VAR_2->info->id;

 VAR_4 = FUNC_1(&VAR_0->base);

 if (VAR_4[VAR_5].crtc_mask == 0)
  VAR_4[VAR_5].hw_state = *VAR_3;

 FUNC_0("using %s for pipe %c\n", VAR_2->info->name,
    FUNC_2(VAR_1->pipe));

 VAR_4[VAR_5].crtc_mask |= 1 << VAR_1->pipe;
}
