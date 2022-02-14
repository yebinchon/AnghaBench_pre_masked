
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef enum AMDGPU_UCODE_ID { ____Placeholder_AMDGPU_UCODE_ID } AMDGPU_UCODE_ID ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_1(struct amdgpu_device *VAR_17,
    unsigned int *VAR_18, unsigned int *VAR_19,
    unsigned int *VAR_20,
    enum AMDGPU_UCODE_ID VAR_21)
{
 int VAR_22 = 0;

 switch(VAR_21) {
 case 139:
  *VAR_18 = 0x0;
  *VAR_19 = FUNC_0(VAR_1, 0, VAR_3);
  *VAR_20 = FUNC_0(VAR_1, 0, VAR_4);
  break;

 case 135:
  *VAR_18 = 0x0;
  *VAR_19 = FUNC_0(VAR_1, 0, VAR_11);
  *VAR_20 = FUNC_0(VAR_1, 0, VAR_12);
  break;

 case 138:
  *VAR_18 = 0x0;
  *VAR_19 = FUNC_0(VAR_1, 0, VAR_7);
  *VAR_20 = FUNC_0(VAR_1, 0, VAR_8);
  break;

 case 137:
  *VAR_18 = 0x10000;
  *VAR_19 = FUNC_0(VAR_1, 0, VAR_9);
  *VAR_20 = FUNC_0(VAR_1, 0, VAR_10);
  break;

 case 136:
  *VAR_18 = 0x10000;
  *VAR_19 = FUNC_0(VAR_1, 0, VAR_5);
  *VAR_20 = FUNC_0(VAR_1, 0, VAR_6);
  break;

 case 133:
  *VAR_18 = 0x2000;
  *VAR_19 = FUNC_0(VAR_1, 0, VAR_13);
  *VAR_20 = FUNC_0(VAR_1, 0, VAR_14);
  break;

 case 132:
  *VAR_18 = 0x0;
  *VAR_19 = FUNC_0(VAR_2, 0, VAR_15);
  *VAR_20 = FUNC_0(VAR_2, 0, VAR_16);
  break;
 case 134:
 default:
  VAR_22 = -VAR_0;
  break;
 }

 return VAR_22;
}
