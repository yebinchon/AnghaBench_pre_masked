
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dev; } ;
struct amdgpu_bo_param {size_t size; int byte_align; int * resv; int type; int flags; int domain; } ;
struct amdgpu_bo {int dummy; } ;
typedef int bp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_bo_param*,struct amdgpu_bo**) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct amdgpu_bo_param*,int ,int) ;
 int VAR_2 ;

int FUNC_3(struct kgd_dev *VAR_3, size_t VAR_4,
    void **VAR_5)
{
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *)VAR_3;
 struct amdgpu_bo *VAR_7 = ((void*)0);
 struct amdgpu_bo_param VAR_8;
 int VAR_9;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.size = VAR_4;
 VAR_8.byte_align = 1;
 VAR_8.domain = VAR_1;
 VAR_8.flags = VAR_0;
 VAR_8.type = VAR_2;
 VAR_8.resv = ((void*)0);

 VAR_9 = FUNC_0(VAR_6, &VAR_8, &VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_6->dev,
   "failed to allocate gws BO for amdkfd (%d)\n", VAR_9);
  return VAR_9;
 }

 *VAR_5 = VAR_7;
 return 0;
}
