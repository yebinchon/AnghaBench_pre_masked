
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_clk_audio_div_table {unsigned long rate; unsigned int frac_reg; unsigned int int_reg; } ;
struct clk_zx_audio_divider {scalar_t__ reg_base; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct clk_zx_audio_divider*,struct zx_clk_audio_div_table*,unsigned long,unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned long) ;
 unsigned int FUNC_3 (scalar_t__) ;
 struct clk_zx_audio_divider* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2,
        unsigned long VAR_3)
{
 struct clk_zx_audio_divider *VAR_4 = FUNC_4(VAR_1);
 struct zx_clk_audio_div_table VAR_5;
 unsigned int VAR_6;

 FUNC_0(VAR_4, &VAR_5, VAR_2, VAR_3);
 if (VAR_5.rate != VAR_2)
  FUNC_2("the real rate is:%ld", VAR_5.rate);

 FUNC_5(VAR_5.frac_reg, VAR_4->reg_base);

 VAR_6 = FUNC_3(VAR_4->reg_base + 0x4);
 VAR_6 &= ~0xffff;
 VAR_6 |= VAR_5.int_reg | VAR_0;
 FUNC_5(VAR_6, VAR_4->reg_base + 0x4);

 FUNC_1(1);

 VAR_6 = FUNC_3(VAR_4->reg_base + 0x4);
 VAR_6 &= ~VAR_0;
 FUNC_5(VAR_6, VAR_4->reg_base + 0x4);

 return 0;
}
