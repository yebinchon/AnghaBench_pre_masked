
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dev; } ;
struct amdgpu_bo_param {size_t size; int flags; int * resv; int type; int domain; int byte_align; } ;
struct amdgpu_bo {int tbo; } ;
typedef int bp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_bo_param*,struct amdgpu_bo**) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (struct amdgpu_bo*,void**) ;
 int FUNC_3 (struct amdgpu_bo*,int ) ;
 int FUNC_4 (struct amdgpu_bo*,int) ;
 int FUNC_5 (struct amdgpu_bo*) ;
 int FUNC_6 (struct amdgpu_bo**) ;
 int FUNC_7 (struct amdgpu_bo*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct amdgpu_bo_param*,int ,int) ;
 int VAR_4 ;

int FUNC_11(struct kgd_dev *VAR_5, size_t VAR_6,
    void **VAR_7, uint64_t *VAR_8,
    void **VAR_9, bool VAR_10)
{
 struct amdgpu_device *VAR_11 = (struct amdgpu_device *)VAR_5;
 struct amdgpu_bo *VAR_12 = ((void*)0);
 struct amdgpu_bo_param VAR_13;
 int VAR_14;
 void *VAR_15 = ((void*)0);

 FUNC_10(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.size = VAR_6;
 VAR_13.byte_align = VAR_3;
 VAR_13.domain = VAR_2;
 VAR_13.flags = VAR_0;
 VAR_13.type = VAR_4;
 VAR_13.resv = ((void*)0);

 if (VAR_10)
  VAR_13.flags |= VAR_1;

 VAR_14 = FUNC_0(VAR_11, &VAR_13, &VAR_12);
 if (VAR_14) {
  FUNC_9(VAR_11->dev,
   "failed to allocate BO for amdkfd (%d)\n", VAR_14);
  return VAR_14;
 }


 VAR_14 = FUNC_4(VAR_12, 1);
 if (VAR_14) {
  FUNC_9(VAR_11->dev, "(%d) failed to reserve bo for amdkfd\n", VAR_14);
  goto allocate_mem_reserve_bo_failed;
 }

 VAR_14 = FUNC_3(VAR_12, VAR_2);
 if (VAR_14) {
  FUNC_9(VAR_11->dev, "(%d) failed to pin bo for amdkfd\n", VAR_14);
  goto allocate_mem_pin_bo_failed;
 }

 VAR_14 = FUNC_8(&VAR_12->tbo);
 if (VAR_14) {
  FUNC_9(VAR_11->dev, "%p bind failed\n", VAR_12);
  goto allocate_mem_kmap_bo_failed;
 }

 VAR_14 = FUNC_2(VAR_12, &VAR_15);
 if (VAR_14) {
  FUNC_9(VAR_11->dev,
   "(%d) failed to map bo to kernel for amdkfd\n", VAR_14);
  goto allocate_mem_kmap_bo_failed;
 }

 *VAR_7 = VAR_12;
 *VAR_8 = FUNC_1(VAR_12);
 *VAR_9 = VAR_15;

 FUNC_7(VAR_12);

 return 0;

allocate_mem_kmap_bo_failed:
 FUNC_5(VAR_12);
allocate_mem_pin_bo_failed:
 FUNC_7(VAR_12);
allocate_mem_reserve_bo_failed:
 FUNC_6(&VAR_12);

 return VAR_14;
}
