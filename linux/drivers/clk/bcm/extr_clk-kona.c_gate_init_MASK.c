
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccu_data {int dummy; } ;
struct bcm_clk_gate {int dummy; } ;


 int FUNC_0 (struct ccu_data*,struct bcm_clk_gate*) ;
 int FUNC_1 (struct bcm_clk_gate*) ;

__attribute__((used)) static bool FUNC_2(struct ccu_data *VAR_0, struct bcm_clk_gate *VAR_1)
{
 if (!FUNC_1(VAR_1))
  return 1;
 return FUNC_0(VAR_0, VAR_1);
}
