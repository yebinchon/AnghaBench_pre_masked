
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk_bulk_devres {int clks; int num_clks; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct clk_bulk_devres *VAR_2 = VAR_1;

 FUNC_0(VAR_2->num_clks, VAR_2->clks);
}
