
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hsdk_pll_clk {int dev; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct hsdk_pll_clk*,int ) ;
 struct hsdk_pll_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_9,
       unsigned long VAR_10)
{
 u32 VAR_11;
 u64 VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 struct hsdk_pll_clk *VAR_16 = FUNC_3(VAR_9);

 VAR_11 = FUNC_2(VAR_16, VAR_0);

 FUNC_0(VAR_16->dev, "current configuration: %#x\n", VAR_11);


 if (VAR_11 & VAR_8)
  return 0;


 if (VAR_11 & VAR_1)
  return VAR_10;


 VAR_13 = 1 + ((VAR_11 & VAR_4) >> VAR_5);

 VAR_14 = 2 * (1 + ((VAR_11 & VAR_2) >> VAR_3));

 VAR_15 = 1 << ((VAR_11 & VAR_6) >> VAR_7);

 VAR_12 = (u64)VAR_10 * VAR_14;
 FUNC_1(VAR_12, VAR_13 * VAR_15);

 return VAR_12;
}
