
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int version; int product; int vendor; int bustype; } ;
struct input_dev {char* name; int propbit; int keybit; TYPE_2__ dev; TYPE_1__ id; int uniq; int phys; } ;
struct hid_input {int dummy; } ;
struct hid_device {int dev; int version; int product; int vendor; int bus; int uniq; int phys; } ;
struct elan_drvdata {struct input_dev* input; int res_y; int res_x; int max_y; int max_x; } ;


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
 int FUNC_0 (int ,int ) ;
 struct input_dev* FUNC_1 (int *) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,char*,int) ;
 struct elan_drvdata* FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct hid_device*) ;

__attribute__((used)) static int FUNC_11(struct hid_device *VAR_11, struct hid_input *VAR_12)
{
 int VAR_13;
 struct input_dev *VAR_14;
 struct elan_drvdata *VAR_15 = FUNC_4(VAR_11);

 if (FUNC_10(VAR_11))
  return 0;

 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_14 = FUNC_1(&VAR_11->dev);
 if (!VAR_14)
  return -VAR_8;

 VAR_14->name = "Elan Touchpad";
 VAR_14->phys = VAR_11->phys;
 VAR_14->uniq = VAR_11->uniq;
 VAR_14->id.bustype = VAR_11->bus;
 VAR_14->id.vendor = VAR_11->vendor;
 VAR_14->id.product = VAR_11->product;
 VAR_14->id.version = VAR_11->version;
 VAR_14->dev.parent = &VAR_11->dev;

 FUNC_9(VAR_14, VAR_0, 0, VAR_15->max_x,
        0, 0);
 FUNC_9(VAR_14, VAR_1, 0, VAR_15->max_y,
        0, 0);
 FUNC_9(VAR_14, VAR_2, 0, VAR_7,
        0, 0);

 FUNC_0(VAR_5, VAR_14->keybit);
 FUNC_0(VAR_10, VAR_14->propbit);

 VAR_13 = FUNC_7(VAR_14, VAR_6, VAR_9);
 if (VAR_13) {
  FUNC_3(VAR_11, "Failed to init elan MT slots: %d\n", VAR_13);
  return VAR_13;
 }

 FUNC_5(VAR_14, VAR_3, VAR_15->res_x);
 FUNC_5(VAR_14, VAR_4, VAR_15->res_y);

 VAR_13 = FUNC_8(VAR_14);
 if (VAR_13) {
  FUNC_3(VAR_11, "Failed to register elan input device: %d\n",
   VAR_13);
  FUNC_6(VAR_14);
  return VAR_13;
 }

 VAR_15->input = VAR_14;

 return 0;
}
