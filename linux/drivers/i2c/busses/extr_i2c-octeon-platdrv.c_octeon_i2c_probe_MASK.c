
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_14__ {struct device_node* of_node; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_12__ {struct device_node* of_node; TYPE_6__* parent; } ;
struct TYPE_13__ {int retries; TYPE_2__ dev; int * bus_recovery_info; int timeout; } ;
struct TYPE_11__ {int sw_twsi; int twsi_int; int sw_twsi_ext; } ;
struct octeon_i2c {int irq; int hlc_irq; int broken_irq_check; TYPE_6__* dev; TYPE_3__ adap; void* hlc_int_disable; int hlc_int_enable; void* int_disable; int int_enable; int queue; int sys_freq; int twsi_freq; int twsi_base; TYPE_1__ roff; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (TYPE_6__*,char*) ;
 int FUNC_5 (TYPE_6__*,struct resource*) ;
 struct octeon_i2c* FUNC_6 (TYPE_6__*,int,int ) ;
 int FUNC_7 (TYPE_6__*,int,int ,int ,int ,struct octeon_i2c*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,struct octeon_i2c*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (struct octeon_i2c*) ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_3__ VAR_16 ;
 int VAR_17 ;
 int FUNC_15 (struct octeon_i2c*) ;
 int FUNC_16 (struct device_node*,char*) ;
 scalar_t__ FUNC_17 (struct device_node*,char*,int *) ;
 int FUNC_18 (struct platform_device*,int) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct octeon_i2c*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_18)
{
 struct device_node *VAR_19 = VAR_18->dev.of_node;
 int VAR_20, VAR_21 = 0, VAR_22 = 0;
 struct resource *VAR_23;
 struct octeon_i2c *VAR_24;
 bool VAR_25;

 VAR_25 = FUNC_16(VAR_19, "cavium,octeon-7890-twsi");
 if (VAR_25) {
  VAR_22 = FUNC_18(VAR_18, 0);
  if (VAR_22 < 0)
   return VAR_22;

  VAR_20 = FUNC_18(VAR_18, 2);
  if (VAR_20 < 0)
   return VAR_20;
 } else {

  VAR_20 = FUNC_18(VAR_18, 0);
  if (VAR_20 < 0)
   return VAR_20;
 }

 VAR_24 = FUNC_6(&VAR_18->dev, sizeof(*VAR_24), VAR_3);
 if (!VAR_24) {
  VAR_21 = -VAR_1;
  goto out;
 }
 VAR_24->dev = &VAR_18->dev;

 VAR_24->roff.sw_twsi = 0x00;
 VAR_24->roff.twsi_int = 0x10;
 VAR_24->roff.sw_twsi_ext = 0x18;

 VAR_23 = FUNC_19(VAR_18, VAR_4, 0);
 VAR_24->twsi_base = FUNC_5(&VAR_18->dev, VAR_23);
 if (FUNC_0(VAR_24->twsi_base)) {
  VAR_21 = FUNC_2(VAR_24->twsi_base);
  goto out;
 }






 if (FUNC_17(VAR_19, "clock-frequency", &VAR_24->twsi_freq) &&
     FUNC_17(VAR_19, "clock-rate", &VAR_24->twsi_freq)) {
  FUNC_3(VAR_24->dev,
   "no I2C 'clock-rate' or 'clock-frequency' property\n");
  VAR_21 = -VAR_2;
  goto out;
 }

 VAR_24->sys_freq = FUNC_13();

 FUNC_10(&VAR_24->queue);

 VAR_24->irq = VAR_20;

 if (VAR_25) {
  VAR_24->hlc_irq = VAR_22;

  VAR_24->int_enable = VAR_14;
  VAR_24->int_disable = VAR_12;
  VAR_24->hlc_int_enable = VAR_9;
  VAR_24->hlc_int_disable = VAR_7;

  FUNC_11(VAR_24->irq, VAR_5);
  FUNC_11(VAR_24->hlc_irq, VAR_5);

  VAR_21 = FUNC_7(&VAR_18->dev, VAR_24->hlc_irq,
       VAR_10, 0,
       VAR_0, VAR_24);
  if (VAR_21 < 0) {
   FUNC_3(VAR_24->dev, "failed to attach interrupt\n");
   goto out;
  }
 } else {
  VAR_24->int_enable = VAR_13;
  VAR_24->int_disable = VAR_11;
  VAR_24->hlc_int_enable = VAR_8;
  VAR_24->hlc_int_disable = VAR_11;
 }

 VAR_21 = FUNC_7(&VAR_18->dev, VAR_24->irq,
      VAR_15, 0, VAR_0, VAR_24);
 if (VAR_21 < 0) {
  FUNC_3(VAR_24->dev, "failed to attach interrupt\n");
  goto out;
 }

 if (FUNC_1(VAR_6))
  VAR_24->broken_irq_check = 1;

 VAR_21 = FUNC_14(VAR_24);
 if (VAR_21) {
  FUNC_3(VAR_24->dev, "init low level failed\n");
  goto out;
 }

 FUNC_15(VAR_24);

 VAR_24->adap = VAR_16;
 VAR_24->adap.timeout = FUNC_12(2);
 VAR_24->adap.retries = 5;
 VAR_24->adap.bus_recovery_info = &VAR_17;
 VAR_24->adap.dev.parent = &VAR_18->dev;
 VAR_24->adap.dev.of_node = VAR_19;
 FUNC_9(&VAR_24->adap, VAR_24);
 FUNC_20(VAR_18, VAR_24);

 VAR_21 = FUNC_8(&VAR_24->adap);
 if (VAR_21 < 0)
  goto out;
 FUNC_4(VAR_24->dev, "probed\n");
 return 0;

out:
 return VAR_21;
}
