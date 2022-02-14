
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct etnaviv_gpu {scalar_t__ irq; struct device* dev; int * clk_shader; void* base_rate_shader; int * clk_core; void* base_rate_core; int * clk_bus; int * clk_reg; int * mmio; int fence_lock; int lock; } ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*,char*,int,...) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,struct etnaviv_gpu*) ;
 void* FUNC_8 (struct device*,char*) ;
 struct etnaviv_gpu* FUNC_9 (struct device*,int,int ) ;
 int * FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct device*,int,int ,int ,int ,struct etnaviv_gpu*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*,int) ;
 int FUNC_16 (struct device*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct etnaviv_gpu *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_9(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = &VAR_4->dev;
 FUNC_12(&VAR_6->lock);
 FUNC_12(&VAR_6->fence_lock);


 VAR_6->mmio = FUNC_10(VAR_4, 0);
 if (FUNC_1(VAR_6->mmio))
  return FUNC_2(VAR_6->mmio);


 VAR_6->irq = FUNC_13(VAR_4, 0);
 if (VAR_6->irq < 0) {
  FUNC_5(VAR_5, "failed to get irq: %d\n", VAR_6->irq);
  return VAR_6->irq;
 }

 VAR_7 = FUNC_11(&VAR_4->dev, VAR_6->irq, VAR_3, 0,
          FUNC_6(VAR_6->dev), VAR_6);
 if (VAR_7) {
  FUNC_5(VAR_5, "failed to request IRQ%u: %d\n", VAR_6->irq, VAR_7);
  return VAR_7;
 }


 VAR_6->clk_reg = FUNC_8(&VAR_4->dev, "reg");
 FUNC_0("clk_reg: %p", VAR_6->clk_reg);
 if (FUNC_1(VAR_6->clk_reg))
  VAR_6->clk_reg = ((void*)0);

 VAR_6->clk_bus = FUNC_8(&VAR_4->dev, "bus");
 FUNC_0("clk_bus: %p", VAR_6->clk_bus);
 if (FUNC_1(VAR_6->clk_bus))
  VAR_6->clk_bus = ((void*)0);

 VAR_6->clk_core = FUNC_8(&VAR_4->dev, "core");
 FUNC_0("clk_core: %p", VAR_6->clk_core);
 if (FUNC_1(VAR_6->clk_core))
  VAR_6->clk_core = ((void*)0);
 VAR_6->base_rate_core = FUNC_3(VAR_6->clk_core);

 VAR_6->clk_shader = FUNC_8(&VAR_4->dev, "shader");
 FUNC_0("clk_shader: %p", VAR_6->clk_shader);
 if (FUNC_1(VAR_6->clk_shader))
  VAR_6->clk_shader = ((void*)0);
 VAR_6->base_rate_shader = FUNC_3(VAR_6->clk_shader);


 FUNC_7(VAR_5, VAR_6);






 FUNC_16(VAR_6->dev);
 FUNC_15(VAR_6->dev, 200);
 FUNC_14(VAR_6->dev);

 VAR_7 = FUNC_4(&VAR_4->dev, &VAR_2);
 if (VAR_7 < 0) {
  FUNC_5(&VAR_4->dev, "failed to register component: %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
