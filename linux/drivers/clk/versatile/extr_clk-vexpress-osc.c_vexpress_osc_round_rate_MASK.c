
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vexpress_osc {unsigned long rate_min; unsigned long rate_max; } ;
struct clk_hw {int dummy; } ;


 struct vexpress_osc* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long *VAR_2)
{
 struct vexpress_osc *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->rate_min && VAR_1 < VAR_3->rate_min)
  VAR_1 = VAR_3->rate_min;

 if (VAR_3->rate_max && VAR_1 > VAR_3->rate_max)
  VAR_1 = VAR_3->rate_max;

 return VAR_1;
}
