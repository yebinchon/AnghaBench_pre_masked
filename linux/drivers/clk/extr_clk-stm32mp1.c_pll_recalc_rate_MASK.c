
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct stm32_pll_obj {scalar_t__ reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (scalar_t__) ;
 struct stm32_pll_obj* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_4,
         unsigned long VAR_5)
{
 struct stm32_pll_obj *VAR_6 = FUNC_3(VAR_4);
 u32 VAR_7;
 u32 VAR_8, VAR_9, VAR_10;
 u64 VAR_11, VAR_12 = 0;

 VAR_7 = FUNC_2(VAR_6->reg + 4);

 VAR_9 = ((VAR_7 >> VAR_1) & VAR_0) + 1;
 VAR_10 = ((VAR_7 >> VAR_3) & VAR_2) + 1;
 VAR_11 = (u64)VAR_5 * VAR_10;

 FUNC_0(VAR_11, VAR_9);

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8) {
  VAR_12 = (u64)VAR_5 * (u64)VAR_8;
  FUNC_0(VAR_12, (VAR_9 * 8192));
 }

 return VAR_11 + VAR_12;
}
