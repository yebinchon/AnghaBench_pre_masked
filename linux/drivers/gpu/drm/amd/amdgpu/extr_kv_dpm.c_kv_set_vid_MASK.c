
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct kv_power_info {TYPE_1__* graphics_level; scalar_t__ voltage_drop_t; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int MinVddNb; scalar_t__ VoltageDownH; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*,size_t) ;
 struct kv_power_info* FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct kv_power_info *VAR_3 = FUNC_2(VAR_0);

 VAR_3->graphics_level[VAR_1].VoltageDownH = (u8)VAR_3->voltage_drop_t;
 VAR_3->graphics_level[VAR_1].MinVddNb =
  FUNC_0(FUNC_1(VAR_0, VAR_2));

 return 0;
}
