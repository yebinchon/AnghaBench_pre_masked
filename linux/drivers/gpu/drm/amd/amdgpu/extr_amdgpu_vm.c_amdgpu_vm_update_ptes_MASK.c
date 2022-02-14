
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct amdgpu_vm_update_params {int vm; struct amdgpu_device* adev; } ;
struct amdgpu_vm_pt_cursor {unsigned int pfn; int level; TYPE_2__* entry; } ;
struct TYPE_6__ {int root_level; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ vm_manager; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_4__ {struct amdgpu_bo* bo; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct amdgpu_device*,int ,struct amdgpu_vm_pt_cursor*) ;
 unsigned int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_vm_update_params*,unsigned int,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_4 (struct amdgpu_device*,int ,struct amdgpu_vm_pt_cursor*) ;
 unsigned int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_vm_pt_cursor*) ;
 scalar_t__ FUNC_7 (struct amdgpu_device*,struct amdgpu_vm_pt_cursor*) ;
 int FUNC_8 (struct amdgpu_device*,struct amdgpu_vm_pt_cursor*) ;
 int FUNC_9 (struct amdgpu_device*,int ,unsigned int,struct amdgpu_vm_pt_cursor*) ;
 int FUNC_10 (struct amdgpu_vm_update_params*,struct amdgpu_bo*,int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_11 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_vm_update_params *VAR_5,
     uint64_t VAR_6, uint64_t VAR_7,
     uint64_t VAR_8, uint64_t VAR_9)
{
 struct amdgpu_device *VAR_10 = VAR_5->adev;
 struct amdgpu_vm_pt_cursor VAR_11;
 uint64_t VAR_12 = VAR_6, VAR_13;
 unsigned int VAR_14;
 int VAR_15;


 FUNC_3(VAR_5, VAR_12, VAR_7, VAR_9, &VAR_14, &VAR_13);


 FUNC_9(VAR_10, VAR_5->vm, VAR_6, &VAR_11);
 while (VAR_11.pfn < VAR_7) {
  unsigned VAR_16, VAR_17, VAR_18;
  uint64_t VAR_19, VAR_20, VAR_21;
  struct amdgpu_bo *VAR_22;

  VAR_15 = FUNC_1(VAR_5->adev, VAR_5->vm, &VAR_11);
  if (VAR_15)
   return VAR_15;

  VAR_22 = VAR_11.entry->base.bo;


  if (VAR_11.level == VAR_10->vm_manager.root_level) {
   if (!FUNC_7(VAR_10, &VAR_11))
    return -VAR_4;
   continue;
  }

  VAR_16 = FUNC_5(VAR_10, VAR_11.level);
  VAR_17 = FUNC_5(VAR_10, VAR_11.level - 1);
  if (VAR_10->asic_type < VAR_3 &&
      (VAR_9 & VAR_1)) {

   if (VAR_11.level != VAR_2) {
    if (!FUNC_7(VAR_10, &VAR_11))
     return -VAR_4;
    continue;
   }
  } else if (VAR_14 < VAR_16) {




   if (!FUNC_7(VAR_10, &VAR_11))
    return -VAR_4;
   continue;
  } else if (VAR_14 >= VAR_17 &&
      VAR_11.level - 1 != VAR_10->vm_manager.root_level) {




   if (!FUNC_6(&VAR_11))
    return -VAR_4;
   continue;
  }


  VAR_19 = (uint64_t)VAR_0 << VAR_16;
  VAR_18 = FUNC_2(VAR_10, VAR_11.level);
  VAR_21 = ((VAR_11.pfn >> VAR_16) & VAR_18) * 8;
  VAR_20 = (uint64_t)(VAR_18 + 1) << VAR_16;
  VAR_20 += VAR_11.pfn & ~(VAR_20 - 1);
  VAR_20 = FUNC_11(VAR_20, VAR_7);

  do {
   uint64_t VAR_23 = FUNC_11(VAR_20, VAR_13);
   unsigned VAR_24 = (VAR_23 - VAR_12) >> VAR_16;

   FUNC_10(VAR_5, VAR_22, VAR_11.level,
            VAR_21, VAR_8, VAR_24, VAR_19,
            VAR_9 | FUNC_0(VAR_14));

   VAR_21 += VAR_24 * 8;
   VAR_8 += (uint64_t)VAR_24 * VAR_0 << VAR_16;

   VAR_12 = VAR_23;
   if (VAR_12 >= VAR_13) {

    FUNC_3(VAR_5, VAR_12, VAR_7,
         VAR_9, &VAR_14, &VAR_13);
    if (VAR_14 < VAR_16)
     break;
   }
  } while (VAR_12 < VAR_20);

  if (FUNC_7(VAR_10, &VAR_11)) {

   while (VAR_11.pfn < VAR_12) {
    FUNC_4(VAR_10, VAR_5->vm, &VAR_11);
    FUNC_8(VAR_10, &VAR_11);
   }

  } else if (VAR_14 >= VAR_16) {

   FUNC_8(VAR_10, &VAR_11);
  }
 }

 return 0;
}
