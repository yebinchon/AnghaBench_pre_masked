
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_dp {int DP; int lane_count; } ;
struct intel_digital_port {int saved_port_bits; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct intel_digital_port* FUNC_2 (int *) ;
 struct intel_dp* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_1)
{
 struct intel_dp *VAR_2 = FUNC_3(&VAR_1->base);
 struct intel_digital_port *VAR_3 =
  FUNC_2(&VAR_1->base);

 VAR_2->DP = VAR_3->saved_port_bits |
  VAR_0 | FUNC_0(0);
 VAR_2->DP |= FUNC_1(VAR_2->lane_count);
}
