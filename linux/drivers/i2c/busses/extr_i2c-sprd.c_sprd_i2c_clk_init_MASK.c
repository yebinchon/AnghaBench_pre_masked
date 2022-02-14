
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct sprd_i2c {int src_clk; struct clk* clk; TYPE_1__ adap; int dev; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 scalar_t__ FUNC_3 (struct clk*,struct clk*) ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 void* FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct sprd_i2c *VAR_0)
{
 struct clk *VAR_1, *VAR_2;

 VAR_1 = FUNC_7(VAR_0->dev, "i2c");
 if (FUNC_0(VAR_1)) {
  FUNC_6(VAR_0->dev, "i2c%d can't get the i2c clock\n",
    VAR_0->adap.nr);
  VAR_1 = ((void*)0);
 }

 VAR_2 = FUNC_7(VAR_0->dev, "source");
 if (FUNC_0(VAR_2)) {
  FUNC_6(VAR_0->dev, "i2c%d can't get the source clock\n",
    VAR_0->adap.nr);
  VAR_2 = ((void*)0);
 }

 if (FUNC_3(VAR_1, VAR_2))
  VAR_0->src_clk = FUNC_2(VAR_1);
 else
  VAR_0->src_clk = 26000000;

 FUNC_4(VAR_0->dev, "i2c%d set source clock is %d\n",
  VAR_0->adap.nr, VAR_0->src_clk);

 VAR_0->clk = FUNC_7(VAR_0->dev, "enable");
 if (FUNC_0(VAR_0->clk)) {
  FUNC_5(VAR_0->dev, "i2c%d can't get the enable clock\n",
   VAR_0->adap.nr);
  return FUNC_1(VAR_0->clk);
 }

 return 0;
}
