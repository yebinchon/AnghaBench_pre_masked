
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct clk_corediv_soc_desc {scalar_t__ ratio_offset; } ;
struct clk_corediv_desc {unsigned long offset; unsigned long mask; } ;
struct clk_corediv {scalar_t__ reg; struct clk_corediv_desc* desc; struct clk_corediv_soc_desc* soc_desc; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 struct clk_corediv* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_corediv *VAR_2 = FUNC_1(VAR_0);
 const struct clk_corediv_soc_desc *VAR_3 = VAR_2->soc_desc;
 const struct clk_corediv_desc *VAR_4 = VAR_2->desc;
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2->reg + VAR_3->ratio_offset);
 VAR_6 = (VAR_5 >> VAR_4->offset) & VAR_4->mask;
 return VAR_1 / VAR_6;
}
