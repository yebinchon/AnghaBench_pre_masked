
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ingenic_clk {size_t idx; struct ingenic_cgu* cgu; } ;
struct TYPE_2__ {unsigned int div; } ;
struct ingenic_cgu_clk_info {int type; TYPE_1__ fixdiv; } ;
struct ingenic_cgu {struct ingenic_cgu_clk_info* clock_info; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (unsigned long,unsigned int) ;
 unsigned int FUNC_1 (struct ingenic_cgu_clk_info const*,unsigned long,unsigned long) ;
 struct ingenic_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long
FUNC_3(struct clk_hw *VAR_2, unsigned long VAR_3,
         unsigned long *VAR_4)
{
 struct ingenic_clk *VAR_5 = FUNC_2(VAR_2);
 struct ingenic_cgu *VAR_6 = VAR_5->cgu;
 const struct ingenic_cgu_clk_info *VAR_7;
 unsigned int VAR_8 = 1;

 VAR_7 = &VAR_6->clock_info[VAR_5->idx];

 if (VAR_7->type & VAR_0)
  VAR_8 = FUNC_1(VAR_7, *VAR_4, VAR_3);
 else if (VAR_7->type & VAR_1)
  VAR_8 = VAR_7->fixdiv.div;

 return FUNC_0(*VAR_4, VAR_8);
}
