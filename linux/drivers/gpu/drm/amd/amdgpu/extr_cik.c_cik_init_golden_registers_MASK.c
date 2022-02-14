
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; int grbm_idx_mutex; } ;


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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_17)
{

 FUNC_2(&VAR_17->grbm_idx_mutex);

 switch (VAR_17->asic_type) {
 case 132:
  FUNC_1(VAR_17,
       VAR_3,
       FUNC_0(VAR_3));
  FUNC_1(VAR_17,
       VAR_1,
       FUNC_0(VAR_1));
  FUNC_1(VAR_17,
       VAR_0,
       FUNC_0(VAR_0));
  FUNC_1(VAR_17,
       VAR_2,
       FUNC_0(VAR_2));
  break;
 case 130:
  FUNC_1(VAR_17,
       VAR_12,
       FUNC_0(VAR_12));
  FUNC_1(VAR_17,
       VAR_10,
       FUNC_0(VAR_10));
  FUNC_1(VAR_17,
       VAR_9,
       FUNC_0(VAR_9));
  FUNC_1(VAR_17,
       VAR_11,
       FUNC_0(VAR_11));
  break;
 case 128:
  FUNC_1(VAR_17,
       VAR_12,
       FUNC_0(VAR_12));
  FUNC_1(VAR_17,
       VAR_4,
       FUNC_0(VAR_4));
  FUNC_1(VAR_17,
       VAR_9,
       FUNC_0(VAR_9));
  FUNC_1(VAR_17,
       VAR_11,
       FUNC_0(VAR_11));
  break;
 case 129:
  FUNC_1(VAR_17,
       VAR_16,
       FUNC_0(VAR_16));
  FUNC_1(VAR_17,
       VAR_14,
       FUNC_0(VAR_14));
  FUNC_1(VAR_17,
       VAR_13,
       FUNC_0(VAR_13));
  FUNC_1(VAR_17,
       VAR_15,
       FUNC_0(VAR_15));
  break;
 case 131:
  FUNC_1(VAR_17,
       VAR_8,
       FUNC_0(VAR_8));
  FUNC_1(VAR_17,
       VAR_6,
       FUNC_0(VAR_6));
  FUNC_1(VAR_17,
       VAR_5,
       FUNC_0(VAR_5));
  FUNC_1(VAR_17,
       VAR_7,
       FUNC_0(VAR_7));
  break;
 default:
  break;
 }
 FUNC_3(&VAR_17->grbm_idx_mutex);
}
