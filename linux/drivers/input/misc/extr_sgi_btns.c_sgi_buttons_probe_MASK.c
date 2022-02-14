
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct input_polled_dev {struct input_dev* input; int poll_interval; int poll; struct buttons_dev* private; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {char* name; char* phys; int keycodemax; int keycodesize; int keybit; int evbit; int * keycode; TYPE_2__ dev; TYPE_1__ id; } ;
struct buttons_dev {struct input_polled_dev* poll_dev; int * keymap; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 struct input_polled_dev* FUNC_3 () ;
 int FUNC_4 (struct input_polled_dev*) ;
 int FUNC_5 (struct input_polled_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (struct buttons_dev*) ;
 struct buttons_dev* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (struct platform_device*,struct buttons_dev*) ;
 int * VAR_9 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_10)
{
 struct buttons_dev *VAR_11;
 struct input_polled_dev *VAR_12;
 struct input_dev *VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = FUNC_8(sizeof(struct buttons_dev), VAR_5);
 VAR_12 = FUNC_3();
 if (!VAR_11 || !VAR_12) {
  VAR_14 = -VAR_2;
  goto err_free_mem;
 }

 FUNC_9(VAR_11->keymap, VAR_9, sizeof(VAR_11->keymap));

 VAR_12->private = VAR_11;
 VAR_12->poll = VAR_8;
 VAR_12->poll_interval = VAR_1;

 VAR_13 = VAR_12->input;
 VAR_13->name = "SGI buttons";
 VAR_13->phys = "sgi/input0";
 VAR_13->id.bustype = VAR_0;
 VAR_13->dev.parent = &VAR_10->dev;

 VAR_13->keycode = VAR_11->keymap;
 VAR_13->keycodemax = FUNC_0(VAR_11->keymap);
 VAR_13->keycodesize = sizeof(unsigned short);

 FUNC_6(VAR_13, VAR_4, VAR_7);
 FUNC_2(VAR_3, VAR_13->evbit);
 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_9); VAR_15++)
  FUNC_2(VAR_11->keymap[VAR_15], VAR_13->keybit);
 FUNC_1(VAR_6, VAR_13->keybit);

 VAR_11->poll_dev = VAR_12;
 FUNC_10(VAR_10, VAR_11);

 VAR_14 = FUNC_5(VAR_12);
 if (VAR_14)
  goto err_free_mem;

 return 0;

 err_free_mem:
 FUNC_4(VAR_12);
 FUNC_7(VAR_11);
 return VAR_14;
}
