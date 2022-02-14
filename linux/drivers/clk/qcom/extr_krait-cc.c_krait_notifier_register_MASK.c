
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct krait_mux_clk {TYPE_1__ clk_nb; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*,TYPE_1__*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct clk *VAR_2,
       struct krait_mux_clk *VAR_3)
{
 int VAR_4 = 0;

 VAR_3->clk_nb.notifier_call = VAR_0;
 VAR_4 = FUNC_0(VAR_2, &VAR_3->clk_nb);
 if (VAR_4)
  FUNC_1(VAR_1, "failed to register clock notifier: %d\n", VAR_4);

 return VAR_4;
}
