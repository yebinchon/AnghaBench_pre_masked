
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ) ;
 struct amdgpu_device* FUNC_1 (struct kgd_dev*) ;
 int FUNC_2 (struct amdgpu_device*,int ,int ) ;
 int FUNC_3 (struct amdgpu_device*,int ,int ) ;
 int FUNC_4 (struct amdgpu_device*,int,int ,int ) ;
 int FUNC_5 (char*,int ) ;

void FUNC_6(struct kgd_dev *VAR_1, uint32_t VAR_2,
  uint64_t VAR_3)
{
 struct amdgpu_device *VAR_4 = FUNC_1(VAR_1);

 if (!FUNC_0(VAR_4, VAR_2)) {
  FUNC_5("trying to set page table base for wrong VMID %u\n",
         VAR_2);
  return;
 }





 if (VAR_4->asic_type == VAR_0) {

  FUNC_4(VAR_4, 0, VAR_2, VAR_3);
  FUNC_4(VAR_4, 1, VAR_2, VAR_3);
 } else
  FUNC_3(VAR_4, VAR_2, VAR_3);

 FUNC_2(VAR_4, VAR_2, VAR_3);
}
