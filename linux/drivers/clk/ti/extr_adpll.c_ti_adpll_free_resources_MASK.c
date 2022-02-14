
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_adpll_data {struct ti_adpll_clock* clocks; } ;
struct ti_adpll_clock {int clk; int (* unregister ) (int ) ;scalar_t__ cl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ti_adpll_data *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_0; VAR_2 >= 0; VAR_2--) {
  struct ti_adpll_clock *VAR_3 = &VAR_1->clocks[VAR_2];

  if (!VAR_3 || FUNC_0(VAR_3->clk))
   continue;
  if (VAR_3->cl)
   FUNC_1(VAR_3->cl);
  if (VAR_3->unregister)
   VAR_3->unregister(VAR_3->clk);
 }
}
