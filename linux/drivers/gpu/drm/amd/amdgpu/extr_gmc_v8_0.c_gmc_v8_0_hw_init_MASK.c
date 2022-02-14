
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_6(void *VAR_4)
{
 int VAR_5;
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *)VAR_4;

 FUNC_2(VAR_6);

 FUNC_3(VAR_6);

 if (VAR_6->asic_type == VAR_3) {
  VAR_5 = FUNC_5(VAR_6);
  if (VAR_5) {
   FUNC_0("Failed to load MC firmware!\n");
   return VAR_5;
  }
 } else if (VAR_6->asic_type == VAR_1 ||
   VAR_6->asic_type == VAR_0 ||
   VAR_6->asic_type == VAR_2) {
  VAR_5 = FUNC_4(VAR_6);
  if (VAR_5) {
   FUNC_0("Failed to load MC firmware!\n");
   return VAR_5;
  }
 }

 VAR_5 = FUNC_1(VAR_6);
 if (VAR_5)
  return VAR_5;

 return VAR_5;
}
