
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct ccu_mult {int enable; int common; } ;


 void FUNC_0 (int *,int ) ;
 struct ccu_mult* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct ccu_mult *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->common, VAR_1->enable);
}
