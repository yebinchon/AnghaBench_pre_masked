
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ci_power_info {scalar_t__ caps_tcp_ramping; scalar_t__ caps_td_ramping; scalar_t__ caps_db_ramping; scalar_t__ caps_sq_ramping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct ci_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_5, const bool VAR_6)
{
 struct ci_power_info *VAR_7 = FUNC_2(VAR_5);
 u32 VAR_8;

 if (VAR_7->caps_sq_ramping) {
  VAR_8 = FUNC_0(VAR_2);
  if (VAR_6)
   VAR_8 |= VAR_0;
  else
   VAR_8 &= ~VAR_0;
  FUNC_1(VAR_2, VAR_8);
 }

 if (VAR_7->caps_db_ramping) {
  VAR_8 = FUNC_0(VAR_1);
  if (VAR_6)
   VAR_8 |= VAR_0;
  else
   VAR_8 &= ~VAR_0;
  FUNC_1(VAR_1, VAR_8);
 }

 if (VAR_7->caps_td_ramping) {
  VAR_8 = FUNC_0(VAR_4);
  if (VAR_6)
   VAR_8 |= VAR_0;
  else
   VAR_8 &= ~VAR_0;
  FUNC_1(VAR_4, VAR_8);
 }

 if (VAR_7->caps_tcp_ramping) {
  VAR_8 = FUNC_0(VAR_3);
  if (VAR_6)
   VAR_8 |= VAR_0;
  else
   VAR_8 &= ~VAR_0;
  FUNC_1(VAR_3, VAR_8);
 }
}
