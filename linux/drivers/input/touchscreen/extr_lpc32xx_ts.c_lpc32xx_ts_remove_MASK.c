
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct lpc32xx_tsc {int tsc_base; int clk; int dev; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct lpc32xx_tsc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lpc32xx_tsc*) ;
 struct lpc32xx_tsc* FUNC_5 (struct platform_device*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct lpc32xx_tsc *VAR_2 = FUNC_5(VAR_1);
 struct resource *VAR_3;

 FUNC_1(VAR_2->irq, VAR_2);

 FUNC_2(VAR_2->dev);

 FUNC_0(VAR_2->clk);

 FUNC_3(VAR_2->tsc_base);
 VAR_3 = FUNC_6(VAR_1, VAR_0, 0);
 FUNC_7(VAR_3->start, FUNC_8(VAR_3));

 FUNC_4(VAR_2);

 return 0;
}
