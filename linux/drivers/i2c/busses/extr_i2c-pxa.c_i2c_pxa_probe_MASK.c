
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_14__ {int of_node; TYPE_3__* parent; } ;
struct TYPE_12__ {int retries; TYPE_8__ dev; struct pxa_i2c* algo_data; int * algo; int name; int class; int owner; int nr; } ;
struct pxa_i2c {int irq; int highmode_enter; scalar_t__ clk; TYPE_2__ adap; int slave_addr; scalar_t__ use_pio; scalar_t__ rate; scalar_t__ high_mode; int slave; int iosize; int iobase; scalar_t__ reg_base; scalar_t__ reg_iwcr; scalar_t__ reg_ilcr; scalar_t__ reg_isar; int hs_mask; int fm_mask; scalar_t__ reg_isr; scalar_t__ reg_icr; scalar_t__ reg_idbr; scalar_t__ reg_ibmr; int wait; int lock; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; int id; } ;
struct i2c_pxa_platform_data {int class; int slave; int slave_addr; } ;
typedef enum pxa_i2c_types { ____Placeholder_pxa_i2c_types } pxa_i2c_types ;
struct TYPE_11__ {scalar_t__ iwcr; scalar_t__ ilcr; scalar_t__ isar; scalar_t__ hs; scalar_t__ fm; scalar_t__ isr; scalar_t__ icr; scalar_t__ idbr; scalar_t__ ibmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,char*,int) ;
 struct i2c_pxa_platform_data* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_8__*,char*,...) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_11 (TYPE_3__*,struct resource*) ;
 struct pxa_i2c* FUNC_12 (TYPE_3__*,int,int ) ;
 int FUNC_13 (TYPE_3__*,int,int ,int,int ,struct pxa_i2c*) ;
 int FUNC_14 (TYPE_2__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (struct platform_device*,struct pxa_i2c*,int*) ;
 int FUNC_16 (struct platform_device*,struct pxa_i2c*,int*) ;
 int FUNC_17 (struct pxa_i2c*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct pxa_i2c*) ;
 int FUNC_22 (char*,int ,int ) ;
 int FUNC_23 (char*,int ) ;
 TYPE_1__* VAR_14 ;
 int FUNC_24 (struct resource*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ,char*,int) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_15)
{
 struct i2c_pxa_platform_data *VAR_16 = FUNC_7(&VAR_15->dev);
 enum pxa_i2c_types VAR_17;
 struct pxa_i2c *VAR_18;
 struct resource *VAR_19 = ((void*)0);
 int VAR_20, VAR_21;

 VAR_18 = FUNC_12(&VAR_15->dev, sizeof(struct pxa_i2c), VAR_1);
 if (!VAR_18)
  return -VAR_0;

 VAR_19 = FUNC_20(VAR_15, VAR_5, 0);
 VAR_18->reg_base = FUNC_11(&VAR_15->dev, VAR_19);
 if (FUNC_0(VAR_18->reg_base))
  return FUNC_1(VAR_18->reg_base);

 VAR_21 = FUNC_19(VAR_15, 0);
 if (VAR_21 < 0) {
  FUNC_6(&VAR_15->dev, "no irq resource: %d\n", VAR_21);
  return VAR_21;
 }


 VAR_18->adap.nr = VAR_15->id;

 VAR_20 = FUNC_15(VAR_15, VAR_18, &VAR_17);
 if (VAR_20 > 0)
  VAR_20 = FUNC_16(VAR_15, VAR_18, &VAR_17);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_18->adap.owner = VAR_10;
 VAR_18->adap.retries = 5;

 FUNC_25(&VAR_18->lock);
 FUNC_18(&VAR_18->wait);

 FUNC_26(VAR_18->adap.name, "pxa_i2c-i2c", sizeof(VAR_18->adap.name));

 VAR_18->clk = FUNC_10(&VAR_15->dev, ((void*)0));
 if (FUNC_0(VAR_18->clk)) {
  FUNC_6(&VAR_15->dev, "failed to get the clk: %ld\n", FUNC_1(VAR_18->clk));
  return FUNC_1(VAR_18->clk);
 }

 VAR_18->reg_ibmr = VAR_18->reg_base + VAR_14[VAR_17].ibmr;
 VAR_18->reg_idbr = VAR_18->reg_base + VAR_14[VAR_17].idbr;
 VAR_18->reg_icr = VAR_18->reg_base + VAR_14[VAR_17].icr;
 VAR_18->reg_isr = VAR_18->reg_base + VAR_14[VAR_17].isr;
 VAR_18->fm_mask = VAR_14[VAR_17].fm ? : VAR_3;
 VAR_18->hs_mask = VAR_14[VAR_17].hs ? : VAR_4;

 if (VAR_17 != VAR_8)
  VAR_18->reg_isar = VAR_18->reg_base + VAR_14[VAR_17].isar;

 if (VAR_17 == VAR_9) {
  VAR_18->reg_ilcr = VAR_18->reg_base + VAR_14[VAR_17].ilcr;
  VAR_18->reg_iwcr = VAR_18->reg_base + VAR_14[VAR_17].iwcr;
 }

 VAR_18->iobase = VAR_19->start;
 VAR_18->iosize = FUNC_24(VAR_19);

 VAR_18->irq = VAR_21;

 VAR_18->slave_addr = VAR_2;
 VAR_18->highmode_enter = 0;

 if (VAR_16) {




  VAR_18->adap.class = VAR_16->class;
 }

 if (VAR_18->high_mode) {
  if (VAR_18->rate) {
   FUNC_5(VAR_18->clk, VAR_18->rate);
   FUNC_22("i2c: <%s> set rate to %ld\n",
    VAR_18->adap.name, FUNC_3(VAR_18->clk));
  } else
   FUNC_23("i2c: <%s> clock rate not set\n",
    VAR_18->adap.name);
 }

 FUNC_4(VAR_18->clk);

 if (VAR_18->use_pio) {
  VAR_18->adap.algo = &VAR_13;
 } else {
  VAR_18->adap.algo = &VAR_11;
  VAR_20 = FUNC_13(&VAR_15->dev, VAR_21, VAR_12,
    VAR_7 | VAR_6,
    FUNC_9(&VAR_15->dev), VAR_18);
  if (VAR_20) {
   FUNC_6(&VAR_15->dev, "failed to request irq: %d\n", VAR_20);
   goto ereqirq;
  }
 }

 FUNC_17(VAR_18);

 VAR_18->adap.algo_data = VAR_18;
 VAR_18->adap.dev.parent = &VAR_15->dev;




 VAR_20 = FUNC_14(&VAR_18->adap);
 if (VAR_20 < 0)
  goto ereqirq;

 FUNC_21(VAR_15, VAR_18);





 FUNC_8(&VAR_18->adap.dev, " PXA I2C adapter\n");

 return 0;

ereqirq:
 FUNC_2(VAR_18->clk);
 return VAR_20;
}
