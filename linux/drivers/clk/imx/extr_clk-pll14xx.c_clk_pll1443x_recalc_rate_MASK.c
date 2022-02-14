
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_pll14xx {scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 struct clk_pll14xx* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_7,
        unsigned long VAR_8)
{
 struct clk_pll14xx *VAR_9 = FUNC_2(VAR_7);
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 short int VAR_15;
 u64 VAR_16 = VAR_8;

 VAR_13 = FUNC_1(VAR_9->base + 4);
 VAR_14 = FUNC_1(VAR_9->base + 8);
 VAR_10 = (VAR_13 & VAR_1) >> VAR_2;
 VAR_11 = (VAR_13 & VAR_3) >> VAR_4;
 VAR_12 = (VAR_13 & VAR_5) >> VAR_6;
 VAR_15 = VAR_14 & VAR_0;


 VAR_16 *= (VAR_10 * 65536 + VAR_15);
 VAR_11 *= 65536;

 FUNC_0(VAR_16, VAR_11 << VAR_12);

 return VAR_16;
}
