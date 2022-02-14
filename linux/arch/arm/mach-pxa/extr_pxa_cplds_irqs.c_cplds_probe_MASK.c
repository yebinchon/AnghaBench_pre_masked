
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct cplds {scalar_t__ irq; int irqdomain; scalar_t__ base; int irq_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*,char*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct resource*) ;
 struct cplds* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ,unsigned long,int ,struct cplds*) ;
 int FUNC_7 (int ,int,int ,int) ;
 int FUNC_8 (int ,int,int *,struct cplds*) ;
 unsigned long FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 void* FUNC_11 (struct platform_device*,int) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct cplds*) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_11)
{
 struct resource *VAR_12;
 struct cplds *VAR_13;
 int VAR_14;
 int VAR_15;
 unsigned long VAR_16 = 0;

 VAR_13 = FUNC_5(&VAR_11->dev, sizeof(*VAR_13), VAR_7);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->irq = FUNC_11(VAR_11, 0);
 if (VAR_13->irq <= 0)
  return VAR_13->irq;

 VAR_15 = FUNC_11(VAR_11, 1);
 if (VAR_15 < 0)
  VAR_15 = 0;

 VAR_12 = FUNC_12(VAR_11, VAR_8, 0);
 VAR_13->base = FUNC_4(&VAR_11->dev, VAR_12);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 FUNC_13(VAR_11, VAR_13);

 FUNC_14(VAR_13->irq_mask, VAR_13->base + VAR_5);
 FUNC_14(0, VAR_13->base + VAR_6);

 VAR_16 = FUNC_9(VAR_13->irq);
 VAR_14 = FUNC_6(&VAR_11->dev, VAR_13->irq, VAR_10,
          VAR_16, FUNC_3(&VAR_11->dev), VAR_13);
 if (VAR_14 == -VAR_3)
  return -VAR_4;

 if (VAR_14) {
  FUNC_2(&VAR_11->dev, "couldn't request main irq%d: %d\n",
   VAR_13->irq, VAR_14);
  return VAR_14;
 }

 FUNC_10(VAR_13->irq, 1);
 VAR_13->irqdomain = FUNC_8(VAR_11->dev.of_node,
            VAR_0,
            &VAR_9, VAR_13);
 if (!VAR_13->irqdomain)
  return -VAR_1;

 if (VAR_15) {
  VAR_14 = FUNC_7(VAR_13->irqdomain, VAR_15, 0,
       VAR_0);
  if (VAR_14) {
   FUNC_2(&VAR_11->dev, "couldn't create the irq mapping %d..%d\n",
    VAR_15, VAR_15 + VAR_0);
   return VAR_14;
  }
 }

 return 0;
}
