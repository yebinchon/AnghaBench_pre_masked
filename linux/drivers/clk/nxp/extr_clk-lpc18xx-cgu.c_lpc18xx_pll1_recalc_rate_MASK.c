
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef unsigned long u16 ;
struct lpc18xx_pll {scalar_t__ reg; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct lpc18xx_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_4,
           unsigned long VAR_5)
{
 struct lpc18xx_pll *VAR_6 = FUNC_1(VAR_4);
 u16 VAR_7, VAR_8, VAR_9;
 bool VAR_10, VAR_11;
 u32 VAR_12, VAR_13;

 VAR_12 = FUNC_0(VAR_6->reg + VAR_1);
 VAR_13 = FUNC_0(VAR_6->reg + VAR_0);

 VAR_10 = (VAR_13 & VAR_2) ? 1 : 0;
 VAR_11 = (VAR_13 & VAR_3) ? 1 : 0;

 VAR_7 = ((VAR_13 >> 16) & 0xff) + 1;
 VAR_8 = ((VAR_13 >> 12) & 0x3) + 1;

 if (VAR_10 || VAR_11)
  return VAR_7 * (VAR_5 / VAR_8);

 VAR_9 = (VAR_13 >> 8) & 0x3;
 VAR_9 = 1 << VAR_9;

 return (VAR_7 / (2 * VAR_9)) * (VAR_5 / VAR_8);
}
