
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_common_if {int block; int const type; int name; int sub_block_index; } ;
struct amdgpu_ras {int features; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_ras_error_type { ____Placeholder_amdgpu_ras_error_type } amdgpu_ras_error_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,struct ras_common_if*,int) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,struct ras_common_if*,int) ;
 struct amdgpu_ras* FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_2,
  bool VAR_3)
{
 struct amdgpu_ras *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = VAR_0;
 int VAR_6;
 const enum amdgpu_ras_error_type VAR_7 =
  VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  struct ras_common_if VAR_8 = {
   .block = VAR_6,
   .type = VAR_7,
   .sub_block_index = 0,
  };
  FUNC_4(VAR_8.name, FUNC_3(VAR_6));
  if (VAR_3) {




   if (FUNC_0(VAR_2, &VAR_8, 1))
    break;
  } else {
   if (FUNC_1(VAR_2, &VAR_8, 1))
    break;
  }
 }

 return VAR_4->features;
}
