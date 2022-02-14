
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_9)
{
 switch (VAR_9->asic_type) {
 case 134:
  FUNC_1(VAR_9,
       VAR_1,
       FUNC_0(VAR_1));
  FUNC_1(VAR_9,
       VAR_2,
       FUNC_0(VAR_2));
  break;
 case 129:
  FUNC_1(VAR_9,
       VAR_8,
       FUNC_0(VAR_8));
  FUNC_1(VAR_9,
       VAR_6,
       FUNC_0(VAR_6));
  break;
 case 132:
 case 131:
 case 128:
  FUNC_1(VAR_9,
       VAR_4,
       FUNC_0(VAR_4));
  break;
 case 133:
  FUNC_1(VAR_9,
       VAR_3,
       FUNC_0(VAR_3));
  break;
 case 135:
  FUNC_1(VAR_9,
       VAR_0,
       FUNC_0(VAR_0));
  break;
 case 130:
  FUNC_1(VAR_9,
       VAR_7,
       FUNC_0(VAR_7));
  FUNC_1(VAR_9,
       VAR_5,
       FUNC_0(VAR_5));
  break;
 default:
  break;
 }
}
