
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int * shared_dpll; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;


 struct intel_crtc_state* FUNC_0 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_crtc_state* FUNC_1 (struct intel_atomic_state*,struct intel_crtc*) ;
 int FUNC_2 (struct intel_atomic_state*,struct intel_crtc*,int *) ;

__attribute__((used)) static void FUNC_3(struct intel_atomic_state *VAR_0,
      struct intel_crtc *VAR_1)
{
 const struct intel_crtc_state *VAR_2 =
  FUNC_1(VAR_0, VAR_1);
 struct intel_crtc_state *VAR_3 =
  FUNC_0(VAR_0, VAR_1);

 VAR_3->shared_dpll = ((void*)0);

 if (!VAR_2->shared_dpll)
  return;

 FUNC_2(VAR_0, VAR_1, VAR_2->shared_dpll);
}
