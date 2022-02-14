
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_dp_mst_encoder {struct intel_digital_port* primary; } ;
struct intel_digital_port {int base; } ;
struct intel_crtc_state {int dummy; } ;


 struct intel_dp_mst_encoder* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct intel_crtc_state*) ;

__attribute__((used)) static void FUNC_2(struct intel_encoder *VAR_0,
     struct intel_crtc_state *VAR_1)
{
 struct intel_dp_mst_encoder *VAR_2 = FUNC_0(&VAR_0->base);
 struct intel_digital_port *VAR_3 = VAR_2->primary;

 FUNC_1(&VAR_3->base, VAR_1);
}
