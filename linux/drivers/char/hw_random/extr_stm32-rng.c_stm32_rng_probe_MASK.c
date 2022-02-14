
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long priv; int quality; int read; int cleanup; int init; int name; } ;
struct stm32_rng_private {TYPE_1__ rng; int ced; int rst; int clk; int base; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct stm32_rng_private*) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*,TYPE_1__*) ;
 int FUNC_6 (struct device*,struct resource*) ;
 struct stm32_rng_private* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int *) ;
 int FUNC_9 (struct device_node*,int ,struct resource*) ;
 int FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*,int) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 struct stm32_rng_private *VAR_8;
 struct resource VAR_9;
 int VAR_10;

 VAR_8 = FUNC_7(VAR_6, sizeof(struct stm32_rng_private), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_9(VAR_7, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_8->base = FUNC_6(VAR_6, &VAR_9);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->clk = FUNC_4(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk))
  return FUNC_1(VAR_8->clk);

 VAR_8->rst = FUNC_8(&VAR_5->dev, ((void*)0));
 if (!FUNC_0(VAR_8->rst)) {
  FUNC_14(VAR_8->rst);
  FUNC_16(2);
  FUNC_15(VAR_8->rst);
 }

 VAR_8->ced = FUNC_10(VAR_7, "clock-error-detect");

 FUNC_3(VAR_6, VAR_8);

 VAR_8->rng.name = FUNC_2(VAR_6),

 VAR_8->rng.init = VAR_3,
 VAR_8->rng.cleanup = VAR_2,

 VAR_8->rng.read = VAR_4,
 VAR_8->rng.priv = (unsigned long) VAR_6;
 VAR_8->rng.quality = 900;

 FUNC_12(VAR_6, 100);
 FUNC_13(VAR_6);
 FUNC_11(VAR_6);

 return FUNC_5(VAR_6, &VAR_8->rng);
}
