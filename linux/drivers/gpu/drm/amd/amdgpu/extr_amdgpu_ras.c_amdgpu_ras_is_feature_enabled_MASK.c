
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_common_if {int block; } ;
struct amdgpu_ras {int features; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct amdgpu_ras* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
  struct ras_common_if *VAR_1)
{
 struct amdgpu_ras *VAR_2 = FUNC_1(VAR_0);

 return VAR_2->features & FUNC_0(VAR_1->block);
}
