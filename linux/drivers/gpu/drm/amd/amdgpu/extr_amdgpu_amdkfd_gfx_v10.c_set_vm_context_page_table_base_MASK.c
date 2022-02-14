
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct TYPE_2__ {int max_pfn; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 struct amdgpu_device* FUNC_3 (struct kgd_dev*) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct kgd_dev *VAR_8, uint32_t VAR_9,
  uint64_t VAR_10)
{
 struct amdgpu_device *VAR_11 = FUNC_3(VAR_8);
 uint64_t VAR_12 = VAR_10 | VAR_0;

 if (!FUNC_2(VAR_11, VAR_9)) {
  FUNC_5("trying to set page table base for wrong VMID %u\n",
         VAR_9);
  return;
 }





 FUNC_1(FUNC_0(VAR_1, 0, VAR_7) + (VAR_9*2), 0);
 FUNC_1(FUNC_0(VAR_1, 0, VAR_6) + (VAR_9*2), 0);

 FUNC_1(FUNC_0(VAR_1, 0, VAR_5) + (VAR_9*2),
   FUNC_4(VAR_11->vm_manager.max_pfn - 1));
 FUNC_1(FUNC_0(VAR_1, 0, VAR_4) + (VAR_9*2),
   FUNC_6(VAR_11->vm_manager.max_pfn - 1));

 FUNC_1(FUNC_0(VAR_1, 0, VAR_3) + (VAR_9*2), FUNC_4(VAR_12));
 FUNC_1(FUNC_0(VAR_1, 0, VAR_2) + (VAR_9*2), FUNC_6(VAR_12));
}
