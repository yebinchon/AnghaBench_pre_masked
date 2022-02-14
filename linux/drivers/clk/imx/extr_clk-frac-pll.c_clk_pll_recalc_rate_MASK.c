
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_frac_pll {scalar_t__ base; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__) ;
 struct clk_frac_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_6,
      unsigned long VAR_7)
{
 struct clk_frac_pll *VAR_8 = FUNC_3(VAR_6);
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 u64 VAR_13 = VAR_7;
 u64 VAR_14;

 VAR_9 = FUNC_2(VAR_8->base + VAR_0);
 VAR_12 = (FUNC_0(VAR_5, VAR_9) + 1) * 2;
 VAR_9 = FUNC_2(VAR_8->base + VAR_1);
 VAR_10 = FUNC_0(VAR_3, VAR_9);
 VAR_11 = FUNC_0(VAR_4, VAR_9);

 VAR_13 *= 8;
 VAR_13 *= VAR_10;
 FUNC_1(VAR_13, VAR_2);
 FUNC_1(VAR_13, VAR_12);

 VAR_14 = VAR_7 * 8 * (VAR_11 + 1);
 FUNC_1(VAR_14, VAR_12);
 VAR_14 += VAR_13;

 return VAR_14;
}
