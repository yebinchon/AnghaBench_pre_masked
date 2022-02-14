
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int aux; } ;
struct intel_crtc_state {int fec_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_dp *VAR_2,
     const struct intel_crtc_state *VAR_3)
{
 if (!VAR_3->fec_enable)
  return;

 if (FUNC_1(&VAR_2->aux, VAR_0, VAR_1) <= 0)
  FUNC_0("Failed to set FEC_READY in the sink\n");
}
