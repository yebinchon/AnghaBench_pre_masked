
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t u32 ;
struct kv_power_info {TYPE_1__* graphics_level; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int SclkFrequency; } ;




 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct amdgpu_device*) ;
 struct kv_power_info* FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_5, int VAR_6,
         void *VAR_7, int *VAR_8)
{
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_5;
 struct kv_power_info *VAR_10 = FUNC_3(VAR_9);
 uint32_t VAR_11;
 u32 VAR_12 =
  (FUNC_0(VAR_4) &
  VAR_2) >>
  VAR_3;


 if (*VAR_8 < 4)
  return -VAR_0;

 switch (VAR_6) {
 case 129:
  if (VAR_12 < VAR_1) {
   VAR_11 = FUNC_1(
    VAR_10->graphics_level[VAR_12].SclkFrequency);
   *((uint32_t *)VAR_7) = VAR_11;
   *VAR_8 = 4;
   return 0;
  }
  return -VAR_0;
 case 128:
  *((uint32_t *)VAR_7) = FUNC_2(VAR_9);
  *VAR_8 = 4;
  return 0;
 default:
  return -VAR_0;
 }
}
