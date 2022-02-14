
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;


 int FUNC_0 (int ) ;

 int FUNC_1 (struct amdgpu_device*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2)
{
 switch (VAR_2->asic_type) {
 case 128:
  FUNC_1(VAR_2,
       VAR_1,
       FUNC_0(VAR_1));
  FUNC_1(VAR_2,
       VAR_0,
       FUNC_0(VAR_0));
  break;
 default:
  break;
 }
}
