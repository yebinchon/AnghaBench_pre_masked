
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kv_power_info {scalar_t__ lowest_valid; scalar_t__ highest_valid; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,int) ;
 struct kv_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_3 >= VAR_2->lowest_valid && VAR_3 <= VAR_2->highest_valid)
   FUNC_0(VAR_1, VAR_3, 1);
 }
}
