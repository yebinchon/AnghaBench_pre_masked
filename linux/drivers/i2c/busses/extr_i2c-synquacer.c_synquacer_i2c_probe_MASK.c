
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_17__ {int of_node; struct TYPE_17__* parent; } ;
struct TYPE_16__ {TYPE_4__ dev; int nr; } ;
struct synquacer_i2c {int pclkrate; TYPE_1__ adapter; int speed_khz; int completion; TYPE_4__* dev; int state; int irq; int base; int pclk; } ;
struct resource {int dummy; } ;
struct platform_device {TYPE_4__ dev; int id; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,char*,int ) ;
 int FUNC_8 (TYPE_4__*,char*,...) ;
 int FUNC_9 (TYPE_4__*,char*,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,char*,int*) ;
 int FUNC_12 (TYPE_4__*,char*) ;
 int FUNC_13 (TYPE_4__*,struct resource*) ;
 struct synquacer_i2c* FUNC_14 (TYPE_4__*,int,int ) ;
 int FUNC_15 (TYPE_4__*,int ,int ,int ,int ,struct synquacer_i2c*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,struct synquacer_i2c*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct platform_device*,int ) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct platform_device*,struct synquacer_i2c*) ;
 int FUNC_23 (struct synquacer_i2c*) ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_13)
{
 struct synquacer_i2c *VAR_14;
 struct resource *VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_14 = FUNC_14(&VAR_13->dev, sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_2;

 VAR_16 = FUNC_16(&VAR_13->dev);
 if (!VAR_16)
  FUNC_11(&VAR_13->dev, "clock-frequency",
      &VAR_16);

 FUNC_11(&VAR_13->dev, "socionext,pclk-rate",
     &VAR_14->pclkrate);

 VAR_14->pclk = FUNC_12(&VAR_13->dev, "pclk");
 if (FUNC_2(VAR_14->pclk) && FUNC_4(VAR_14->pclk) == -VAR_3)
  return -VAR_3;
 if (!FUNC_3(VAR_14->pclk)) {
  FUNC_7(&VAR_13->dev, "clock source %p\n", VAR_14->pclk);

  VAR_17 = FUNC_6(VAR_14->pclk);
  if (VAR_17) {
   FUNC_8(&VAR_13->dev, "failed to enable clock (%d)\n",
    VAR_17);
   return VAR_17;
  }
  VAR_14->pclkrate = FUNC_5(VAR_14->pclk);
 }

 if (VAR_14->pclkrate < VAR_8 ||
     VAR_14->pclkrate > VAR_7) {
  FUNC_8(&VAR_13->dev, "PCLK missing or out of range (%d)\n",
   VAR_14->pclkrate);
  return -VAR_0;
 }

 VAR_15 = FUNC_21(VAR_13, VAR_5, 0);
 VAR_14->base = FUNC_13(&VAR_13->dev, VAR_15);
 if (FUNC_2(VAR_14->base))
  return FUNC_4(VAR_14->base);

 VAR_14->irq = FUNC_20(VAR_13, 0);
 if (VAR_14->irq < 0) {
  FUNC_8(&VAR_13->dev, "no IRQ resource found\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_15(&VAR_13->dev, VAR_14->irq, VAR_11,
          0, FUNC_10(&VAR_13->dev), VAR_14);
 if (VAR_17 < 0) {
  FUNC_8(&VAR_13->dev, "cannot claim IRQ %d\n", VAR_14->irq);
  return VAR_17;
 }

 VAR_14->state = VAR_6;
 VAR_14->dev = &VAR_13->dev;
 VAR_14->adapter = VAR_12;
 FUNC_18(&VAR_14->adapter, VAR_14);
 VAR_14->adapter.dev.parent = &VAR_13->dev;
 VAR_14->adapter.dev.of_node = VAR_13->dev.of_node;
 FUNC_1(&VAR_14->adapter.dev, FUNC_0(&VAR_13->dev));
 VAR_14->adapter.nr = VAR_13->id;
 FUNC_19(&VAR_14->completion);

 if (VAR_16 < 400000)
  VAR_14->speed_khz = VAR_10;
 else
  VAR_14->speed_khz = VAR_9;

 FUNC_23(VAR_14);

 VAR_17 = FUNC_17(&VAR_14->adapter);
 if (VAR_17) {
  FUNC_8(&VAR_13->dev, "failed to add bus to i2c core\n");
  return VAR_17;
 }

 FUNC_22(VAR_13, VAR_14);

 FUNC_9(&VAR_13->dev, "%s: synquacer_i2c adapter\n",
   FUNC_10(&VAR_14->adapter.dev));

 return 0;
}
