
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;


 int FUNC_2 (struct amdgpu_device*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_3(struct amdgpu_device *VAR_6)
{
 switch (VAR_6->asic_type) {
 case 129:
  FUNC_2(VAR_6,
       VAR_2,
       FUNC_0(
        VAR_2));
  FUNC_2(VAR_6,
       VAR_1,
       FUNC_0(
        VAR_1));
  FUNC_2(VAR_6,
       VAR_0,
       FUNC_0(
        VAR_0));
  break;
 case 128:
  FUNC_2(VAR_6,
       VAR_5,
       FUNC_0(
        VAR_5));
  FUNC_2(VAR_6,
       VAR_4,
       FUNC_0(
        VAR_4));
  FUNC_2(VAR_6,
       VAR_3,
       FUNC_0(
        VAR_3));
  break;
 default:
  FUNC_1("Doesn't support chip type.\n");
  break;
 }
}
