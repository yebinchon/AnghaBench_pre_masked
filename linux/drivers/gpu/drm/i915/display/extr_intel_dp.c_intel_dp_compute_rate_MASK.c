
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct intel_dp {scalar_t__ use_rate_select; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct intel_dp*,int) ;

void FUNC_2(struct intel_dp *VAR_0, int VAR_1,
      u8 *VAR_2, u8 *VAR_3)
{

 if (VAR_0->use_rate_select) {
  *VAR_2 = 0;
  *VAR_3 =
   FUNC_1(VAR_0, VAR_1);
 } else {
  *VAR_2 = FUNC_0(VAR_1);
  *VAR_3 = 0;
 }
}
