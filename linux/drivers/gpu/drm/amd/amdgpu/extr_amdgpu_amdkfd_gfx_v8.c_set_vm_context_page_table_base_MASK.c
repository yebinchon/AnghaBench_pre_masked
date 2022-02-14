
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct amdgpu_device*,scalar_t__) ;
 struct amdgpu_device* FUNC_2 (struct kgd_dev*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct kgd_dev *VAR_1, uint32_t VAR_2,
  uint64_t VAR_3)
{
 struct amdgpu_device *VAR_4 = FUNC_2(VAR_1);

 if (!FUNC_1(VAR_4, VAR_2)) {
  FUNC_4("trying to set page table base for wrong VMID\n");
  return;
 }
 FUNC_0(VAR_0 + VAR_2 - 8,
   FUNC_3(VAR_3));
}
