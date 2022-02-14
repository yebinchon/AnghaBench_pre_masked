
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mux_hwclock {TYPE_2__* info; } ;
struct clockgen_pll_div {int dummy; } ;
struct clockgen {TYPE_1__* pll; } ;
struct TYPE_6__ {int flags; int pll; int div; } ;
struct TYPE_5__ {TYPE_3__* clksel; } ;
struct TYPE_4__ {struct clockgen_pll_div const* div; } ;


 int VAR_0 ;

__attribute__((used)) static const struct clockgen_pll_div *FUNC_0(struct clockgen *VAR_1,
        struct mux_hwclock *VAR_2,
        int VAR_3)
{
 int VAR_4, VAR_5;

 if (!(VAR_2->info->clksel[VAR_3].flags & VAR_0))
  return ((void*)0);

 VAR_4 = VAR_2->info->clksel[VAR_3].pll;
 VAR_5 = VAR_2->info->clksel[VAR_3].div;

 return &VAR_1->pll[VAR_4].div[VAR_5];
}
