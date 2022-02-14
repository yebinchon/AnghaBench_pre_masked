
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,unsigned long,int,int ,struct amdgpu_bo**,int *,void**) ;
 int FUNC_1 (struct amdgpu_bo*) ;

int FUNC_2(struct amdgpu_device *VAR_0,
       unsigned long VAR_1, int VAR_2,
       u32 VAR_3, struct amdgpu_bo **VAR_4,
       u64 *VAR_5, void **VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6);

 if (VAR_7)
  return VAR_7;

 if (*VAR_4)
  FUNC_1(*VAR_4);

 return 0;
}
