
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kv_power_info {int lowest_valid; int highest_valid; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;
 struct kv_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3, VAR_4 = 0;

 for (VAR_3 = VAR_2->lowest_valid; VAR_3 <= VAR_2->highest_valid; VAR_3++)
  VAR_4 |= (1 << VAR_3);

 return FUNC_0(VAR_1,
       VAR_0,
       VAR_4);
}
