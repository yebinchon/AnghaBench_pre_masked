
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct m88rs2000_state {int dummy; } ;
typedef enum fe_code_rate { ____Placeholder_fe_code_rate } fe_code_rate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct m88rs2000_state*,int) ;
 int FUNC_1 (struct m88rs2000_state*,int,int) ;

__attribute__((used)) static enum fe_code_rate FUNC_2(struct m88rs2000_state *VAR_6)
{
 u8 VAR_7;
 FUNC_1(VAR_6, 0x9a, 0x30);
 VAR_7 = FUNC_0(VAR_6, 0x76);
 FUNC_1(VAR_6, 0x9a, 0xb0);

 VAR_7 &= 0xf0;
 VAR_7 >>= 5;

 switch (VAR_7) {
 case 0x4:
  return VAR_0;
 case 0x3:
  return VAR_1;
 case 0x2:
  return VAR_2;
 case 0x1:
  return VAR_3;
 case 0x0:
  return VAR_4;
 default:
  break;
 }

 return VAR_5;
}
