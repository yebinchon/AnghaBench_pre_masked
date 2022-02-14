
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct list_head {int dummy; } ;
struct kgd_mem {int mapping_flags; struct list_head bo_va_list; scalar_t__ va; struct amdgpu_bo* bo; } ;
struct kfd_bo_va_list {int bo_list; int bo_va; void* kgd_dev; int pte_flags; scalar_t__ va; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {unsigned long size; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_vm*,struct amdgpu_bo*) ;
 int FUNC_2 (struct amdgpu_device*,int ) ;
 int FUNC_3 (struct kfd_bo_va_list*) ;
 struct kfd_bo_va_list* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__,struct amdgpu_vm*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct amdgpu_vm*) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_3, struct kgd_mem *VAR_4,
  struct amdgpu_vm *VAR_5, bool VAR_6,
  struct kfd_bo_va_list **VAR_7)
{
 int VAR_8;
 struct kfd_bo_va_list *VAR_9;
 struct amdgpu_bo *VAR_10 = VAR_4->bo;
 uint64_t VAR_11 = VAR_4->va;
 struct list_head *VAR_12 = &VAR_4->bo_va_list;
 unsigned long VAR_13 = VAR_10->tbo.mem.size;

 if (!VAR_11) {
  FUNC_8("Invalid VA when adding BO to VM\n");
  return -VAR_0;
 }

 if (VAR_6)
  VAR_11 += VAR_13;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_7("\t add VA 0x%llx - 0x%llx to vm %p\n", VAR_11,
   VAR_11 + VAR_13, VAR_5);


 VAR_9->bo_va = FUNC_1(VAR_3, VAR_5, VAR_10);
 if (!VAR_9->bo_va) {
  VAR_8 = -VAR_0;
  FUNC_8("Failed to add BO object to VM. ret == %d\n",
    VAR_8);
  goto err_vmadd;
 }

 VAR_9->va = VAR_11;
 VAR_9->pte_flags = FUNC_0(VAR_3,
        VAR_4->mapping_flags);
 VAR_9->kgd_dev = (void *)VAR_3;
 FUNC_5(&VAR_9->bo_list, VAR_12);

 if (VAR_7)
  *VAR_7 = VAR_9;


 VAR_8 = FUNC_9(VAR_5);
 if (VAR_8) {
  FUNC_8("validate_pt_pd_bos() failed\n");
  goto err_alloc_pts;
 }

 return 0;

err_alloc_pts:
 FUNC_2(VAR_3, VAR_9->bo_va);
 FUNC_6(&VAR_9->bo_list);
err_vmadd:
 FUNC_3(VAR_9);
 return VAR_8;
}
