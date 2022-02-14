
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct kv_power_info {int vce_power_gated; scalar_t__ caps_vce_pg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kv_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int ) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_2, bool VAR_3)
{
 struct kv_power_info *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->vce_power_gated == VAR_3)
  return;

 VAR_4->vce_power_gated = VAR_3;

 if (VAR_3) {
  if (VAR_4->caps_vce_pg) {

   FUNC_1(VAR_2, VAR_0);
  }
 } else {
  if (VAR_4->caps_vce_pg) {
   FUNC_1(VAR_2, VAR_1);
   FUNC_3(VAR_2);
   FUNC_2(VAR_2);
  }
 }
}
