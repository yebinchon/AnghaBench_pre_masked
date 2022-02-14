
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dpcd; } ;
struct intel_digital_port {int max_lanes; } ;


 struct intel_digital_port* FUNC_0 (struct intel_dp*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_digital_port*) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static int FUNC_4(struct intel_dp *VAR_0)
{
 struct intel_digital_port *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = VAR_1->max_lanes;
 int VAR_3 = FUNC_1(VAR_0->dpcd);
 int VAR_4 = FUNC_2(VAR_1);

 return FUNC_3(VAR_2, VAR_3, VAR_4);
}
