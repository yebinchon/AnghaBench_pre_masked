
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kgd_mem {int dummy; } ;
struct kfd_process_device {int vm; struct kfd_dev* dev; } ;
struct kfd_dev {int kgd; } ;


 int FUNC_0 (int ,int ,int ,int ,struct kgd_mem**,int *,int ) ;
 int FUNC_1 (int ,struct kgd_mem*) ;
 int FUNC_2 (int ,struct kgd_mem*,void**,int *) ;
 int FUNC_3 (int ,struct kgd_mem*,int ) ;
 int FUNC_4 (int ,struct kgd_mem*,int) ;
 int FUNC_5 (struct kfd_process_device*,struct kgd_mem*) ;
 int FUNC_6 (struct kfd_process_device*,int) ;
 int FUNC_7 (struct kgd_mem*,struct kfd_process_device*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct kfd_process_device *VAR_0,
       uint64_t VAR_1, uint32_t VAR_2,
       uint32_t VAR_3, void **VAR_4)
{
 struct kfd_dev *VAR_5 = VAR_0->dev;
 struct kgd_mem *VAR_6 = ((void*)0);
 int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5->kgd, VAR_1, VAR_2,
       VAR_0->vm, &VAR_6, ((void*)0), VAR_3);
 if (VAR_8)
  goto err_alloc_mem;

 VAR_8 = FUNC_3(VAR_5->kgd, VAR_6, VAR_0->vm);
 if (VAR_8)
  goto err_map_mem;

 VAR_8 = FUNC_4(VAR_5->kgd, VAR_6, 1);
 if (VAR_8) {
  FUNC_8("Sync memory failed, wait interrupted by user signal\n");
  goto sync_memory_failed;
 }






 VAR_7 = FUNC_5(VAR_0, VAR_6);

 if (VAR_7 < 0) {
  VAR_8 = VAR_7;
  goto free_gpuvm;
 }

 if (VAR_4) {
  VAR_8 = FUNC_2(VAR_5->kgd,
    (struct kgd_mem *)VAR_6, VAR_4, ((void*)0));
  if (VAR_8) {
   FUNC_8("Map GTT BO to kernel failed\n");
   goto free_obj_handle;
  }
 }

 return VAR_8;

free_obj_handle:
 FUNC_6(VAR_0, VAR_7);
free_gpuvm:
sync_memory_failed:
 FUNC_7(VAR_6, VAR_0);
 return VAR_8;

err_map_mem:
 FUNC_1(VAR_5->kgd, VAR_6);
err_alloc_mem:
 *VAR_4 = ((void*)0);
 return VAR_8;
}
