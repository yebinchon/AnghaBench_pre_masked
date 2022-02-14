
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_frac_pll {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct clk_frac_pll *VAR_4)
{
 u32 VAR_5;


 if (FUNC_1(VAR_4->base) & (VAR_3 | VAR_0))
  return 0;


 return FUNC_0(VAR_4->base, VAR_5, VAR_5 & VAR_2, 0,
     VAR_1);
}
