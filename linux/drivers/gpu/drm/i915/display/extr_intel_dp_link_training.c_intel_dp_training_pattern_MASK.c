
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dp {int link_rate; int dpcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;

__attribute__((used)) static u32 FUNC_5(struct intel_dp *VAR_3)
{
 bool VAR_4, VAR_5, VAR_6, VAR_7;







 VAR_6 = FUNC_4(VAR_3);
 VAR_7 = FUNC_2(VAR_3->dpcd);
 if (VAR_6 && VAR_7) {
  return VAR_2;
 } else if (VAR_3->link_rate == 810000) {
  if (!VAR_6)
   FUNC_0("8.1 Gbps link rate without source HBR3/TPS4 support\n");
  if (!VAR_7)
   FUNC_0("8.1 Gbps link rate without sink TPS4 support\n");
 }





 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_1(VAR_3->dpcd);
 if (VAR_4 && VAR_5) {
  return VAR_1;
 } else if (VAR_3->link_rate >= 540000) {
  if (!VAR_4)
   FUNC_0(">=5.4/6.48 Gbps link rate without source HBR2/TPS3 support\n");
  if (!VAR_5)
   FUNC_0(">=5.4/6.48 Gbps link rate without sink TPS3 support\n");
 }

 return VAR_0;
}
