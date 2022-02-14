
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int of_node; TYPE_4__* parent; } ;
struct TYPE_12__ {int nr; int name; TYPE_9__ dev; int class; int * algo; } ;
struct TYPE_11__ {scalar_t__ irq; } ;
struct xlp9xx_i2c_dev {scalar_t__ irq; TYPE_2__ adapter; TYPE_4__* dev; int msg_complete; TYPE_1__ alert_data; int base; } ;
struct resource {int dummy; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; int name; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_9__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,char*,int) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,struct resource*) ;
 struct xlp9xx_i2c_dev* FUNC_7 (TYPE_4__*,int,int ) ;
 int FUNC_8 (TYPE_4__*,int,int ,int ,int ,struct xlp9xx_i2c_dev*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,struct xlp9xx_i2c_dev*) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (struct platform_device*,int) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct xlp9xx_i2c_dev*) ;
 int FUNC_15 (int ,int,char*) ;
 int VAR_4 ;
 int FUNC_16 (struct platform_device*,struct xlp9xx_i2c_dev*) ;
 int FUNC_17 (struct xlp9xx_i2c_dev*) ;
 int VAR_5 ;
 int FUNC_18 (struct xlp9xx_i2c_dev*,struct platform_device*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_6)
{
 struct xlp9xx_i2c_dev *VAR_7;
 struct resource *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_7(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_13(VAR_6, VAR_3, 0);
 VAR_7->base = FUNC_6(&VAR_6->dev, VAR_8);
 if (FUNC_2(VAR_7->base))
  return FUNC_3(VAR_7->base);

 VAR_7->irq = FUNC_12(VAR_6, 0);
 if (VAR_7->irq <= 0) {
  FUNC_5(&VAR_6->dev, "invalid irq!\n");
  return VAR_7->irq;
 }

 VAR_7->alert_data.irq = FUNC_12(VAR_6, 1);
 if (VAR_7->alert_data.irq <= 0)
  VAR_7->alert_data.irq = 0;

 FUNC_16(VAR_6, VAR_7);
 FUNC_17(VAR_7);

 VAR_9 = FUNC_8(&VAR_6->dev, VAR_7->irq, VAR_5, 0,
          VAR_6->name, VAR_7);
 if (VAR_9) {
  FUNC_5(&VAR_6->dev, "IRQ request failed!\n");
  return VAR_9;
 }

 FUNC_11(&VAR_7->msg_complete);
 VAR_7->adapter.dev.parent = &VAR_6->dev;
 VAR_7->adapter.algo = &VAR_4;
 VAR_7->adapter.class = VAR_2;
 FUNC_1(&VAR_7->adapter.dev, FUNC_0(&VAR_6->dev));
 VAR_7->adapter.dev.of_node = VAR_6->dev.of_node;
 VAR_7->dev = &VAR_6->dev;

 FUNC_15(VAR_7->adapter.name, sizeof(VAR_7->adapter.name), "xlp9xx-i2c");
 FUNC_10(&VAR_7->adapter, VAR_7);

 VAR_9 = FUNC_9(&VAR_7->adapter);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_18(VAR_7, VAR_6);
 if (VAR_9)
  FUNC_4(&VAR_6->dev, "No active SMBus alert %d\n", VAR_9);

 FUNC_14(VAR_6, VAR_7);
 FUNC_4(&VAR_6->dev, "I2C bus:%d added\n", VAR_7->adapter.nr);

 return 0;
}
