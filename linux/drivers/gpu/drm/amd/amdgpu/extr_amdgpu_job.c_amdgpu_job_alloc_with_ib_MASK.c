
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_job {int * ibs; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,int *,unsigned int,int *) ;
 int FUNC_1 (struct amdgpu_device*,int,struct amdgpu_job**,int *) ;
 int FUNC_2 (struct amdgpu_job*) ;

int FUNC_3(struct amdgpu_device *VAR_0, unsigned VAR_1,
        struct amdgpu_job **VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, 1, VAR_2, ((void*)0));
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, ((void*)0), VAR_1, &(*VAR_2)->ibs[0]);
 if (VAR_3)
  FUNC_2(*VAR_2);

 return VAR_3;
}
