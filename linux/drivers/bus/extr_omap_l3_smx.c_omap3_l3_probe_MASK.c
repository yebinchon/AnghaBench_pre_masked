
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct omap3_l3 {int rt; void* debug_irq; void* app_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (void*,struct omap3_l3*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct omap3_l3*) ;
 struct omap3_l3* FUNC_5 (int,int ) ;
 int VAR_5 ;
 void* FUNC_6 (struct platform_device*,int) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct omap3_l3*) ;
 int FUNC_9 (void*,int ,int ,char*,struct omap3_l3*) ;
 int FUNC_10 (struct resource*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct omap3_l3 *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_8(VAR_6, VAR_7);

 VAR_8 = FUNC_7(VAR_6, VAR_3, 0);
 if (!VAR_8) {
  FUNC_0(&VAR_6->dev, "couldn't find resource\n");
  VAR_9 = -VAR_0;
  goto err0;
 }
 VAR_7->rt = FUNC_2(VAR_8->start, FUNC_10(VAR_8));
 if (!VAR_7->rt) {
  FUNC_0(&VAR_6->dev, "ioremap failed\n");
  VAR_9 = -VAR_1;
  goto err0;
 }

 VAR_7->debug_irq = FUNC_6(VAR_6, 0);
 VAR_9 = FUNC_9(VAR_7->debug_irq, VAR_5, VAR_4,
     "l3-debug-irq", VAR_7);
 if (VAR_9) {
  FUNC_0(&VAR_6->dev, "couldn't request debug irq\n");
  goto err1;
 }

 VAR_7->app_irq = FUNC_6(VAR_6, 1);
 VAR_9 = FUNC_9(VAR_7->app_irq, VAR_5, VAR_4,
     "l3-app-irq", VAR_7);
 if (VAR_9) {
  FUNC_0(&VAR_6->dev, "couldn't request app irq\n");
  goto err2;
 }

 return 0;

err2:
 FUNC_1(VAR_7->debug_irq, VAR_7);
err1:
 FUNC_3(VAR_7->rt);
err0:
 FUNC_4(VAR_7);
 return VAR_9;
}
