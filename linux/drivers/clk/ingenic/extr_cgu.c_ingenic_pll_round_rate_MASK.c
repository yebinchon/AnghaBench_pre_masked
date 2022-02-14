
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_clk {int dummy; } ;
struct ingenic_cgu_clk_info {int dummy; } ;
struct clk_hw {int dummy; } ;


 long FUNC_0 (struct ingenic_cgu_clk_info const*,unsigned long,unsigned long,int *,int *,int *) ;
 struct ingenic_cgu_clk_info* FUNC_1 (struct ingenic_clk*) ;
 struct ingenic_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long
FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long *VAR_2)
{
 struct ingenic_clk *VAR_3 = FUNC_2(VAR_0);
 const struct ingenic_cgu_clk_info *VAR_4 = FUNC_1(VAR_3);

 return FUNC_0(VAR_4, VAR_1, *VAR_2, ((void*)0), ((void*)0), ((void*)0));
}
