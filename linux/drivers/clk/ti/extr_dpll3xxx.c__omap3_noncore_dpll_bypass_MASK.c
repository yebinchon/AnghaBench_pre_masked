
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct clk_hw_omap {int hw; TYPE_1__* dpll_data; } ;
struct TYPE_2__ {int modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_hw_omap*,int) ;
 int FUNC_1 (struct clk_hw_omap*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct clk_hw_omap*) ;
 scalar_t__ FUNC_4 (struct clk_hw_omap*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw_omap *VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 if (!(VAR_2->dpll_data->modes & (1 << VAR_0)))
  return -VAR_1;

 FUNC_5("clock: configuring DPLL %s for low-power bypass\n",
   FUNC_2(&VAR_2->hw));

 VAR_4 = FUNC_4(VAR_2);

 FUNC_0(VAR_2, VAR_0);

 VAR_3 = FUNC_1(VAR_2, 0);

 if (VAR_4)
  FUNC_3(VAR_2);

 return VAR_3;
}
