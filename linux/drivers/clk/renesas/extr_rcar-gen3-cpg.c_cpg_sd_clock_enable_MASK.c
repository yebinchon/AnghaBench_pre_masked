
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg; } ;
struct sd_clock {size_t cur_div_idx; TYPE_2__* div_table; TYPE_1__ csn; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int val; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 struct sd_clock* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct sd_clock *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->csn.reg, VAR_0,
         VAR_2->div_table[VAR_2->cur_div_idx].val &
         VAR_0);

 return 0;
}
