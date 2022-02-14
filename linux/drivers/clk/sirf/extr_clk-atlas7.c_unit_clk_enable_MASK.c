
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_unit {scalar_t__ type; int lock; int idle_bit; int bit; int regofs; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct clk_unit* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_4)
{
 u32 VAR_5;
 struct clk_unit *VAR_6 = FUNC_4(VAR_4);
 unsigned long VAR_7;

 VAR_5 = VAR_6->regofs;

 FUNC_2(VAR_6->lock, VAR_7);
 FUNC_1(FUNC_0(VAR_6->bit), VAR_5);
 if (VAR_6->type == VAR_0)
  FUNC_1(FUNC_0(VAR_6->idle_bit), VAR_2);
 else if (VAR_6->type == VAR_1)
  FUNC_1(FUNC_0(VAR_6->idle_bit), VAR_3);

 FUNC_3(VAR_6->lock, VAR_7);
 return 0;
}
