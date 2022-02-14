
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mcs814x_wdt {int wdt_dev; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mcs814x_wdt*) ;
 struct mcs814x_wdt* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct mcs814x_wdt *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->clk);
 FUNC_5(&VAR_1->wdt_dev);
 FUNC_4(&VAR_1->wdt_dev, ((void*)0));
 FUNC_1(VAR_1);
 FUNC_3(VAR_0, ((void*)0));

 return 0;
}
