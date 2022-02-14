
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
struct input_dev {int keycodesize; int keybit; int evbit; int keycodemax; int * keycode; TYPE_1__ dev; int id; int phys; int name; } ;
struct ims_pcu_buttons {struct input_dev* input; int * keymap; int phys; int name; } ;
struct ims_pcu {int device_no; int dev; TYPE_2__* ctrl_intf; int udev; struct ims_pcu_buttons buttons; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 struct input_dev* FUNC_4 () ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (int *,unsigned short const*,int) ;
 int FUNC_8 (int ,int,char*,int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct ims_pcu *VAR_4,
     const unsigned short *VAR_5,
     size_t VAR_6)
{
 struct ims_pcu_buttons *VAR_7 = &VAR_4->buttons;
 struct input_dev *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4();
 if (!VAR_8) {
  FUNC_3(VAR_4->dev,
   "Not enough memory for input input device\n");
  return -VAR_0;
 }

 FUNC_8(VAR_7->name, sizeof(VAR_7->name),
   "IMS PCU#%d Button Interface", VAR_4->device_no);

 FUNC_10(VAR_4->udev, VAR_7->phys, sizeof(VAR_7->phys));
 FUNC_9(VAR_7->phys, "/input0", sizeof(VAR_7->phys));

 FUNC_7(VAR_7->keymap, VAR_5, sizeof(*VAR_5) * VAR_6);

 VAR_8->name = VAR_7->name;
 VAR_8->phys = VAR_7->phys;
 FUNC_11(VAR_4->udev, &VAR_8->id);
 VAR_8->dev.parent = &VAR_4->ctrl_intf->dev;

 VAR_8->keycode = VAR_7->keymap;
 VAR_8->keycodemax = FUNC_0(VAR_7->keymap);
 VAR_8->keycodesize = sizeof(VAR_7->keymap[0]);

 FUNC_2(VAR_1, VAR_8->evbit);
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  FUNC_2(VAR_7->keymap[VAR_9], VAR_8->keybit);
 FUNC_1(VAR_3, VAR_8->keybit);

 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10) {
  FUNC_3(VAR_4->dev,
   "Failed to register buttons input device: %d\n",
   VAR_10);
  FUNC_5(VAR_8);
  return VAR_10;
 }

 VAR_7->input = VAR_8;
 return 0;
}
