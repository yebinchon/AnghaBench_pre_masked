
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_psc_data {scalar_t__ control_base; } ;
struct clk_psc {struct clk_psc_data* psc_data; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct clk_psc* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct clk_psc *VAR_3 = FUNC_1(VAR_2);
 struct clk_psc_data *VAR_4 = VAR_3->psc_data;
 u32 VAR_5 = FUNC_0(VAR_4->control_base + VAR_0);

 return (VAR_5 & VAR_1) ? 1 : 0;
}
