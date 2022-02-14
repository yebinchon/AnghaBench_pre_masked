
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct ipmi_smi_powernv {scalar_t__ irq; struct ipmi_smi_powernv* opal_msg; int interface_id; int msg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,struct ipmi_smi_powernv*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,struct ipmi_smi_powernv*) ;
 struct ipmi_smi_powernv* FUNC_4 (struct device*,scalar_t__,int ) ;
 struct ipmi_smi_powernv* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (scalar_t__,struct ipmi_smi_powernv*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,struct ipmi_smi_powernv*,struct device*,int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int ,int ,char*,struct ipmi_smi_powernv*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct ipmi_smi_powernv *VAR_8;
 struct device *VAR_9;
 u32 VAR_10;
 int VAR_11;

 if (!VAR_7 || !VAR_7->dev.of_node)
  return -VAR_0;

 VAR_9 = &VAR_7->dev;

 VAR_8 = FUNC_5(VAR_9, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_13(&VAR_8->msg_lock);

 VAR_11 = FUNC_10(VAR_9->of_node, "ibm,ipmi-interface-id",
   &VAR_10);
 if (VAR_11) {
  FUNC_2(VAR_9, "No interface ID property\n");
  goto err_free;
 }
 VAR_8->interface_id = VAR_10;

 VAR_11 = FUNC_10(VAR_9->of_node, "interrupts", &VAR_10);
 if (VAR_11) {
  FUNC_2(VAR_9, "No interrupts property\n");
  goto err_free;
 }

 VAR_8->irq = FUNC_9(VAR_9->of_node, 0);
 if (!VAR_8->irq) {
  FUNC_0(VAR_9, "Unable to map irq from device tree\n");
  VAR_8->irq = FUNC_11(VAR_10);
 }

 VAR_11 = FUNC_12(VAR_8->irq, VAR_5, VAR_4,
    "opal-ipmi", VAR_8);
 if (VAR_11) {
  FUNC_2(VAR_9, "Unable to request irq\n");
  goto err_dispose;
 }

 VAR_8->opal_msg = FUNC_4(VAR_9,
   sizeof(*VAR_8->opal_msg) + VAR_3,
   VAR_2);
 if (!VAR_8->opal_msg) {
  VAR_11 = -VAR_1;
  goto err_unregister;
 }

 VAR_11 = FUNC_7(&VAR_6, VAR_8, VAR_9, 0);
 if (VAR_11) {
  FUNC_2(VAR_9, "IPMI SMI registration failed (%d)\n", VAR_11);
  goto err_free_msg;
 }

 FUNC_1(VAR_9, VAR_8);
 return 0;

err_free_msg:
 FUNC_3(VAR_9, VAR_8->opal_msg);
err_unregister:
 FUNC_6(VAR_8->irq, VAR_8);
err_dispose:
 FUNC_8(VAR_8->irq);
err_free:
 FUNC_3(VAR_9, VAR_8);
 return VAR_11;
}
