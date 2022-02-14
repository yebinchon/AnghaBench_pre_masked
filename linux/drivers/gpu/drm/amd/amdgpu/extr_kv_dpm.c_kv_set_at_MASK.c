
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct kv_power_info {TYPE_1__* graphics_level; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int AT; } ;


 int FUNC_0 (int ) ;
 struct kv_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct kv_power_info *VAR_3 = FUNC_1(VAR_0);

 VAR_3->graphics_level[VAR_1].AT = FUNC_0((u16)VAR_2);

 return 0;
}
