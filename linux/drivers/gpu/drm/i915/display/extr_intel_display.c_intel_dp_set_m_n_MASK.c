
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_link_m_n {int dummy; } ;
struct intel_crtc_state {struct intel_link_m_n dp_m_n; scalar_t__ has_pch_encoder; struct intel_link_m_n dp_m2_n2; } ;
typedef enum link_m_n_set { ____Placeholder_link_m_n_set } link_m_n_set ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct intel_crtc_state const*,struct intel_link_m_n const*,struct intel_link_m_n const*) ;
 int FUNC_2 (struct intel_crtc_state const*,struct intel_link_m_n*) ;

void FUNC_3(const struct intel_crtc_state *VAR_2, enum link_m_n_set VAR_3)
{
 const struct intel_link_m_n *VAR_4, *VAR_5 = ((void*)0);

 if (VAR_3 == VAR_0) {
  VAR_4 = &VAR_2->dp_m_n;
  VAR_5 = &VAR_2->dp_m2_n2;
 } else if (VAR_3 == VAR_1) {





  VAR_4 = &VAR_2->dp_m2_n2;
 } else {
  FUNC_0("Unsupported divider value\n");
  return;
 }

 if (VAR_2->has_pch_encoder)
  FUNC_2(VAR_2, &VAR_2->dp_m_n);
 else
  FUNC_1(VAR_2, VAR_4, VAR_5);
}
