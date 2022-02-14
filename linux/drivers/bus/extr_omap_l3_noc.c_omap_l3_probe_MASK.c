
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct omap_l3 {int num_modules; int debug_irq; int app_irq; int * dev; int * l3_base; } ;
struct of_device_id {int data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,struct resource*) ;
 struct omap_l3* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int ,int,char*,struct omap_l3*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct omap_l3*,int ,int) ;
 struct of_device_id* FUNC_8 (int ,int *) ;
 void* FUNC_9 (struct platform_device*,int) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int) ;
 int FUNC_11 (struct platform_device*,struct omap_l3*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 const struct of_device_id *VAR_8;
 static struct omap_l3 *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_8 = FUNC_8(VAR_6, &VAR_7->dev);
 if (!VAR_8) {
  FUNC_3(&VAR_7->dev, "OF data missing\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_7(VAR_9, VAR_8->data, sizeof(*VAR_9));
 VAR_9->dev = &VAR_7->dev;
 FUNC_11(VAR_7, VAR_9);


 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_9->num_modules; VAR_11++) {
  struct resource *VAR_13;

  if (VAR_9->l3_base[VAR_11] == VAR_4) {

   FUNC_0(VAR_11 == 0);
   VAR_9->l3_base[VAR_11] = VAR_9->l3_base[VAR_11 - 1];
   continue;
  }
  VAR_13 = FUNC_10(VAR_7, VAR_3, VAR_12);
  VAR_9->l3_base[VAR_11] = FUNC_4(&VAR_7->dev, VAR_13);
  if (FUNC_1(VAR_9->l3_base[VAR_11])) {
   FUNC_3(VAR_9->dev, "ioremap %d failed\n", VAR_11);
   return FUNC_2(VAR_9->l3_base[VAR_11]);
  }
  VAR_12++;
 }




 VAR_9->debug_irq = FUNC_9(VAR_7, 0);
 VAR_10 = FUNC_6(VAR_9->dev, VAR_9->debug_irq, VAR_5,
          0x0, "l3-dbg-irq", VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_9->dev, "request_irq failed for %d\n",
   VAR_9->debug_irq);
  return VAR_10;
 }

 VAR_9->app_irq = FUNC_9(VAR_7, 1);
 VAR_10 = FUNC_6(VAR_9->dev, VAR_9->app_irq, VAR_5,
          0x0, "l3-app-irq", VAR_9);
 if (VAR_10)
  FUNC_3(VAR_9->dev, "request_irq failed for %d\n", VAR_9->app_irq);

 return VAR_10;
}
