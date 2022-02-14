
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_sccg_pll {scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct clk_sccg_pll* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_9,
      unsigned long VAR_10)
{
 struct clk_sccg_pll *VAR_11 = FUNC_4(VAR_9);
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u64 VAR_18;

 VAR_12 = FUNC_3(VAR_11->base + VAR_1);
 VAR_13 = FUNC_0(VAR_5, VAR_12);
 VAR_15 = FUNC_0(VAR_6, VAR_12);
 VAR_14 = FUNC_0(VAR_2, VAR_12);
 VAR_16 = FUNC_0(VAR_3, VAR_12);
 VAR_17 = FUNC_0(VAR_4, VAR_12);

 VAR_18 = VAR_10;

 VAR_12 = FUNC_2(VAR_11->base + VAR_0);
 if (VAR_12 & VAR_8) {
  VAR_18 = VAR_10;
 } else if (VAR_12 & VAR_7) {
  VAR_18 *= VAR_16;
  FUNC_1(VAR_18, (VAR_15 + 1) * (VAR_17 + 1));
 } else {
  VAR_18 *= 2;
  VAR_18 *= (VAR_14 + 1) * (VAR_16 + 1);
  FUNC_1(VAR_18, (VAR_13 + 1) * (VAR_15 + 1) * (VAR_17 + 1));
 }

 return VAR_18;
}
