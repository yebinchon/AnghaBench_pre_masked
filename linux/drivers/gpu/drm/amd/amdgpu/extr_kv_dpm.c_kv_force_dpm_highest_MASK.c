
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,int*) ;
 int FUNC_1 (struct amdgpu_device*,int ,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_4, &VAR_6);
 if (VAR_5)
  return VAR_5;

 for (VAR_7 = VAR_3 - 1; VAR_7 > 0; VAR_7--) {
  if (VAR_6 & (1 << VAR_7))
   break;
 }

 if (VAR_4->asic_type == VAR_0 || VAR_4->asic_type == VAR_1)
  return FUNC_1(VAR_4, VAR_2, VAR_7);
 else
  return FUNC_2(VAR_4, VAR_7);
}
