
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 struct clk* FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 struct clk* FUNC_9 (TYPE_1__*,struct resource*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct clk* VAR_12 ;
 int FUNC_12 (int ) ;
 int VAR_13 ;
 int FUNC_13 (int ,int ,int) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_14)
{
 struct clk *VAR_15;
 struct resource *VAR_16;

 if (FUNC_13(VAR_14->dev.of_node, VAR_13, 6) != 6) {
  FUNC_7(&VAR_14->dev, "Failed to get IRQ list\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_14(VAR_14, VAR_5, 0);


 VAR_12 = FUNC_9(&VAR_14->dev, VAR_16);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);


 VAR_15 = FUNC_4(&VAR_14->dev, ((void*)0));
 if (FUNC_0(VAR_15)) {
  FUNC_7(&VAR_14->dev, "Failed to get clock\n");
  return -VAR_2;
 }
 FUNC_3(VAR_15);


 FUNC_11();


 if (((FUNC_12(VAR_3) >> 8) & 0xff) != VAR_4) {
  FUNC_7(&VAR_14->dev, "Failed to find magic\n");
  FUNC_10();
  FUNC_2(VAR_15);
  FUNC_5(VAR_15);
  return -VAR_1;
 }


 FUNC_6(&VAR_14->dev, "timer1a", VAR_6);
 FUNC_6(&VAR_14->dev, "timer1b", VAR_7);
 FUNC_6(&VAR_14->dev, "timer2a", VAR_8);
 FUNC_6(&VAR_14->dev, "timer2b", VAR_9);
 FUNC_6(&VAR_14->dev, "timer3a", VAR_10);
 FUNC_6(&VAR_14->dev, "timer3b", VAR_11);

 FUNC_8(&VAR_14->dev, "gptu: 6 timers loaded\n");

 return 0;
}
