
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;


 int FUNC_0 (int ) ;


 int FUNC_1 (struct amdgpu_device*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_4)
{
 switch (VAR_4->asic_type) {
 case 129:
  FUNC_1(VAR_4,
       VAR_0,
       FUNC_0(VAR_0));
  FUNC_1(VAR_4,
       VAR_1,
       FUNC_0(VAR_1));
  break;
 case 128:
  FUNC_1(VAR_4,
       VAR_3,
       FUNC_0(VAR_3));
  FUNC_1(VAR_4,
       VAR_2,
       FUNC_0(VAR_2));
  break;
 default:
  break;
 }
}
