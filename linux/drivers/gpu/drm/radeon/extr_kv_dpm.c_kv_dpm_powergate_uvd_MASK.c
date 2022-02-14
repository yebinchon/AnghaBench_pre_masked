
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct kv_power_info {int uvd_power_gated; scalar_t__ caps_uvd_pg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*,int ,int) ;
 struct kv_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int ) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

void FUNC_7(struct radeon_device *VAR_3, bool VAR_4)
{
 struct kv_power_info *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->uvd_power_gated == VAR_4)
  return;

 VAR_5->uvd_power_gated = VAR_4;

 if (VAR_4) {
  if (VAR_5->caps_uvd_pg) {
   FUNC_5(VAR_3);
   FUNC_0(VAR_3, VAR_2, 0);
  }
  FUNC_3(VAR_3, VAR_4);
  if (VAR_5->caps_uvd_pg)
   FUNC_2(VAR_3, VAR_0);
 } else {
  if (VAR_5->caps_uvd_pg) {
   FUNC_2(VAR_3, VAR_1);
   FUNC_6(VAR_3);
   FUNC_4(VAR_3);
   FUNC_0(VAR_3, VAR_2, 1);
  }
  FUNC_3(VAR_3, VAR_4);
 }
}
