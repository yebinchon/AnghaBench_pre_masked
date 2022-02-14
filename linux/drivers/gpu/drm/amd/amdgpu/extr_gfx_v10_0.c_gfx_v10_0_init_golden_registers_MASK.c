
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int asic_type; } ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct amdgpu_device*,int ,int const) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_6)
{
 switch (VAR_6->asic_type) {
 case 130:
  FUNC_1(VAR_6,
      VAR_1,
      (const u32)FUNC_0(VAR_1));
  FUNC_1(VAR_6,
      VAR_0,
      (const u32)FUNC_0(VAR_0));
  break;
 case 128:
  FUNC_1(VAR_6,
      VAR_2,
      (const u32)FUNC_0(VAR_2));
  FUNC_1(VAR_6,
      VAR_5,
      (const u32)FUNC_0(VAR_5));
  break;
 case 129:
  FUNC_1(VAR_6,
      VAR_3,
      (const u32)FUNC_0(VAR_3));
  FUNC_1(VAR_6,
      VAR_4,
      (const u32)FUNC_0(VAR_4));
  break;
 default:
  break;
 }
}
