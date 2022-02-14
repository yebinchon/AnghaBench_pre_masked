
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int fdi_m_n; int cpu_transcoder; } ;
struct intel_crtc {int dummy; } ;


 int FUNC_0 (struct intel_crtc*,int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct intel_crtc *VAR_0,
     struct intel_crtc_state *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->cpu_transcoder,
         &VAR_1->fdi_m_n, ((void*)0));
}
