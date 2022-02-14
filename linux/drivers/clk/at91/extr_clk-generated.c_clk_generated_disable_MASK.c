
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct clk_generated {int id; int lock; TYPE_1__* layout; int regmap; } ;
struct TYPE_2__ {int pid_mask; int cmd; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct clk_generated* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_1)
{
 struct clk_generated *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;

 FUNC_2(VAR_2->lock, VAR_3);
 FUNC_1(VAR_2->regmap, VAR_2->layout->offset,
       (VAR_2->id & VAR_2->layout->pid_mask));
 FUNC_0(VAR_2->regmap, VAR_2->layout->offset,
      VAR_2->layout->cmd | VAR_0,
      VAR_2->layout->cmd);
 FUNC_3(VAR_2->lock, VAR_3);
}
