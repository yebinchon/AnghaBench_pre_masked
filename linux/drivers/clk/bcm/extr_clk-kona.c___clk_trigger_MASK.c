
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccu_data {int dummy; } ;
struct bcm_clk_trig {int bit; int offset; } ;


 int FUNC_0 (struct ccu_data*,int ,int,int) ;
 int FUNC_1 (struct ccu_data*,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct ccu_data *VAR_0, struct bcm_clk_trig *VAR_1)
{

 FUNC_1(VAR_0, VAR_1->offset, 1 << VAR_1->bit);

 return FUNC_0(VAR_0, VAR_1->offset, VAR_1->bit, 0);
}
