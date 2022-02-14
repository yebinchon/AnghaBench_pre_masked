
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int dp_m2_n2; int dp_m_n; int cpu_transcoder; scalar_t__ has_pch_encoder; } ;
struct intel_crtc {int dummy; } ;


 int FUNC_0 (struct intel_crtc*,int ,int *,int *) ;
 int FUNC_1 (struct intel_crtc*,int *) ;

void FUNC_2(struct intel_crtc *VAR_0,
        struct intel_crtc_state *VAR_1)
{
 if (VAR_1->has_pch_encoder)
  FUNC_1(VAR_0, &VAR_1->dp_m_n);
 else
  FUNC_0(VAR_0, VAR_1->cpu_transcoder,
          &VAR_1->dp_m_n,
          &VAR_1->dp_m2_n2);
}
