
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg; } ;
struct sd_clock {unsigned int div_num; unsigned int cur_div_idx; TYPE_2__* div_table; TYPE_1__ csn; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {unsigned int div; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 unsigned int FUNC_1 (struct sd_clock*,unsigned long,unsigned long) ;
 struct sd_clock* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3, unsigned long VAR_4,
       unsigned long VAR_5)
{
 struct sd_clock *VAR_6 = FUNC_2(VAR_3);
 unsigned int VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5);
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->div_num; VAR_8++)
  if (VAR_7 == VAR_6->div_table[VAR_8].div)
   break;

 if (VAR_8 >= VAR_6->div_num)
  return -VAR_2;

 VAR_6->cur_div_idx = VAR_8;

 FUNC_0(VAR_6->csn.reg, VAR_1 | VAR_0,
         VAR_6->div_table[VAR_8].val &
         (VAR_1 | VAR_0));

 return 0;
}
