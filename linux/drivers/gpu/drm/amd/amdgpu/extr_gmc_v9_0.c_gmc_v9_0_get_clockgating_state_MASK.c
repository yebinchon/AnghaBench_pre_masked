
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int *) ;
 int FUNC_1 (struct amdgpu_device*,int *) ;
 int FUNC_2 (struct amdgpu_device*,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, u32 *VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;

 if (VAR_3->asic_type == VAR_0)
  FUNC_2(VAR_3, VAR_2);
 else
  FUNC_1(VAR_3, VAR_2);

 FUNC_0(VAR_3, VAR_2);
}
