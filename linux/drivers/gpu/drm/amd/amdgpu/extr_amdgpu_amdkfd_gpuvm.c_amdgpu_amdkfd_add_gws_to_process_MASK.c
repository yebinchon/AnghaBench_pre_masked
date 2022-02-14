
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kgd_mem {int lock; int sync; struct amdkfd_process_info* process_info; int domain; int bo; } ;
struct amdkfd_process_info {int lock; TYPE_3__* eviction_fence; } ;
struct TYPE_4__ {int resv; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;
struct TYPE_6__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kgd_mem*,struct amdkfd_process_info*,int) ;
 int FUNC_1 (struct amdgpu_bo*,int ,int) ;
 int FUNC_2 (struct amdgpu_bo*,int *,int) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 int FUNC_4 (struct amdgpu_bo*,int) ;
 int FUNC_5 (struct amdgpu_bo**) ;
 int FUNC_6 (struct amdgpu_bo*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct kgd_mem*) ;
 struct kgd_mem* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (struct kgd_mem*,struct amdkfd_process_info*) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(void *VAR_4, void *VAR_5, struct kgd_mem **VAR_6)
{
 struct amdkfd_process_info *VAR_7 = (struct amdkfd_process_info *)VAR_4;
 struct amdgpu_bo *VAR_8 = (struct amdgpu_bo *)VAR_5;
 int VAR_9;

 if (!VAR_4 || !VAR_5)
  return -VAR_1;

 *VAR_6 = FUNC_11(sizeof(struct kgd_mem), VAR_3);
 if (!*VAR_6)
  return -VAR_2;

 FUNC_13(&(*VAR_6)->lock);
 (*VAR_6)->bo = FUNC_3(VAR_8);
 (*VAR_6)->domain = VAR_0;
 (*VAR_6)->process_info = VAR_7;
 FUNC_0(*VAR_6, VAR_7, 0);
 FUNC_7(&(*VAR_6)->sync);



 FUNC_14(&(*VAR_6)->process_info->lock);
 VAR_9 = FUNC_4(VAR_8, 0);
 if (FUNC_18(VAR_9)) {
  FUNC_16("Reserve gws bo failed %d\n", VAR_9);
  goto bo_reservation_failure;
 }

 VAR_9 = FUNC_1(VAR_8, VAR_0, 1);
 if (VAR_9) {
  FUNC_16("GWS BO validate failed %d\n", VAR_9);
  goto bo_validation_failure;
 }




 VAR_9 = FUNC_9(VAR_8->tbo.base.resv, 1);
 if (VAR_9)
  goto reserve_shared_fail;
 FUNC_2(VAR_8, &VAR_7->eviction_fence->base, 1);
 FUNC_6(VAR_8);
 FUNC_15(&(*VAR_6)->process_info->lock);

 return VAR_9;

reserve_shared_fail:
bo_validation_failure:
 FUNC_6(VAR_8);
bo_reservation_failure:
 FUNC_15(&(*VAR_6)->process_info->lock);
 FUNC_8(&(*VAR_6)->sync);
 FUNC_17(*VAR_6, VAR_7);
 FUNC_5(&VAR_8);
 FUNC_12(&(*VAR_6)->lock);
 FUNC_10(*VAR_6);
 *VAR_6 = ((void*)0);
 return VAR_9;
}
