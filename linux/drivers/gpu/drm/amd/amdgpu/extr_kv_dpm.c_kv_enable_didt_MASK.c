
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kv_power_info {scalar_t__ caps_tcp_ramping; scalar_t__ caps_td_ramping; scalar_t__ caps_db_ramping; scalar_t__ caps_sq_ramping; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 struct kv_power_info* FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_1, bool VAR_2)
{
 struct kv_power_info *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 if (VAR_3->caps_sq_ramping ||
     VAR_3->caps_db_ramping ||
     VAR_3->caps_td_ramping ||
     VAR_3->caps_tcp_ramping) {
  FUNC_0(VAR_1);

  if (VAR_2) {
   VAR_4 = FUNC_4(VAR_1, VAR_0);
   if (VAR_4) {
    FUNC_1(VAR_1);
    return VAR_4;
   }
  }

  FUNC_2(VAR_1, VAR_2);

  FUNC_1(VAR_1);
 }

 return 0;
}
