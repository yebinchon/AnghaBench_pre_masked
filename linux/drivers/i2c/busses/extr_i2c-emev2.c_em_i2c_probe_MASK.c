
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_10__ {int of_node; TYPE_5__* parent; } ;
struct TYPE_11__ {int retries; int nr; TYPE_1__ dev; int owner; int * algo; int timeout; int name; } ;
struct em_i2c_device {int sclk; int irq; TYPE_2__ adap; int msg_done; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,char*,int ,int ) ;
 int FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (TYPE_5__*,struct resource*) ;
 struct em_i2c_device* FUNC_7 (TYPE_5__*,int,int ) ;
 int FUNC_8 (TYPE_5__*,int ,int ,int ,char*,struct em_i2c_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,struct em_i2c_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct em_i2c_device*) ;
 int FUNC_17 (int ,char*,int) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_6)
{
 struct em_i2c_device *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_15(VAR_6, VAR_2, 0);
 VAR_7->base = FUNC_6(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 FUNC_17(VAR_7->adap.name, "EMEV2 I2C", sizeof(VAR_7->adap.name));

 VAR_7->sclk = FUNC_5(&VAR_6->dev, "sclk");
 if (FUNC_0(VAR_7->sclk))
  return FUNC_1(VAR_7->sclk);

 VAR_9 = FUNC_3(VAR_7->sclk);
 if (VAR_9)
  return VAR_9;

 VAR_7->adap.timeout = FUNC_13(100);
 VAR_7->adap.retries = 5;
 VAR_7->adap.dev.parent = &VAR_6->dev;
 VAR_7->adap.algo = &VAR_4;
 VAR_7->adap.owner = VAR_3;
 VAR_7->adap.dev.of_node = VAR_6->dev.of_node;

 FUNC_12(&VAR_7->msg_done);

 FUNC_16(VAR_6, VAR_7);
 FUNC_11(&VAR_7->adap, VAR_7);

 FUNC_9(&VAR_7->adap);

 VAR_7->irq = FUNC_14(VAR_6, 0);
 VAR_9 = FUNC_8(&VAR_6->dev, VAR_7->irq, VAR_5, 0,
    "em_i2c", VAR_7);
 if (VAR_9)
  goto err_clk;

 VAR_9 = FUNC_10(&VAR_7->adap);

 if (VAR_9)
  goto err_clk;

 FUNC_4(&VAR_6->dev, "Added i2c controller %d, irq %d\n", VAR_7->adap.nr,
   VAR_7->irq);

 return 0;

err_clk:
 FUNC_2(VAR_7->sclk);
 return VAR_9;
}
