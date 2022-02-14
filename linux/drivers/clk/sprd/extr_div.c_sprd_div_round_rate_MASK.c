
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_div {int div; int common; } ;
struct clk_hw {int dummy; } ;


 struct sprd_div* FUNC_0 (struct clk_hw*) ;
 long FUNC_1 (int *,int *,unsigned long,unsigned long*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long *VAR_2)
{
 struct sprd_div *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_3->common, &VAR_3->div,
       VAR_1, VAR_2);
}
