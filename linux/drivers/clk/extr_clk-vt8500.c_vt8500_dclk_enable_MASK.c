
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_device {int lock; int en_reg; int en_bit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct clk_device* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_0)
{
 struct clk_device *VAR_1 = FUNC_4(VAR_0);
 u32 VAR_2;
 unsigned long VAR_3 = 0;

 FUNC_2(VAR_1->lock, VAR_3);

 VAR_2 = FUNC_1(VAR_1->en_reg);
 VAR_2 |= FUNC_0(VAR_1->en_bit);
 FUNC_5(VAR_2, VAR_1->en_reg);

 FUNC_3(VAR_1->lock, VAR_3);
 return 0;
}
