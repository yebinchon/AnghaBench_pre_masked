
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kv_power_info {scalar_t__ caps_tcp_ramping; scalar_t__ caps_td_ramping; scalar_t__ caps_db_ramping; scalar_t__ caps_sq_ramping; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct kv_power_info* FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_8, bool VAR_9)
{
 struct kv_power_info *VAR_10 = FUNC_2(VAR_8);
 u32 VAR_11;

 if (VAR_10->caps_sq_ramping) {
  VAR_11 = FUNC_0(VAR_5);
  if (VAR_9)
   VAR_11 |= VAR_1;
  else
   VAR_11 &= ~VAR_1;
  FUNC_1(VAR_5, VAR_11);
 }

 if (VAR_10->caps_db_ramping) {
  VAR_11 = FUNC_0(VAR_4);
  if (VAR_9)
   VAR_11 |= VAR_0;
  else
   VAR_11 &= ~VAR_0;
  FUNC_1(VAR_4, VAR_11);
 }

 if (VAR_10->caps_td_ramping) {
  VAR_11 = FUNC_0(VAR_7);
  if (VAR_9)
   VAR_11 |= VAR_3;
  else
   VAR_11 &= ~VAR_3;
  FUNC_1(VAR_7, VAR_11);
 }

 if (VAR_10->caps_tcp_ramping) {
  VAR_11 = FUNC_0(VAR_6);
  if (VAR_9)
   VAR_11 |= VAR_2;
  else
   VAR_11 &= ~VAR_2;
  FUNC_1(VAR_6, VAR_11);
 }
}
