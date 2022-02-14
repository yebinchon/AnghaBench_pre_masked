
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct radeon_cs_packet {int opcode; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_1,
      u32 *VAR_2, struct radeon_cs_packet *VAR_3)
{
 switch (VAR_3->opcode) {
 case 133:
 case 132:
 case 131:
 case 134:
 case 129:
 case 128:
 case 136:
 case 135:
 case 130:
 case 137:
  break;
 default:
  FUNC_0("Invalid CE packet3: 0x%x\n", VAR_3->opcode);
  return -VAR_0;
 }
 return 0;
}
