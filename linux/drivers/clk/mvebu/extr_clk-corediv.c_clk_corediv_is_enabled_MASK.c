
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_corediv_soc_desc {int enable_bit_offset; } ;
struct clk_corediv_desc {int fieldbit; } ;
struct clk_corediv {int reg; struct clk_corediv_desc* desc; struct clk_corediv_soc_desc* soc_desc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct clk_corediv* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_corediv *VAR_1 = FUNC_2(VAR_0);
 const struct clk_corediv_soc_desc *VAR_2 = VAR_1->soc_desc;
 const struct clk_corediv_desc *VAR_3 = VAR_1->desc;
 u32 VAR_4 = FUNC_0(VAR_3->fieldbit) << VAR_2->enable_bit_offset;

 return !!(FUNC_1(VAR_1->reg) & VAR_4);
}
