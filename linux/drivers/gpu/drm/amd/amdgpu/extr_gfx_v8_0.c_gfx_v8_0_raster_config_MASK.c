
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int asic_type; } ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(struct amdgpu_device *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 switch (VAR_0->asic_type) {
 case 135:
 case 128:
  *VAR_1 |= FUNC_4(2) | FUNC_5(2) |
     FUNC_6(1) | FUNC_1(2) |
     FUNC_2(1) | FUNC_3(1) |
     FUNC_7(2) | FUNC_11(2) | FUNC_12(3);
  *VAR_2 |= FUNC_8(2) | FUNC_9(3) |
      FUNC_10(2);
  break;
 case 130:
 case 134:
  *VAR_1 |= FUNC_4(2) | FUNC_6(1) | FUNC_7(2) |
     FUNC_11(1) | FUNC_12(1);
  *VAR_2 |= FUNC_8(2) | FUNC_9(2) |
      FUNC_10(2);
  break;
 case 129:
 case 136:
  *VAR_1 |= FUNC_4(2);
  *VAR_2 |= 0x0;
  break;
 case 133:
 case 132:
  *VAR_1 |= FUNC_4(2) | FUNC_6(1) | FUNC_7(2) |
     FUNC_11(1) | FUNC_12(1);
  *VAR_2 |= 0x0;
  break;
 case 131:
  *VAR_1 |= 0x0;
  *VAR_2 |= 0x0;
  break;
 default:
  FUNC_0("unknown asic: 0x%x\n", VAR_0->asic_type);
  break;
 }
}
