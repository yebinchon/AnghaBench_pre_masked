
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_mem {int lock; int sync; struct amdgpu_bo* bo; } ;
struct amdkfd_process_info {int eviction_fence; } ;
struct amdgpu_bo {int dummy; } ;


 int FUNC_0 (struct amdgpu_bo*,int ) ;
 int FUNC_1 (struct amdgpu_bo*,int) ;
 int FUNC_2 (struct amdgpu_bo**) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct kgd_mem*,struct amdkfd_process_info*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(void *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct amdkfd_process_info *VAR_3 = (struct amdkfd_process_info *)VAR_0;
 struct kgd_mem *VAR_4 = (struct kgd_mem *)VAR_1;
 struct amdgpu_bo *VAR_5 = VAR_4->bo;




 FUNC_8(VAR_4, VAR_3);

 VAR_2 = FUNC_1(VAR_5, 0);
 if (FUNC_9(VAR_2)) {
  FUNC_7("Reserve gws bo failed %d\n", VAR_2);

  return VAR_2;
 }
 FUNC_0(VAR_5,
   VAR_3->eviction_fence);
 FUNC_3(VAR_5);
 FUNC_4(&VAR_4->sync);
 FUNC_2(&VAR_5);
 FUNC_6(&VAR_4->lock);
 FUNC_5(VAR_1);
 return 0;
}
