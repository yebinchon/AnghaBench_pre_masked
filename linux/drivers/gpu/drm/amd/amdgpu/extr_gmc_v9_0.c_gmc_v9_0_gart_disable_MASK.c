
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_1)
{
 FUNC_1(VAR_1);
 if (VAR_1->asic_type == VAR_0)
  FUNC_3(VAR_1);
 else
  FUNC_2(VAR_1);
 FUNC_0(VAR_1);
}
