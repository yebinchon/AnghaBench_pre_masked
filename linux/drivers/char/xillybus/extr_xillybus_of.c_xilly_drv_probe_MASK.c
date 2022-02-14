
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilly_endpoint_hardware {int dummy; } ;
struct xilly_endpoint {int dev; int registers; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct device*,struct xilly_endpoint*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 int FUNC_5 (struct device*,int,int ,int ,int ,struct xilly_endpoint*) ;
 struct xilly_endpoint_hardware VAR_3 ;
 struct xilly_endpoint_hardware VAR_4 ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct xilly_endpoint*) ;
 struct xilly_endpoint* FUNC_10 (int *,struct device*,struct xilly_endpoint_hardware*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct xilly_endpoint *VAR_9;
 int VAR_10;
 int VAR_11;
 struct resource *VAR_12;
 struct xilly_endpoint_hardware *VAR_13 = &VAR_3;

 if (FUNC_6(VAR_8->of_node, "dma-coherent"))
  VAR_13 = &VAR_4;

 VAR_9 = FUNC_10(((void*)0), VAR_8, VAR_13);

 if (!VAR_9)
  return -VAR_1;

 FUNC_3(VAR_8, VAR_9);

 VAR_12 = FUNC_8(VAR_7, VAR_2, 0);
 VAR_9->registers = FUNC_4(VAR_8, VAR_12);

 if (FUNC_0(VAR_9->registers))
  return FUNC_1(VAR_9->registers);

 VAR_11 = FUNC_7(VAR_7, 0);

 VAR_10 = FUNC_5(VAR_8, VAR_11, VAR_5, 0, VAR_6, VAR_9);

 if (VAR_10) {
  FUNC_2(VAR_9->dev,
   "Failed to register IRQ handler. Aborting.\n");
  return -VAR_0;
 }

 return FUNC_9(VAR_9);
}
