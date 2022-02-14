
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_div_internal {int width; } ;
struct sprd_clk_common {int hw; } ;


 long FUNC_0 (int *,unsigned long,unsigned long*,int *,int ,int ) ;

long FUNC_1(struct sprd_clk_common *VAR_0,
    const struct sprd_div_internal *VAR_1,
    unsigned long VAR_2,
    unsigned long *VAR_3)
{
 return FUNC_0(&VAR_0->hw, VAR_2, VAR_3,
      ((void*)0), VAR_1->width, 0);
}
