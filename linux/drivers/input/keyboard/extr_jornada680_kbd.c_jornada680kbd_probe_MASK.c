
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct jornadakbd {struct input_polled_dev* poll_dev; scalar_t__* keymap; } ;
struct input_polled_dev {int poll_interval; struct input_dev* input; int poll; struct jornadakbd* private; } ;
struct TYPE_4__ {int bustype; } ;
struct TYPE_3__ {int * parent; } ;
struct input_dev {int* evbit; char* name; char* phys; int keycodesize; int keybit; TYPE_2__ id; TYPE_1__ dev; int keycodemax; scalar_t__* keycode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,char*) ;
 struct input_polled_dev* FUNC_5 (int *) ;
 struct jornadakbd* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct input_polled_dev*) ;
 int FUNC_8 (struct input_dev*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_10)
{
 struct jornadakbd *VAR_11;
 struct input_polled_dev *VAR_12;
 struct input_dev *VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = FUNC_6(&VAR_10->dev, sizeof(struct jornadakbd),
      VAR_5);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_5(&VAR_10->dev);
 if (!VAR_12) {
  FUNC_4(&VAR_10->dev, "failed to allocate polled input device\n");
  return -VAR_1;
 }

 VAR_11->poll_dev = VAR_12;

 FUNC_9(VAR_11->keymap, VAR_8,
  sizeof(VAR_11->keymap));

 VAR_12->private = VAR_11;
 VAR_12->poll = VAR_9;
 VAR_12->poll_interval = 50;

 VAR_13 = VAR_12->input;
 VAR_13->evbit[0] = FUNC_1(VAR_2) | FUNC_1(VAR_4);
 VAR_13->name = "HP Jornada 680 keyboard";
 VAR_13->phys = "jornadakbd/input0";
 VAR_13->keycode = VAR_11->keymap;
 VAR_13->keycodesize = sizeof(unsigned short);
 VAR_13->keycodemax = FUNC_0(VAR_8);
 VAR_13->dev.parent = &VAR_10->dev;
 VAR_13->id.bustype = VAR_0;

 for (VAR_14 = 0; VAR_14 < 128; VAR_14++)
  if (VAR_11->keymap[VAR_14])
   FUNC_3(VAR_11->keymap[VAR_14], VAR_13->keybit);
 FUNC_2(VAR_6, VAR_13->keybit);

 FUNC_8(VAR_13, VAR_3, VAR_7);

 VAR_15 = FUNC_7(VAR_11->poll_dev);
 if (VAR_15) {
  FUNC_4(&VAR_10->dev, "failed to register polled input device\n");
  return VAR_15;
 }

 return 0;
}
