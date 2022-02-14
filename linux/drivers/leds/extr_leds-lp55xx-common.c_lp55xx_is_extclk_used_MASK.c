
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp55xx_chip {TYPE_1__* cl; struct clk* clk; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct clk*) ;
 scalar_t__ FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (int *,char*,...) ;
 struct clk* FUNC_5 (int *,char*) ;

bool FUNC_6(struct lp55xx_chip *VAR_1)
{
 struct clk *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_5(&VAR_1->cl->dev, "32k_clk");
 if (FUNC_0(VAR_2))
  goto use_internal_clk;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto use_internal_clk;

 if (FUNC_2(VAR_2) != VAR_0) {
  FUNC_1(VAR_2);
  goto use_internal_clk;
 }

 FUNC_4(&VAR_1->cl->dev, "%dHz external clock used\n", VAR_0);

 VAR_1->clk = VAR_2;
 return 1;

use_internal_clk:
 FUNC_4(&VAR_1->cl->dev, "internal clock used\n");
 return 0;
}
