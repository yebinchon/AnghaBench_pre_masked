
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ci_power_info {scalar_t__ caps_sclk_ss_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 struct ci_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_4, bool VAR_5)
{
 struct ci_power_info *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7;

 if (VAR_5) {
  if (VAR_6->caps_sclk_ss_support) {
   VAR_7 = FUNC_0(VAR_2);
   VAR_7 |= VAR_1;
   FUNC_1(VAR_2, VAR_7);
  }
 } else {
  VAR_7 = FUNC_0(VAR_0);
  VAR_7 &= ~VAR_3;
  FUNC_1(VAR_0, VAR_7);

  VAR_7 = FUNC_0(VAR_2);
  VAR_7 &= ~VAR_1;
  FUNC_1(VAR_2, VAR_7);
 }
}
