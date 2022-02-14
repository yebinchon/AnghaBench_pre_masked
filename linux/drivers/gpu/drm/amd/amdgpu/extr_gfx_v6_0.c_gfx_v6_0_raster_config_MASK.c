
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int asic_type; } ;







 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_8, u32 *VAR_9)
{
 switch (VAR_8->asic_type) {
 case 129:
 case 130:
  *VAR_9 |=
      (2 << VAR_2) |
      (1 << VAR_3) |
      (2 << VAR_0) |
      (1 << VAR_1) |
      (2 << VAR_5) |
      (2 << VAR_6) |
      (2 << VAR_7);
  break;
 case 128:
  *VAR_9 |=
      (1 << VAR_3) |
      (2 << VAR_0) |
      (1 << VAR_1);
  break;
 case 131:
  *VAR_9 |= (1 << VAR_4);
  break;
 case 132:
  *VAR_9 |= 0x0;
  break;
 default:
  FUNC_0("unknown asic: 0x%x\n", VAR_8->asic_type);
  break;
 }
}
