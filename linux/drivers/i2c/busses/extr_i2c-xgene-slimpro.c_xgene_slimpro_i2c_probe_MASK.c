
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


struct TYPE_18__ {int of_node; TYPE_7__* parent; } ;
struct i2c_adapter {TYPE_16__ dev; int class; int * algo; int name; } ;
struct mbox_client {int knows_txdone; int tx_block; int rx_callback; int tx_tout; TYPE_7__* dev; } ;
struct slimpro_i2c_dev {TYPE_3__* mbox_chan; struct i2c_adapter adapter; void* pcc_comm_addr; int comm_base_addr; int mbox_idx; int rd_complete; struct mbox_client mbox_client; TYPE_7__* dev; } ;
struct TYPE_22__ {int of_node; TYPE_1__* driver; } ;
struct platform_device {TYPE_7__ dev; } ;
struct acpi_pcct_hw_reduced {int length; int base_address; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct TYPE_21__ {TYPE_2__* mbox; struct acpi_pcct_hw_reduced* con_priv; } ;
struct TYPE_20__ {int txdone_irq; } ;
struct TYPE_19__ {int acpi_match_table; } ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_16__*,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct acpi_device_id* FUNC_5 (int ,TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,char*) ;
 int FUNC_7 (TYPE_7__*,char*) ;
 int FUNC_8 (TYPE_7__*,char*) ;
 scalar_t__ FUNC_9 (TYPE_7__*,char*,int *) ;
 struct slimpro_i2c_dev* FUNC_10 (TYPE_7__*,int,int ) ;
 int FUNC_11 (TYPE_7__*,int ) ;
 int FUNC_12 (struct i2c_adapter*) ;
 int FUNC_13 (struct i2c_adapter*,struct slimpro_i2c_dev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_3__*) ;
 TYPE_3__* FUNC_16 (struct mbox_client*,int ) ;
 void* FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (TYPE_3__*) ;
 TYPE_3__* FUNC_19 (struct mbox_client*,int ) ;
 int FUNC_20 (struct platform_device*,struct slimpro_i2c_dev*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_21 (int ,int,char*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_15)
{
 struct slimpro_i2c_dev *VAR_16;
 struct i2c_adapter *VAR_17;
 struct mbox_client *VAR_18;
 int VAR_19;

 VAR_16 = FUNC_10(&VAR_15->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->dev = &VAR_15->dev;
 FUNC_20(VAR_15, VAR_16);
 VAR_18 = &VAR_16->mbox_client;


 VAR_18->dev = &VAR_15->dev;
 FUNC_14(&VAR_16->rd_complete);
 VAR_18->tx_tout = VAR_6;
 VAR_18->knows_txdone = 0;
 if (VAR_11) {
  VAR_18->tx_block = 1;
  VAR_18->rx_callback = VAR_13;
  VAR_16->mbox_chan = FUNC_16(VAR_18, VAR_5);
  if (FUNC_3(VAR_16->mbox_chan)) {
   FUNC_6(&VAR_15->dev, "i2c mailbox channel request failed\n");
   return FUNC_4(VAR_16->mbox_chan);
  }
 } else {
  struct acpi_pcct_hw_reduced *VAR_20;
  const struct acpi_device_id *VAR_21;
  int VAR_22 = VAR_9;

  VAR_21 = FUNC_5(VAR_15->dev.driver->acpi_match_table,
         &VAR_15->dev);
  if (!VAR_21)
   return -VAR_0;

  VAR_22 = (int)VAR_21->driver_data;

  if (FUNC_9(&VAR_15->dev, "pcc-channel",
          &VAR_16->mbox_idx))
   VAR_16->mbox_idx = VAR_5;

  VAR_18->tx_block = 0;
  VAR_18->rx_callback = VAR_12;
  VAR_16->mbox_chan = FUNC_19(VAR_18, VAR_16->mbox_idx);
  if (FUNC_3(VAR_16->mbox_chan)) {
   FUNC_6(&VAR_15->dev, "PCC mailbox channel request failed\n");
   return FUNC_4(VAR_16->mbox_chan);
  }







  VAR_20 = VAR_16->mbox_chan->con_priv;
  if (!VAR_20) {
   FUNC_6(&VAR_15->dev, "PPC subspace not found\n");
   VAR_19 = -VAR_1;
   goto mbox_err;
  }

  if (!VAR_16->mbox_chan->mbox->txdone_irq) {
   FUNC_6(&VAR_15->dev, "PCC IRQ not supported\n");
   VAR_19 = -VAR_1;
   goto mbox_err;
  }





  VAR_16->comm_base_addr = VAR_20->base_address;
  if (VAR_16->comm_base_addr) {
   if (VAR_22 == VAR_10)
    VAR_16->pcc_comm_addr = FUNC_17(
       VAR_16->comm_base_addr,
       VAR_20->length,
       VAR_8);
   else
    VAR_16->pcc_comm_addr = FUNC_17(
       VAR_16->comm_base_addr,
       VAR_20->length,
       VAR_7);
  } else {
   FUNC_6(&VAR_15->dev, "Failed to get PCC comm region\n");
   VAR_19 = -VAR_1;
   goto mbox_err;
  }

  if (!VAR_16->pcc_comm_addr) {
   FUNC_6(&VAR_15->dev,
    "Failed to ioremap PCC comm region\n");
   VAR_19 = -VAR_2;
   goto mbox_err;
  }
 }
 VAR_19 = FUNC_11(&VAR_15->dev, FUNC_2(64));
 if (VAR_19)
  FUNC_8(&VAR_15->dev, "Unable to set dma mask\n");


 VAR_17 = &VAR_16->adapter;
 FUNC_21(VAR_17->name, sizeof(VAR_17->name), "MAILBOX I2C");
 VAR_17->algo = &VAR_14;
 VAR_17->class = VAR_4;
 VAR_17->dev.parent = &VAR_15->dev;
 VAR_17->dev.of_node = VAR_15->dev.of_node;
 FUNC_1(&VAR_17->dev, FUNC_0(&VAR_15->dev));
 FUNC_13(VAR_17, VAR_16);
 VAR_19 = FUNC_12(VAR_17);
 if (VAR_19)
  goto mbox_err;

 FUNC_7(&VAR_15->dev, "Mailbox I2C Adapter registered\n");
 return 0;

mbox_err:
 if (VAR_11)
  FUNC_15(VAR_16->mbox_chan);
 else
  FUNC_18(VAR_16->mbox_chan);

 return VAR_19;
}
