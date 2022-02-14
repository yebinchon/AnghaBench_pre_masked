
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ingenic_clk {size_t idx; struct ingenic_cgu* cgu; } ;
struct TYPE_4__ {unsigned long div; } ;
struct TYPE_3__ {size_t shift; size_t* div_table; size_t div; scalar_t__ bits; scalar_t__ reg; } ;
struct ingenic_cgu_clk_info {int type; TYPE_2__ fixdiv; TYPE_1__ div; } ;
struct ingenic_cgu {scalar_t__ base; struct ingenic_cgu_clk_info* clock_info; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__,int ) ;
 size_t FUNC_1 (scalar_t__) ;
 struct ingenic_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_3(struct clk_hw *VAR_2, unsigned long VAR_3)
{
 struct ingenic_clk *VAR_4 = FUNC_2(VAR_2);
 struct ingenic_cgu *VAR_5 = VAR_4->cgu;
 const struct ingenic_cgu_clk_info *VAR_6;
 unsigned long VAR_7 = VAR_3;
 u32 VAR_8, VAR_9;

 VAR_6 = &VAR_5->clock_info[VAR_4->idx];

 if (VAR_6->type & VAR_0) {
  VAR_8 = FUNC_1(VAR_5->base + VAR_6->div.reg);
  VAR_9 = (VAR_8 >> VAR_6->div.shift) &
        FUNC_0(VAR_6->div.bits - 1, 0);

  if (VAR_6->div.div_table)
   VAR_9 = VAR_6->div.div_table[VAR_9];
  else
   VAR_9 = (VAR_9 + 1) * VAR_6->div.div;

  VAR_7 /= VAR_9;
 } else if (VAR_6->type & VAR_1) {
  VAR_7 /= VAR_6->fixdiv.div;
 }

 return VAR_7;
}
