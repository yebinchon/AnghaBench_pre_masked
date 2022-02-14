
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sam9x60_pll {int lock; int regmap; TYPE_1__* characteristics; int id; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ upll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct sam9x60_pll* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_8)
{
 struct sam9x60_pll *VAR_9 = FUNC_4(VAR_8);
 unsigned long VAR_10;

 FUNC_2(VAR_9->lock, VAR_10);

 FUNC_1(VAR_9->regmap, VAR_6, VAR_9->id);

 FUNC_0(VAR_9->regmap, VAR_3,
      VAR_5, 0);

 FUNC_0(VAR_9->regmap, VAR_6,
      VAR_7, VAR_7);

 FUNC_0(VAR_9->regmap, VAR_3, VAR_4, 0);

 if (VAR_9->characteristics->upll)
  FUNC_0(VAR_9->regmap, VAR_0,
       VAR_1 | VAR_2, 0);

 FUNC_0(VAR_9->regmap, VAR_6,
      VAR_7, VAR_7);

 FUNC_3(VAR_9->lock, VAR_10);
}
