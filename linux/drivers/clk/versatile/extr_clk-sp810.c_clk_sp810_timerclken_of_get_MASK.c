
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {int args_count; size_t* args; } ;
struct clk_sp810 {TYPE_1__* timerclken; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* clk; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct clk *FUNC_2(struct of_phandle_args *VAR_0,
  void *VAR_1)
{
 struct clk_sp810 *VAR_2 = VAR_1;

 if (FUNC_1(VAR_0->args_count != 1 ||
      VAR_0->args[0] >= FUNC_0(VAR_2->timerclken)))
  return ((void*)0);

 return VAR_2->timerclken[VAR_0->args[0]].clk;
}
