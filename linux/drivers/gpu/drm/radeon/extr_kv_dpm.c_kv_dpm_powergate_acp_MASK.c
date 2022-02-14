
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; } ;
struct kv_power_info {int acp_power_gated; scalar_t__ caps_acp_pg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kv_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int ) ;
 int FUNC_2 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_4, bool VAR_5)
{
 struct kv_power_info *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->acp_power_gated == VAR_5)
  return;

 if (VAR_4->family == VAR_0 || VAR_4->family == VAR_1)
  return;

 VAR_6->acp_power_gated = VAR_5;

 if (VAR_5) {
  FUNC_2(VAR_4, 1);
  if (VAR_6->caps_acp_pg)
   FUNC_1(VAR_4, VAR_2);
 } else {
  if (VAR_6->caps_acp_pg)
   FUNC_1(VAR_4, VAR_3);
  FUNC_2(VAR_4, 0);
 }
}
