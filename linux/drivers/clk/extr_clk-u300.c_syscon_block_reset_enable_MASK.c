
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk_syscon {int reset; int res_reg; int res_bit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct clk_syscon *VAR_1)
{
 unsigned long VAR_2;
 u16 VAR_3;


 if (!VAR_1->res_reg)
  return;
 FUNC_2(&VAR_0, VAR_2);
 VAR_3 = FUNC_1(VAR_1->res_reg);
 VAR_3 |= FUNC_0(VAR_1->res_bit);
 FUNC_4(VAR_3, VAR_1->res_reg);
 FUNC_3(&VAR_0, VAR_2);
 VAR_1->reset = 1;
}
