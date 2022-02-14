
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct platform_device {int name; } ;
struct of_device_id {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct hns_roce_hw {int dummy; } ;
struct TYPE_8__ {int num_ports; } ;
struct TYPE_7__ {scalar_t__* phy_port; struct net_device** netdevs; } ;
struct TYPE_6__ {int node_guid; } ;
struct hns_roce_dev {int cmd_mod; scalar_t__* irq; TYPE_4__* pdev; int irq_names; int odb_offset; int sdb_offset; scalar_t__ loop_idc; TYPE_3__ caps; TYPE_2__ iboe; TYPE_1__ ib_dev; int reg_base; struct hns_roce_hw const* hw; } ;
struct fwnode_reference_args {int fwnode; } ;
struct device_node {int dummy; } ;
struct device {int fwnode; int of_node; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct TYPE_9__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct acpi_device_id* FUNC_2 (int ,struct device*) ;
 int FUNC_3 (int ,char*,int,struct fwnode_reference_args*) ;
 int FUNC_4 (struct device*,char*,...) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*,int ,int) ;
 int FUNC_7 (struct device*,char*,scalar_t__*,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int VAR_8 ;
 struct platform_device* FUNC_9 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (int ) ;
 struct platform_device* FUNC_11 (struct device_node*) ;
 struct of_device_id* FUNC_12 (int ,int ) ;
 struct device_node* FUNC_13 (int ,char*,int) ;
 struct net_device* FUNC_14 (struct platform_device*) ;
 scalar_t__ FUNC_15 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_16(struct hns_roce_dev *VAR_10)
{
 struct device *VAR_11 = &VAR_10->pdev->dev;
 struct platform_device *VAR_12 = ((void*)0);
 struct net_device *VAR_13 = ((void*)0);
 struct device_node *VAR_14;
 int VAR_15 = 0;
 u8 VAR_16;
 int VAR_17;
 int VAR_18;


 if (FUNC_5(VAR_11)) {
  const struct of_device_id *VAR_19;

  VAR_19 = FUNC_12(VAR_9, VAR_11->of_node);
  if (!VAR_19) {
   FUNC_4(VAR_11, "device is not compatible!\n");
   return -VAR_2;
  }
  VAR_10->hw = (const struct hns_roce_hw *)VAR_19->data;
  if (!VAR_10->hw) {
   FUNC_4(VAR_11, "couldn't get H/W specific DT data!\n");
   return -VAR_2;
  }
 } else if (FUNC_10(VAR_11->fwnode)) {
  const struct acpi_device_id *VAR_20;

  VAR_20 = FUNC_2(VAR_8, VAR_11);
  if (!VAR_20) {
   FUNC_4(VAR_11, "device is not compatible!\n");
   return -VAR_2;
  }
  VAR_10->hw = (const struct hns_roce_hw *) VAR_20->driver_data;
  if (!VAR_10->hw) {
   FUNC_4(VAR_11, "couldn't get H/W specific ACPI data!\n");
   return -VAR_2;
  }
 } else {
  FUNC_4(VAR_11, "can't read compatibility data from DT or ACPI\n");
  return -VAR_2;
 }


 VAR_10->reg_base = FUNC_8(VAR_10->pdev, 0);
 if (FUNC_0(VAR_10->reg_base))
  return FUNC_1(VAR_10->reg_base);


 VAR_17 = FUNC_7(VAR_11, "node-guid",
         (u8 *)&VAR_10->ib_dev.node_guid,
         VAR_3);
 if (VAR_17) {
  FUNC_4(VAR_11, "couldn't get node_guid from DT or ACPI!\n");
  return VAR_17;
 }


 for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {
  if (FUNC_5(VAR_11)) {
   VAR_14 = FUNC_13(VAR_11->of_node, "eth-handle",
          VAR_18);
   if (!VAR_14)
    continue;
   VAR_12 = FUNC_11(VAR_14);
  } else if (FUNC_10(VAR_11->fwnode)) {
   struct fwnode_reference_args VAR_21;

   VAR_17 = FUNC_3(VAR_11->fwnode,
              "eth-handle",
              VAR_18, &VAR_21);
   if (VAR_17)
    continue;
   VAR_12 = FUNC_9(VAR_21.fwnode);
  } else {
   FUNC_4(VAR_11, "cannot read data from DT or ACPI\n");
   return -VAR_2;
  }

  if (VAR_12) {
   VAR_13 = FUNC_14(VAR_12);
   VAR_16 = (u8)VAR_18;
   if (VAR_13) {
    VAR_10->iboe.netdevs[VAR_15] = VAR_13;
    VAR_10->iboe.phy_port[VAR_15] = VAR_16;
   } else {
    FUNC_4(VAR_11, "no netdev found with pdev %s\n",
     VAR_12->name);
    return -VAR_1;
   }
   VAR_15++;
  }
 }

 if (VAR_15 == 0) {
  FUNC_4(VAR_11, "unable to get eth-handle for available ports!\n");
  return -VAR_0;
 }

 VAR_10->caps.num_ports = VAR_15;


 VAR_10->cmd_mod = 1;
 VAR_10->loop_idc = 0;
 VAR_10->sdb_offset = VAR_7;
 VAR_10->odb_offset = VAR_6;


 VAR_17 = FUNC_6(VAR_11, "interrupt-names",
      VAR_10->irq_names,
      VAR_5);
 if (VAR_17 < 0) {
  FUNC_4(VAR_11, "couldn't get interrupt names from DT or ACPI!\n");
  return VAR_17;
 }


 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  VAR_10->irq[VAR_18] = FUNC_15(VAR_10->pdev, VAR_18);
  if (VAR_10->irq[VAR_18] <= 0)
   return -VAR_0;
 }

 return 0;
}
