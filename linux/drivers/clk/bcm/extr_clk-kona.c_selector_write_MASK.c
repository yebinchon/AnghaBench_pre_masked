
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ccu_data {int dummy; } ;
struct bcm_clk_trig {int dummy; } ;
struct bcm_clk_sel {scalar_t__ clk_index; } ;
struct bcm_clk_gate {int dummy; } ;


 int FUNC_0 (struct ccu_data*) ;
 int FUNC_1 (struct ccu_data*) ;
 int FUNC_2 (struct ccu_data*,struct bcm_clk_gate*,struct bcm_clk_sel*,struct bcm_clk_trig*) ;
 unsigned long FUNC_3 (struct ccu_data*) ;
 int FUNC_4 (struct ccu_data*,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ccu_data *VAR_0, struct bcm_clk_gate *VAR_1,
   struct bcm_clk_sel *VAR_2, struct bcm_clk_trig *VAR_3,
   u8 VAR_4)
{
 unsigned long VAR_5;
 u8 VAR_6;
 int VAR_7;

 VAR_6 = VAR_2->clk_index;
 if (VAR_6 == VAR_4)
  return 0;

 VAR_2->clk_index = VAR_4;

 VAR_5 = FUNC_3(VAR_0);
 FUNC_1(VAR_0);

 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_0(VAR_0);
 FUNC_4(VAR_0, VAR_5);

 if (VAR_7)
  VAR_2->clk_index = VAR_6;

 return VAR_7;
}
