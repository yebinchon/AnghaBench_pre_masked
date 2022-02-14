
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_clk_audio_div_table {int int_reg; int frac_reg; } ;
struct clk_zx_audio_divider {int dummy; } ;
struct clk_hw {int dummy; } ;


 long FUNC_0 (struct clk_zx_audio_divider*,int ,int ,unsigned long) ;
 int FUNC_1 (struct clk_zx_audio_divider*,struct zx_clk_audio_div_table*,unsigned long,unsigned long) ;
 struct clk_zx_audio_divider* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long *VAR_2)
{
 struct clk_zx_audio_divider *VAR_3 = FUNC_2(VAR_0);
 struct zx_clk_audio_div_table VAR_4;

 FUNC_1(VAR_3, &VAR_4, VAR_1, *VAR_2);

 return FUNC_0(VAR_3, VAR_4.frac_reg, VAR_4.int_reg, *VAR_2);
}
