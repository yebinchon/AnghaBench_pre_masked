
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd_clock {size_t cur_div_idx; TYPE_1__* div_table; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int div; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 struct sd_clock* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct sd_clock *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1,
     VAR_2->div_table[VAR_2->cur_div_idx].div);
}
