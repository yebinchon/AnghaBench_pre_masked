
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


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk_alpha_pll*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,int *,int *,int ) ;
 long FUNC_2 (unsigned long,unsigned long,unsigned long) ;
 struct clk_alpha_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
         unsigned long *VAR_3)
{
 struct clk_alpha_pll *VAR_4 = FUNC_3(VAR_1);
 unsigned long VAR_5, VAR_6;
 u32 VAR_7;
 u64 VAR_8;

 VAR_2 = FUNC_1(VAR_2, *VAR_3,
        &VAR_7, &VAR_8, VAR_0);
 if (!VAR_4->vco_table || FUNC_0(VAR_4, VAR_2))
  return VAR_2;

 VAR_5 = VAR_4->vco_table[0].min_freq;
 VAR_6 = VAR_4->vco_table[VAR_4->num_vco - 1].max_freq;

 return FUNC_2(VAR_2, VAR_5, VAR_6);
}
