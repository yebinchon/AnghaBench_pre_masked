
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_alpha_pll {int num_vco; TYPE_1__* vco_table; } ;
struct TYPE_2__ {unsigned long min_freq; unsigned long max_freq; } ;


 scalar_t__ FUNC_0 (struct clk_alpha_pll*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,int *,int *,int ) ;
 long FUNC_2 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (struct clk_alpha_pll*) ;
 struct clk_alpha_pll* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_5(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long *VAR_2)
{
 struct clk_alpha_pll *VAR_3 = FUNC_4(VAR_0);
 u32 VAR_4, VAR_5 = FUNC_3(VAR_3);
 u64 VAR_6;
 unsigned long VAR_7, VAR_8;

 VAR_1 = FUNC_1(VAR_1, *VAR_2, &VAR_4, &VAR_6, VAR_5);
 if (!VAR_3->vco_table || FUNC_0(VAR_3, VAR_1))
  return VAR_1;

 VAR_7 = VAR_3->vco_table[0].min_freq;
 VAR_8 = VAR_3->vco_table[VAR_3->num_vco - 1].max_freq;

 return FUNC_2(VAR_1, VAR_7, VAR_8);
}
