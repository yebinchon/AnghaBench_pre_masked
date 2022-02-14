
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tcon_ch1_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcon_ch1_clk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_2)
{
 struct tcon_ch1_clk *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->reg) >> VAR_1;
 VAR_4 &= VAR_4 >> VAR_0;

 return VAR_4;
}
