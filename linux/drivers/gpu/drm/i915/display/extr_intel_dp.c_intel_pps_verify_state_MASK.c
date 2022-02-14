
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edp_power_seq {scalar_t__ t1_t3; scalar_t__ t8; scalar_t__ t9; scalar_t__ t10; scalar_t__ t11_t12; } ;
struct intel_dp {struct edp_power_seq pps_delays; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct edp_power_seq*) ;
 int FUNC_2 (struct intel_dp*,struct edp_power_seq*) ;

__attribute__((used)) static void
FUNC_3(struct intel_dp *VAR_0)
{
 struct edp_power_seq VAR_1;
 struct edp_power_seq *VAR_2 = &VAR_0->pps_delays;

 FUNC_2(VAR_0, &VAR_1);

 if (VAR_1.t1_t3 != VAR_2->t1_t3 || VAR_1.t8 != VAR_2->t8 || VAR_1.t9 != VAR_2->t9 ||
     VAR_1.t10 != VAR_2->t10 || VAR_1.t11_t12 != VAR_2->t11_t12) {
  FUNC_0("PPS state mismatch\n");
  FUNC_1("sw", VAR_2);
  FUNC_1("hw", &VAR_1);
 }
}
