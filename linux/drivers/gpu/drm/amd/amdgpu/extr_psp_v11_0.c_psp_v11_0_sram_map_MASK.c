
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {unsigned int*** reg_offset; int asic_type; } ;
typedef enum AMDGPU_UCODE_ID { ____Placeholder_AMDGPU_UCODE_ID } AMDGPU_UCODE_ID ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;

__attribute__((used)) static int
FUNC_1(struct amdgpu_device *VAR_23,
    unsigned int *VAR_24, unsigned int *VAR_25,
    unsigned int *VAR_26,
    enum AMDGPU_UCODE_ID VAR_27)
{
 int VAR_28 = 0;

 switch (VAR_27) {
 case 139:
  *VAR_24 = 0x0;
  *VAR_25 = FUNC_0(VAR_2, 0, VAR_5);
  *VAR_26 = FUNC_0(VAR_2, 0, VAR_6);
  break;

 case 135:
  *VAR_24 = 0x0;
  *VAR_25 = FUNC_0(VAR_2, 0, VAR_13);
  *VAR_26 = FUNC_0(VAR_2, 0, VAR_14);
  break;

 case 138:
  *VAR_24 = 0x0;
  *VAR_25 = FUNC_0(VAR_2, 0, VAR_9);
  *VAR_26 = FUNC_0(VAR_2, 0, VAR_10);
  break;

 case 137:
  *VAR_24 = 0x10000;
  *VAR_25 = FUNC_0(VAR_2, 0, VAR_11);
  *VAR_26 = FUNC_0(VAR_2, 0, VAR_12);
  break;

 case 136:
  *VAR_24 = 0x10000;
  *VAR_25 = FUNC_0(VAR_2, 0, VAR_7);
  *VAR_26 = FUNC_0(VAR_2, 0, VAR_8);
  break;

 case 133:
  *VAR_24 = 0x2000;
  if (VAR_23->asic_type < VAR_0) {
   *VAR_25 = FUNC_0(VAR_2, 0, VAR_15);
   *VAR_26 = FUNC_0(VAR_2, 0, VAR_17);
  } else {
   *VAR_25 = VAR_23->reg_offset[VAR_3][0][1] + VAR_16;
   *VAR_26 = VAR_23->reg_offset[VAR_3][0][1] + VAR_18;
  }
  break;

 case 132:
  *VAR_24 = 0x0;
  if (VAR_23->asic_type < VAR_0) {
   *VAR_25 = FUNC_0(VAR_4, 0, VAR_19);
   *VAR_26 = FUNC_0(VAR_4, 0, VAR_21);
  } else {
   *VAR_25 = VAR_23->reg_offset[VAR_3][0][1] + VAR_20;
   *VAR_26 = VAR_23->reg_offset[VAR_3][0][1] + VAR_22;
  }
  break;
 case 134:
 default:
  VAR_28 = -VAR_1;
  break;
 }

 return VAR_28;
}
