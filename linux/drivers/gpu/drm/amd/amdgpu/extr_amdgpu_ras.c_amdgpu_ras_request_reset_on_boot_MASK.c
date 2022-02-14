
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ras {int flags; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct amdgpu_ras* FUNC_0 (struct amdgpu_device*) ;

int FUNC_1(struct amdgpu_device *VAR_2,
  unsigned int VAR_3)
{
 struct amdgpu_ras *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4)
  return -VAR_1;

 VAR_4->flags |= VAR_0;
 return 0;
}
