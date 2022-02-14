
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_17__ {int of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct amd_mp2_dev {TYPE_2__* pci_dev; int probed; } ;
struct TYPE_13__ {int of_node; TYPE_5__* parent; } ;
struct TYPE_16__ {int name; TYPE_11__ dev; int timeout; struct amd_i2c_dev* algo_data; int * quirks; int * algo; int owner; } ;
struct TYPE_18__ {int bus_id; int i2c_speed; int reqcmd; int * resume; int * suspend; int * cmd_completion; struct amd_mp2_dev* mp2_dev; } ;
struct amd_i2c_dev {TYPE_3__ adap; int cmd_complete; TYPE_9__ common; struct platform_device* pdev; } ;
struct TYPE_14__ {char* unique_id; } ;
struct acpi_device {TYPE_1__ pnp; } ;
typedef int acpi_handle ;
struct TYPE_15__ {int dev; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_11__*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,struct acpi_device**) ;
 int VAR_8 ;
 struct amd_mp2_dev* FUNC_4 () ;
 int FUNC_5 (struct amd_mp2_dev*) ;
 int FUNC_6 (struct amd_mp2_dev*) ;
 scalar_t__ FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_5__*,char*,int) ;
 int FUNC_9 (TYPE_5__*,char*,...) ;
 int FUNC_10 (TYPE_5__*,int *,int ) ;
 struct amd_i2c_dev* FUNC_11 (TYPE_5__*,int,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (struct amd_i2c_dev*,int) ;
 int FUNC_14 (struct platform_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (TYPE_3__*,struct amd_i2c_dev*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct platform_device*,struct amd_i2c_dev*) ;
 int FUNC_18 (int ,int,char*,int) ;
 scalar_t__ FUNC_19 (char const*,char*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_14)
{
 int VAR_15;
 struct amd_i2c_dev *VAR_16;
 acpi_handle VAR_17 = FUNC_2(&VAR_14->dev);
 struct acpi_device *VAR_18;
 struct amd_mp2_dev *VAR_19;
 const char *VAR_20;

 if (FUNC_3(VAR_17, &VAR_18))
  return -VAR_3;





 VAR_19 = FUNC_4();
 if (!VAR_19 || !VAR_19->probed)

  return -VAR_5;

 VAR_16 = FUNC_11(&VAR_14->dev, sizeof(*VAR_16), VAR_6);
 if (!VAR_16)
  return -VAR_4;

 VAR_16->common.mp2_dev = VAR_19;
 VAR_16->pdev = VAR_14;
 FUNC_17(VAR_14, VAR_16);

 VAR_16->common.cmd_completion = &VAR_10;





 VAR_20 = VAR_18->pnp.unique_id;
 if (!VAR_20) {
  FUNC_9(&VAR_14->dev, "missing UID/bus id!\n");
  return -VAR_2;
 } else if (FUNC_19(VAR_20, "0") == 0) {
  VAR_16->common.bus_id = 0;
 } else if (FUNC_19(VAR_20, "1") == 0) {
  VAR_16->common.bus_id = 1;
 } else {
  FUNC_9(&VAR_14->dev, "incorrect UID/bus id \"%s\"!\n", VAR_20);
  return -VAR_2;
 }
 FUNC_8(&VAR_14->dev, "bus id is %u\n", VAR_16->common.bus_id);


 FUNC_5(VAR_19);

 VAR_16->common.reqcmd = VAR_13;
 if (FUNC_7(&VAR_16->common))
  return -VAR_2;
 FUNC_10(&VAR_16->pdev->dev, &VAR_19->pci_dev->dev,
   VAR_1);

 VAR_16->common.i2c_speed = FUNC_14(VAR_14);


 VAR_16->adap.owner = VAR_7;
 VAR_16->adap.algo = &VAR_9;
 VAR_16->adap.quirks = &VAR_8;
 VAR_16->adap.dev.parent = &VAR_14->dev;
 VAR_16->adap.algo_data = VAR_16;
 VAR_16->adap.timeout = VAR_0;
 FUNC_1(&VAR_16->adap.dev, FUNC_0(&VAR_14->dev));
 VAR_16->adap.dev.of_node = VAR_14->dev.of_node;
 FUNC_18(VAR_16->adap.name, sizeof(VAR_16->adap.name),
   "AMD MP2 i2c bus %u", VAR_16->common.bus_id);
 FUNC_15(&VAR_16->adap, VAR_16);

 FUNC_16(&VAR_16->cmd_complete);


 if (FUNC_13(VAR_16, 1))
  FUNC_9(&VAR_14->dev, "initial bus enable failed\n");


 VAR_15 = FUNC_12(&VAR_16->adap);

 FUNC_6(VAR_19);

 if (VAR_15 < 0)
  FUNC_9(&VAR_14->dev, "i2c add adapter failed = %d\n", VAR_15);

 return VAR_15;
}
