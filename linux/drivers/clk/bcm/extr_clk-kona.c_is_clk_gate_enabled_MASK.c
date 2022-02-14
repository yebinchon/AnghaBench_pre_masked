
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccu_data {int dummy; } ;
struct bcm_clk_gate {int dummy; } ;


 int FUNC_0 (struct ccu_data*,struct bcm_clk_gate*) ;
 long FUNC_1 (struct ccu_data*) ;
 int FUNC_2 (struct ccu_data*,long) ;
 int FUNC_3 (struct bcm_clk_gate*) ;

__attribute__((used)) static bool
FUNC_4(struct ccu_data *VAR_0, struct bcm_clk_gate *VAR_1)
{
 long VAR_2;
 bool VAR_3;


 if (!FUNC_3(VAR_1))
  return 1;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_2);

 return VAR_3;
}
