
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk_hw {int dummy; } ;







 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static unsigned long
FUNC_2(struct clk_hw *VAR_3,
       unsigned long VAR_4)
{
 u16 VAR_5 = FUNC_1();

 switch (VAR_5) {
 case 128:





  return 13000000;
 case 129:
 case 130:
 case 131:
 case 132:
 {
  u16 VAR_6 = FUNC_0(VAR_2 + VAR_0) &
   VAR_1;
  switch (VAR_6) {
  case 0x0054:
   return 18900000;
  case 0x0044:
   return 20800000;
  case 0x0043:
   return 23100000;
  case 0x0033:
   return 26000000;
  case 0x0032:
   return 29700000;
  case 0x0022:
   return 34700000;
  case 0x0021:
   return 41600000;
  case 0x0011:
   return 52000000;
  case 0x0000:
   return 104000000;
  default:
   break;
  }
 }
 default:
  break;
 }
 return VAR_4;
}
