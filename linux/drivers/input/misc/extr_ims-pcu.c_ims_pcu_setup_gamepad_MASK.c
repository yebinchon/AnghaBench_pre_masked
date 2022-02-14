
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
struct input_dev {int evbit; int keybit; TYPE_1__ dev; int id; int phys; int name; } ;
struct ims_pcu_gamepad {int phys; int name; struct input_dev* input; } ;
struct ims_pcu {int device_no; struct ims_pcu_gamepad* gamepad; int dev; TYPE_2__* ctrl_intf; int udev; } ;
struct TYPE_4__ {int dev; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_6 (struct ims_pcu_gamepad*) ;
 struct ims_pcu_gamepad* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int,char*,int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct ims_pcu *VAR_12)
{
 struct ims_pcu_gamepad *VAR_13;
 struct input_dev *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_7(sizeof(struct ims_pcu_gamepad), VAR_11);
 VAR_14 = FUNC_2();
 if (!VAR_13 || !VAR_14) {
  FUNC_1(VAR_12->dev,
   "Not enough memory for gamepad device\n");
  VAR_15 = -VAR_8;
  goto err_free_mem;
 }

 VAR_13->input = VAR_14;

 FUNC_8(VAR_13->name, sizeof(VAR_13->name),
   "IMS PCU#%d Gamepad Interface", VAR_12->device_no);

 FUNC_10(VAR_12->udev, VAR_13->phys, sizeof(VAR_13->phys));
 FUNC_9(VAR_13->phys, "/input1", sizeof(VAR_13->phys));

 VAR_14->name = VAR_13->name;
 VAR_14->phys = VAR_13->phys;
 FUNC_11(VAR_12->udev, &VAR_14->id);
 VAR_14->dev.parent = &VAR_12->ctrl_intf->dev;

 FUNC_0(VAR_10, VAR_14->evbit);
 FUNC_0(VAR_2, VAR_14->keybit);
 FUNC_0(VAR_3, VAR_14->keybit);
 FUNC_0(VAR_6, VAR_14->keybit);
 FUNC_0(VAR_7, VAR_14->keybit);
 FUNC_0(VAR_5, VAR_14->keybit);
 FUNC_0(VAR_4, VAR_14->keybit);

 FUNC_0(VAR_9, VAR_14->evbit);
 FUNC_5(VAR_14, VAR_0, -1, 1, 0, 0);
 FUNC_5(VAR_14, VAR_1, -1, 1, 0, 0);

 VAR_15 = FUNC_4(VAR_14);
 if (VAR_15) {
  FUNC_1(VAR_12->dev,
   "Failed to register gamepad input device: %d\n",
   VAR_15);
  goto err_free_mem;
 }

 VAR_12->gamepad = VAR_13;
 return 0;

err_free_mem:
 FUNC_3(VAR_14);
 FUNC_6(VAR_13);
 return -VAR_8;
}
