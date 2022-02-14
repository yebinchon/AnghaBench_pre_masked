
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dm_timer {struct clk* fclk; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;

__attribute__((used)) static struct clk *FUNC_1(struct omap_dm_timer *VAR_0)
{
 if (VAR_0 && !FUNC_0(VAR_0->fclk))
  return VAR_0->fclk;
 return ((void*)0);
}
