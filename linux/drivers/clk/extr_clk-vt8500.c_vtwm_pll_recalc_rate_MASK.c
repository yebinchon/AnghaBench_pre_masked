
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pll {int type; int reg; } ;
struct clk_hw {int dummy; } ;






 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct clk_pll* FUNC_9 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_10(struct clk_hw *VAR_0,
    unsigned long VAR_1)
{
 struct clk_pll *VAR_2 = FUNC_9(VAR_0);
 u32 VAR_3 = FUNC_8(VAR_2->reg);
 unsigned long VAR_4;

 switch (VAR_2->type) {
 case 131:
  VAR_4 = VAR_1 * FUNC_1(VAR_3);
  VAR_4 /= FUNC_0(VAR_3);
  break;
 case 130:
  VAR_4 = VAR_1 * FUNC_3(VAR_3);
  VAR_4 /= FUNC_2(VAR_3);
  break;
 case 129:
  VAR_4 = VAR_1 * FUNC_5(VAR_3);
  VAR_4 /= FUNC_4(VAR_3);
  break;
 case 128:
  VAR_4 = VAR_1 * FUNC_7(VAR_3);
  VAR_4 /= FUNC_6(VAR_3);
  break;
 default:
  VAR_4 = 0;
 }

 return VAR_4;
}
