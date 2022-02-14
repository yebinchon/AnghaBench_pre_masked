
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reset_controller_dev {int dummy; } ;
struct TYPE_2__ {struct clk** clks; } ;
struct davinci_psc_data {TYPE_1__ clk_data; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*,int) ;
 struct davinci_psc_data* FUNC_1 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_2(struct reset_controller_dev *VAR_0,
        unsigned long VAR_1)
{
 struct davinci_psc_data *VAR_2 = FUNC_1(VAR_0);
 struct clk *VAR_3 = VAR_2->clk_data.clks[VAR_1];

 return FUNC_0(VAR_3, 1);
}
