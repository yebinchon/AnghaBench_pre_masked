
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct m88rs2000_state {int dummy; } ;
typedef enum fe_code_rate { ____Placeholder_fe_code_rate } fe_code_rate ;
 int FUNC_0 (struct m88rs2000_state*,int) ;
 int FUNC_1 (struct m88rs2000_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct m88rs2000_state *VAR_0,
        enum fe_code_rate VAR_1)
{
 u8 VAR_2, VAR_3;
 int VAR_4;

 switch (VAR_1) {
 case 133:
  VAR_2 = 0x8;
  break;
 case 132:
  VAR_2 = 0x10;
  break;
 case 131:
  VAR_2 = 0x20;
  break;
 case 130:
  VAR_2 = 0x40;
  break;
 case 129:
  VAR_2 = 0x80;
  break;
 case 128:
 default:
  VAR_2 = 0x0;
 }

 VAR_3 = FUNC_0(VAR_0, 0x70);
 VAR_3 &= 0x7;
 VAR_4 = FUNC_1(VAR_0, 0x70, VAR_3 | VAR_2);

 VAR_4 |= FUNC_1(VAR_0, 0x76, 0x8);

 return VAR_4;
}
