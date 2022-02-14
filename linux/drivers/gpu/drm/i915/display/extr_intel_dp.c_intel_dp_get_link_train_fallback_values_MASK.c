
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int max_link_lane_count; int max_link_rate; int * common_rates; int num_common_rates; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct intel_dp*,int ,int) ;
 scalar_t__ FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (int *,int ,int) ;

int FUNC_6(struct intel_dp *VAR_0,
         int VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_5(VAR_0->common_rates,
        VAR_0->num_common_rates,
        VAR_1);
 if (VAR_3 > 0) {
  if (FUNC_3(VAR_0) &&
      !FUNC_2(VAR_0,
             VAR_0->common_rates[VAR_3 - 1],
             VAR_2)) {
   FUNC_0("Retrying Link training for eDP with same parameters\n");
   return 0;
  }
  VAR_0->max_link_rate = VAR_0->common_rates[VAR_3 - 1];
  VAR_0->max_link_lane_count = VAR_2;
 } else if (VAR_2 > 1) {
  if (FUNC_3(VAR_0) &&
      !FUNC_2(VAR_0,
             FUNC_4(VAR_0),
             VAR_2 >> 1)) {
   FUNC_0("Retrying Link training for eDP with same parameters\n");
   return 0;
  }
  VAR_0->max_link_rate = FUNC_4(VAR_0);
  VAR_0->max_link_lane_count = VAR_2 >> 1;
 } else {
  FUNC_1("Link Training Unsuccessful\n");
  return -1;
 }

 return 0;
}
