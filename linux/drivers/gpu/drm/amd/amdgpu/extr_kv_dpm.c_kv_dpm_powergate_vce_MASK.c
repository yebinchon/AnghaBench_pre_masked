
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kv_power_info {int vce_power_gated; scalar_t__ caps_vce_pg; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ) ;
 int FUNC_1 (struct amdgpu_device*,int ) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 struct kv_power_info* FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_4(void *VAR_5, bool VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_5;
 struct kv_power_info *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;

 VAR_8->vce_power_gated = VAR_6;

 if (VAR_6) {

  VAR_9 = FUNC_0(VAR_7, VAR_0,
            VAR_1);
  FUNC_2(VAR_7, 0);
  if (VAR_8->caps_vce_pg)
   FUNC_1(VAR_7, VAR_3);
 } else {
  if (VAR_8->caps_vce_pg)
   FUNC_1(VAR_7, VAR_4);
  FUNC_2(VAR_7, 1);

  VAR_9 = FUNC_0(VAR_7, VAR_0,
            VAR_2);
 }
}
