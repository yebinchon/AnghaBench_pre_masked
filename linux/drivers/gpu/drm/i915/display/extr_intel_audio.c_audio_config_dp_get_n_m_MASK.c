
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {scalar_t__ port_clock; } ;
struct dp_aud_n_m {int sample_rate; scalar_t__ clock; } ;


 int FUNC_0 (struct dp_aud_n_m const*) ;
 struct dp_aud_n_m const* VAR_0 ;

__attribute__((used)) static const struct dp_aud_n_m *
FUNC_1(const struct intel_crtc_state *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_2 == VAR_0[VAR_3].sample_rate &&
      VAR_1->port_clock == VAR_0[VAR_3].clock)
   return &VAR_0[VAR_3];
 }

 return ((void*)0);
}
