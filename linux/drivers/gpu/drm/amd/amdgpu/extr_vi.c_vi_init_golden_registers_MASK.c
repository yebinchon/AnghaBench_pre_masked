
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; int grbm_idx_mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*,int ,int ) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_5)
{

 FUNC_3(&VAR_5->grbm_idx_mutex);

 if (FUNC_2(VAR_5)) {
  FUNC_5(VAR_5);
  FUNC_4(&VAR_5->grbm_idx_mutex);
  return;
 }

 switch (VAR_5->asic_type) {
 case 129:
  FUNC_1(VAR_5,
       VAR_2,
       FUNC_0(VAR_2));
  break;
 case 135:
  FUNC_1(VAR_5,
       VAR_1,
       FUNC_0(VAR_1));
  break;
 case 130:
  FUNC_1(VAR_5,
       VAR_4,
       FUNC_0(VAR_4));
  break;
 case 136:
  FUNC_1(VAR_5,
       VAR_0,
       FUNC_0(VAR_0));
  break;
 case 131:
  FUNC_1(VAR_5,
       VAR_3,
       FUNC_0(VAR_3));
  break;
 case 134:
 case 133:
 case 132:
 case 128:
 default:
  break;
 }
 FUNC_4(&VAR_5->grbm_idx_mutex);
}
