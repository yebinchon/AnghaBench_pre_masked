
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct device {int of_node; } ;
struct pci_dev {struct device dev; } ;
struct TYPE_7__ {int of_node; struct device* parent; } ;
struct TYPE_8__ {int retries; int name; TYPE_2__ dev; int * bus_recovery_info; int class; } ;
struct TYPE_6__ {int sw_twsi; int twsi_int; int sw_twsi_ext; } ;
struct octeon_i2c {int twsi_freq; int clk; int sys_freq; struct device* dev; TYPE_3__ adap; int hlc_int_disable; int hlc_int_enable; int int_disable; int int_enable; int queue; int twsi_base; TYPE_1__ roff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,...) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int*) ;
 struct octeon_i2c* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ,int ,struct octeon_i2c*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,struct octeon_i2c*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct octeon_i2c*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct octeon_i2c*) ;
 int FUNC_10 (struct pci_dev*,int,int,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,struct octeon_i2c*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ,int ) ;
 int FUNC_17 (int ,int,char*,char*) ;
 int FUNC_18 (struct device*,int ) ;
 int FUNC_19 (struct device*,struct octeon_i2c*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_20 (struct octeon_i2c*,int ) ;
 TYPE_3__ VAR_12 ;

__attribute__((used)) static int FUNC_21(struct pci_dev *VAR_13,
     const struct pci_device_id *VAR_14)
{
 struct device *VAR_15 = &VAR_13->dev;
 struct octeon_i2c *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_3(VAR_15, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->roff.sw_twsi = 0x1000;
 VAR_16->roff.twsi_int = 0x1010;
 VAR_16->roff.sw_twsi_ext = 0x1018;

 VAR_16->dev = VAR_15;
 FUNC_14(VAR_13, VAR_16);
 VAR_17 = FUNC_15(VAR_13);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_12(VAR_13, VAR_0);
 if (VAR_17)
  return VAR_17;

 VAR_16->twsi_base = FUNC_16(VAR_13, 0, FUNC_13(VAR_13, 0));
 if (!VAR_16->twsi_base)
  return -VAR_1;

 FUNC_19(VAR_15, VAR_16);
 VAR_17 = FUNC_2(VAR_15, "clock-frequency", &VAR_16->twsi_freq);
 if (VAR_17)
  VAR_16->twsi_freq = 100000;

 FUNC_7(&VAR_16->queue);

 VAR_16->int_enable = VAR_11;
 VAR_16->int_disable = VAR_10;
 VAR_16->hlc_int_enable = VAR_9;
 VAR_16->hlc_int_disable = VAR_8;

 VAR_17 = FUNC_10(VAR_13, 1, 1, VAR_5);
 if (VAR_17 < 0)
  goto error;

 VAR_17 = FUNC_4(VAR_15, FUNC_11(VAR_13, 0), VAR_6, 0,
          VAR_0, VAR_16);
 if (VAR_17)
  goto error;

 VAR_17 = FUNC_8(VAR_16);
 if (VAR_17)
  goto error;

 FUNC_9(VAR_16);

 VAR_16->adap = VAR_12;
 VAR_16->adap.retries = 5;
 VAR_16->adap.class = VAR_4;
 VAR_16->adap.bus_recovery_info = &VAR_7;
 VAR_16->adap.dev.parent = VAR_15;
 VAR_16->adap.dev.of_node = VAR_13->dev.of_node;
 FUNC_17(VAR_16->adap.name, sizeof(VAR_16->adap.name),
   "Cavium ThunderX i2c adapter at %s", FUNC_1(VAR_15));
 FUNC_6(&VAR_16->adap, VAR_16);

 VAR_17 = FUNC_5(&VAR_16->adap);
 if (VAR_17)
  goto error;

 FUNC_0(VAR_16->dev, "Probed. Set system clock to %u\n", VAR_16->sys_freq);

 VAR_17 = FUNC_20(VAR_16, VAR_13->dev.of_node);
 if (VAR_17)
  FUNC_0(VAR_15, "SMBUS alert not active on this bus\n");

 return 0;

error:
 FUNC_18(VAR_15, VAR_16->clk);
 return VAR_17;
}
