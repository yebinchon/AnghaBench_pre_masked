
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh7760_i2c_platdata {int speed_khz; } ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; int id; int name; } ;
struct TYPE_3__ {int * parent; } ;
struct TYPE_4__ {int class; int retries; int name; TYPE_1__ dev; struct cami2c* algo_data; int * algo; int nr; } ;
struct cami2c {int irq; struct cami2c* ioarea; int iobase; TYPE_2__ adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct cami2c*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;
 struct sh7760_i2c_platdata* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int,scalar_t__,int) ;
 int FUNC_5 (int,struct cami2c*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct cami2c*) ;
 struct cami2c* FUNC_10 (int,int ) ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct cami2c*) ;
 int FUNC_14 (struct cami2c*) ;
 scalar_t__ FUNC_15 (int,int ,int ,int ,struct cami2c*) ;
 struct cami2c* FUNC_16 (scalar_t__,int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_17 (int ,int,char*,unsigned long) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_25)
{
 struct sh7760_i2c_platdata *VAR_26;
 struct resource *VAR_27;
 struct cami2c *VAR_28;
 int VAR_29;

 VAR_26 = FUNC_3(&VAR_25->dev);
 if (!VAR_26) {
  FUNC_2(&VAR_25->dev, "no platform_data!\n");
  VAR_29 = -VAR_1;
  goto out0;
 }

 VAR_28 = FUNC_10(sizeof(struct cami2c), VAR_5);
 if (!VAR_28) {
  FUNC_2(&VAR_25->dev, "no mem for private data\n");
  VAR_29 = -VAR_2;
  goto out0;
 }

 VAR_27 = FUNC_12(VAR_25, VAR_20, 0);
 if (!VAR_27) {
  FUNC_2(&VAR_25->dev, "no mmio resources\n");
  VAR_29 = -VAR_1;
  goto out1;
 }

 VAR_28->ioarea = FUNC_16(VAR_27->start, VAR_21, VAR_25->name);
 if (!VAR_28->ioarea) {
  FUNC_2(&VAR_25->dev, "mmio already reserved\n");
  VAR_29 = -VAR_0;
  goto out1;
 }

 VAR_28->iobase = FUNC_7(VAR_27->start, VAR_21);
 if (!VAR_28->iobase) {
  FUNC_2(&VAR_25->dev, "cannot ioremap\n");
  VAR_29 = -VAR_1;
  goto out2;
 }

 VAR_28->irq = FUNC_11(VAR_25, 0);

 VAR_28->adap.nr = VAR_25->id;
 VAR_28->adap.algo = &VAR_23;
 VAR_28->adap.class = VAR_18 | VAR_19;
 VAR_28->adap.retries = 3;
 VAR_28->adap.algo_data = VAR_28;
 VAR_28->adap.dev.parent = &VAR_25->dev;
 FUNC_17(VAR_28->adap.name, sizeof(VAR_28->adap.name),
  "SH7760 I2C at %08lx", (unsigned long)VAR_27->start);

 FUNC_0(VAR_28, VAR_11, 0);
 FUNC_0(VAR_28, VAR_13, 0);
 FUNC_0(VAR_28, VAR_12, 0);
 FUNC_0(VAR_28, VAR_10, 0);
 FUNC_0(VAR_28, VAR_16, 0);
 FUNC_0(VAR_28, VAR_14, 0);
 FUNC_0(VAR_28, VAR_15, 0);
 FUNC_0(VAR_28, VAR_17, 0);
 FUNC_0(VAR_28, VAR_8, 0);
 FUNC_0(VAR_28, VAR_7, VAR_3 | VAR_4);
 FUNC_0(VAR_28, VAR_9, 0);

 VAR_29 = FUNC_1(VAR_26->speed_khz * 1000);
 if (VAR_29 < 0) {
  FUNC_2(&VAR_25->dev, "invalid SCL clock: %dkHz\n",
   VAR_26->speed_khz);
  goto out3;
 }
 FUNC_0(VAR_28, VAR_6, VAR_29);

 if (FUNC_15(VAR_28->irq, VAR_24, 0,
   VAR_22, VAR_28)) {
  FUNC_2(&VAR_25->dev, "cannot get irq %d\n", VAR_28->irq);
  VAR_29 = -VAR_0;
  goto out3;
 }

 VAR_29 = FUNC_6(&VAR_28->adap);
 if (VAR_29 < 0)
  goto out4;

 FUNC_13(VAR_25, VAR_28);

 FUNC_4(&VAR_25->dev, "%d kHz mmio %08x irq %d\n",
   VAR_26->speed_khz, VAR_27->start, VAR_28->irq);

 return 0;

out4:
 FUNC_5(VAR_28->irq, VAR_28);
out3:
 FUNC_8(VAR_28->iobase);
out2:
 FUNC_14(VAR_28->ioarea);
 FUNC_9(VAR_28->ioarea);
out1:
 FUNC_9(VAR_28);
out0:
 return VAR_29;
}
