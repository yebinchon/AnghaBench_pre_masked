
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {struct icl_port_dpll* icl_port_dplls; int * shared_dpll; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;
struct icl_port_dpll {int * pll; } ;
typedef enum icl_port_dpll_id { ____Placeholder_icl_port_dpll_id } icl_port_dpll_id ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_crtc_state* FUNC_0 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_crtc_state* FUNC_1 (struct intel_atomic_state*,struct intel_crtc*) ;
 int FUNC_2 (struct intel_atomic_state*,struct intel_crtc*,int *) ;

__attribute__((used)) static void FUNC_3(struct intel_atomic_state *VAR_2,
     struct intel_crtc *VAR_3)
{
 const struct intel_crtc_state *VAR_4 =
  FUNC_1(VAR_2, VAR_3);
 struct intel_crtc_state *VAR_5 =
  FUNC_0(VAR_2, VAR_3);
 enum icl_port_dpll_id VAR_6;

 VAR_5->shared_dpll = ((void*)0);

 for (VAR_6 = VAR_1; VAR_6 < VAR_0; VAR_6++) {
  const struct icl_port_dpll *VAR_7 =
   &VAR_4->icl_port_dplls[VAR_6];
  struct icl_port_dpll *VAR_8 =
   &VAR_5->icl_port_dplls[VAR_6];

  VAR_8->pll = ((void*)0);

  if (!VAR_7->pll)
   continue;

  FUNC_2(VAR_2, VAR_3, VAR_7->pll);
 }
}
