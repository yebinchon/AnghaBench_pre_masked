
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_device {scalar_t__ irq; int type; int node; scalar_t__ of_node; scalar_t__ use_count; int port_id; int * mmio_base; int phys_base; int clk; struct platform_device* pdev; } ;
struct resource {int start; } ;
struct platform_device_id {scalar_t__ driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {int id; int name; struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int *) ;
 int * FUNC_4 (struct device*,int ,int ) ;
 struct ssp_device* FUNC_5 (struct device*,int,int ) ;
 struct resource* FUNC_6 (struct device*,int ,int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct of_device_id* FUNC_10 (int ,struct device*) ;
 int FUNC_11 (int ) ;
 struct platform_device_id* FUNC_12 (struct platform_device*) ;
 scalar_t__ FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct ssp_device*) ;
 int VAR_5 ;
 int FUNC_16 (struct resource*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_8)
{
 struct resource *VAR_9;
 struct ssp_device *VAR_10;
 struct device *VAR_11 = &VAR_8->dev;

 VAR_10 = FUNC_5(VAR_11, sizeof(struct ssp_device), VAR_3);
 if (VAR_10 == ((void*)0))
  return -VAR_2;

 VAR_10->pdev = VAR_8;

 VAR_10->clk = FUNC_3(VAR_11, ((void*)0));
 if (FUNC_0(VAR_10->clk))
  return FUNC_1(VAR_10->clk);

 VAR_9 = FUNC_14(VAR_8, VAR_4, 0);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_11, "no memory resource defined\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_6(VAR_11, VAR_9->start, FUNC_16(VAR_9),
          VAR_8->name);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_11, "failed to request memory resource\n");
  return -VAR_0;
 }

 VAR_10->phys_base = VAR_9->start;

 VAR_10->mmio_base = FUNC_4(VAR_11, VAR_9->start, FUNC_16(VAR_9));
 if (VAR_10->mmio_base == ((void*)0)) {
  FUNC_2(VAR_11, "failed to ioremap() registers\n");
  return -VAR_1;
 }

 VAR_10->irq = FUNC_13(VAR_8, 0);
 if (VAR_10->irq < 0) {
  FUNC_2(VAR_11, "no IRQ resource defined\n");
  return -VAR_1;
 }

 if (VAR_11->of_node) {
  const struct of_device_id *VAR_12 =
   FUNC_10(FUNC_11(VAR_5), VAR_11);
  VAR_10->type = (int) VAR_12->data;
 } else {
  const struct platform_device_id *VAR_13 =
   FUNC_12(VAR_8);
  VAR_10->type = (int) VAR_13->driver_data;




  VAR_10->port_id = VAR_8->id + 1;
 }

 VAR_10->use_count = 0;
 VAR_10->of_node = VAR_11->of_node;

 FUNC_8(&VAR_7);
 FUNC_7(&VAR_10->node, &VAR_6);
 FUNC_9(&VAR_7);

 FUNC_15(VAR_8, VAR_10);

 return 0;
}
