
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kv_power_info {int cac_enabled; scalar_t__ caps_cac; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int ) ;
 struct kv_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_2, bool VAR_3)
{
 struct kv_power_info *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0;

 if (VAR_4->caps_cac) {
  if (VAR_3) {
   VAR_5 = FUNC_0(VAR_2, VAR_1);
   if (VAR_5)
    VAR_4->cac_enabled = 0;
   else
    VAR_4->cac_enabled = 1;
  } else if (VAR_4->cac_enabled) {
   FUNC_0(VAR_2, VAR_0);
   VAR_4->cac_enabled = 0;
  }
 }

 return VAR_5;
}
