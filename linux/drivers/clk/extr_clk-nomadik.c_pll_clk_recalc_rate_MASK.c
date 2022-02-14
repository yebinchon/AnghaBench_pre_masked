
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_pll {int id; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct clk_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_2,
       unsigned long VAR_3)
{
 struct clk_pll *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_1 + VAR_0);

 if (VAR_4->id == 1) {
  u8 VAR_6;
  u8 VAR_7;

  VAR_6 = (VAR_5 >> 8) & 0x3FU;
  VAR_6 += 2;
  VAR_7 = VAR_5 & 0x07U;
  return (VAR_3 * VAR_6) >> VAR_7;
 }

 if (VAR_4->id == 2) {
  u8 VAR_8;

  VAR_8 = (VAR_5 >> 24) & 0x3FU;
  VAR_8 += 2;
  return (VAR_3 * VAR_8);
 }


 return 0;
}
