
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk_syscon {int clk_val; } ;
struct clk_hw {int dummy; } ;
 int FUNC_0 () ;
 struct clk_syscon* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_2(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 struct clk_syscon *VAR_2 = FUNC_1(VAR_0);
 u16 VAR_3 = FUNC_0();

 switch (VAR_2->clk_val) {
 case 135:
 case 134:
 case 133:
 case 132:
 case 129:

  switch (VAR_3) {
  case 139:
  case 140:
   return 13000000;
  default:
   return VAR_1;
  }
 case 137:
 case 131:
 case 128:

  switch (VAR_3) {
  case 139:
  case 140:
   return 6500000;
  case 141:
   return 26000000;
  default:
   return VAR_1;
  }
 case 130:
 case 136:

  switch (VAR_3) {
  case 139:
  case 140:
   return 13000000;
  case 141:
   return 52000000;
  default:
   return 104000000;
  }
 case 138:

  switch (VAR_3) {
  case 139:
  case 140:
   return 13000000;
  case 141:
   return 52000000;
  case 142:
   return 104000000;
  default:
   return VAR_1;
  }
 default:




  return VAR_1;
 }
}
