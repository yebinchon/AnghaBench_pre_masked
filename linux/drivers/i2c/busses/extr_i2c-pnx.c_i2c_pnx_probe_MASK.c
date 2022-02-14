
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef unsigned long u32 ;
struct resource {int start; } ;
struct TYPE_13__ {scalar_t__ of_node; } ;
struct platform_device {char* name; TYPE_4__ dev; int id; } ;
struct TYPE_10__ {int of_node; TYPE_4__* parent; } ;
struct TYPE_12__ {int name; TYPE_1__ dev; int nr; struct i2c_pnx_algo_data* algo_data; int * algo; } ;
struct TYPE_11__ {int complete; int timer; } ;
struct i2c_pnx_algo_data {int irq; int clk; TYPE_3__ adapter; TYPE_2__ mif; int ioaddr; int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_pnx_algo_data*) ;
 int FUNC_1 (struct i2c_pnx_algo_data*) ;
 int FUNC_2 (struct i2c_pnx_algo_data*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*,char*,int ,int ,int) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_4__*,struct resource*) ;
 struct i2c_pnx_algo_data* FUNC_12 (TYPE_4__*,int,int ) ;
 int FUNC_13 (TYPE_4__*,int,int ,int ,char*,struct i2c_pnx_algo_data*) ;
 int FUNC_14 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (unsigned long,int ) ;
 unsigned long VAR_8 ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__,char*,unsigned long*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct i2c_pnx_algo_data*) ;
 int VAR_9 ;
 int FUNC_22 (int ,int,char*,char*) ;
 int FUNC_23 (int *,int ,int ) ;
 scalar_t__ FUNC_24 (struct i2c_pnx_algo_data*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_10)
{
 unsigned long VAR_11;
 int VAR_12 = 0;
 struct i2c_pnx_algo_data *VAR_13;
 unsigned long VAR_14;
 struct resource *VAR_15;
 u32 VAR_16 = VAR_3 * 1000;

 VAR_13 = FUNC_12(&VAR_10->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_21(VAR_10, VAR_13);

 VAR_13->adapter.dev.parent = &VAR_10->dev;
 VAR_13->adapter.algo = &VAR_9;
 VAR_13->adapter.algo_data = VAR_13;
 VAR_13->adapter.nr = VAR_10->id;

 VAR_13->timeout = VAR_4;
 VAR_13->clk = FUNC_10(&VAR_10->dev, ((void*)0));
 if (FUNC_3(VAR_13->clk))
  return FUNC_4(VAR_13->clk);

 FUNC_23(&VAR_13->mif.timer, VAR_7, 0);

 FUNC_22(VAR_13->adapter.name, sizeof(VAR_13->adapter.name),
   "%s", VAR_10->name);


 VAR_15 = FUNC_20(VAR_10, VAR_5, 0);
 VAR_13->ioaddr = FUNC_11(&VAR_10->dev, VAR_15);
 if (FUNC_3(VAR_13->ioaddr))
  return FUNC_4(VAR_13->ioaddr);

 VAR_12 = FUNC_7(VAR_13->clk);
 if (VAR_12)
  return VAR_12;

 VAR_14 = FUNC_6(VAR_13->clk);
 VAR_11 = (VAR_14 / VAR_16) / 2 - 2;
 if (VAR_11 > 0x3FF)
  VAR_11 = 0x3FF;
 FUNC_16(VAR_11, FUNC_0(VAR_13));
 FUNC_16(VAR_11, FUNC_1(VAR_13));

 FUNC_16(VAR_8, FUNC_2(VAR_13));
 if (FUNC_24(VAR_13)) {
  VAR_12 = -VAR_0;
  goto out_clock;
 }
 FUNC_15(&VAR_13->mif.complete);

 VAR_13->irq = FUNC_19(VAR_10, 0);
 if (VAR_13->irq < 0) {
  FUNC_9(&VAR_10->dev, "Failed to get IRQ from platform resource\n");
  VAR_12 = VAR_13->irq;
  goto out_clock;
 }
 VAR_12 = FUNC_13(&VAR_10->dev, VAR_13->irq, VAR_6,
          0, VAR_10->name, VAR_13);
 if (VAR_12)
  goto out_clock;


 VAR_12 = FUNC_14(&VAR_13->adapter);
 if (VAR_12 < 0)
  goto out_clock;

 FUNC_8(&VAR_10->dev, "%s: Master at %#8x, irq %d.\n",
  VAR_13->adapter.name, VAR_15->start, VAR_13->irq);

 return 0;

out_clock:
 FUNC_5(VAR_13->clk);
 return VAR_12;
}
