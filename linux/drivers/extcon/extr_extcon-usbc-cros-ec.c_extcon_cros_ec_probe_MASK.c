
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {struct device_node* of_node; int parent; } ;
struct platform_device {int id; struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int notifier_call; } ;
struct cros_ec_extcon_info {int port_id; int pr; TYPE_1__ notifier; struct cros_ec_device* ec; int dr; int edev; struct device* dev; } ;
struct cros_ec_device {int event_notifier; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct cros_ec_extcon_info*) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct cros_ec_device* FUNC_5 (int ) ;
 int FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*,int ) ;
 struct cros_ec_extcon_info* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct cros_ec_extcon_info*,int) ;
 int VAR_11 ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct device_node*,char*,int*) ;
 int FUNC_12 (struct platform_device*,struct cros_ec_extcon_info*) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_13)
{
 struct cros_ec_extcon_info *VAR_14;
 struct cros_ec_device *VAR_15 = FUNC_5(VAR_13->dev.parent);
 struct device *VAR_16 = &VAR_13->dev;
 struct device_node *VAR_17 = VAR_16->of_node;
 int VAR_18, VAR_19;

 VAR_14 = FUNC_8(VAR_16, sizeof(*VAR_14), VAR_10);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->dev = VAR_16;
 VAR_14->ec = VAR_15;

 if (VAR_17) {
  u32 VAR_20;

  VAR_19 = FUNC_11(VAR_17, "google,usb-port-id", &VAR_20);
  if (VAR_19 < 0) {
   FUNC_4(VAR_16, "Missing google,usb-port-id property\n");
   return VAR_19;
  }
  VAR_14->port_id = VAR_20;
 } else {
  VAR_14->port_id = VAR_13->id;
 }

 VAR_18 = FUNC_3(VAR_14);
 if (VAR_18 < 0) {
  FUNC_4(VAR_16, "failed getting number of ports! ret = %d\n",
   VAR_18);
  return VAR_18;
 }

 if (VAR_14->port_id >= VAR_18) {
  FUNC_4(VAR_16, "This system only supports %d ports\n", VAR_18);
  return -VAR_1;
 }

 VAR_14->edev = FUNC_6(VAR_16, VAR_12);
 if (FUNC_0(VAR_14->edev)) {
  FUNC_4(VAR_16, "failed to allocate extcon device\n");
  return -VAR_2;
 }

 VAR_19 = FUNC_7(VAR_16, VAR_14->edev);
 if (VAR_19 < 0) {
  FUNC_4(VAR_16, "failed to register extcon device\n");
  return VAR_19;
 }

 FUNC_10(VAR_14->edev, VAR_8,
           VAR_7);
 FUNC_10(VAR_14->edev, VAR_9,
           VAR_7);
 FUNC_10(VAR_14->edev, VAR_8,
           VAR_6);
 FUNC_10(VAR_14->edev, VAR_9,
           VAR_6);
 FUNC_10(VAR_14->edev, VAR_3,
           VAR_6);
 FUNC_10(VAR_14->edev, VAR_8,
           VAR_5);
 FUNC_10(VAR_14->edev, VAR_9,
           VAR_5);
 FUNC_10(VAR_14->edev, VAR_3,
           VAR_5);
 FUNC_10(VAR_14->edev, VAR_3,
           VAR_4);

 VAR_14->dr = VAR_0;
 VAR_14->pr = 0;

 FUNC_12(VAR_13, VAR_14);


 VAR_14->notifier.notifier_call = VAR_11;
 VAR_19 = FUNC_1(&VAR_14->ec->event_notifier,
            &VAR_14->notifier);
 if (VAR_19 < 0) {
  FUNC_4(VAR_16, "failed to register notifier\n");
  return VAR_19;
 }


 VAR_19 = FUNC_9(VAR_14, 1);
 if (VAR_19 < 0) {
  FUNC_4(VAR_16, "failed to detect initial cable state\n");
  goto unregister_notifier;
 }

 return 0;

unregister_notifier:
 FUNC_2(&VAR_14->ec->event_notifier,
        &VAR_14->notifier);
 return VAR_19;
}
