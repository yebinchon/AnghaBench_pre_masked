
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap3_l3 {int rt; int debug_irq; int app_irq; } ;


 int FUNC_0 (int ,struct omap3_l3*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct omap3_l3*) ;
 struct omap3_l3* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct omap3_l3 *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->app_irq, VAR_1);
 FUNC_0(VAR_1->debug_irq, VAR_1);
 FUNC_1(VAR_1->rt);
 FUNC_2(VAR_1);

 return 0;
}
