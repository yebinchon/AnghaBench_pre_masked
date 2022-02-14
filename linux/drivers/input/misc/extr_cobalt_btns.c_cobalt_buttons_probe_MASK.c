
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct input_polled_dev {struct input_dev* input; int poll_interval; int poll; struct buttons_dev* private; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {char* name; char* phys; int keycodemax; int keycodesize; int keybit; int evbit; int * keycode; TYPE_2__ dev; TYPE_1__ id; } ;
struct buttons_dev {int reg; struct input_polled_dev* poll_dev; int * keymap; } ;


 int FUNC_0 (int *) ;
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int * VAR_10 ;
 int FUNC_3 (int *,struct buttons_dev*) ;
 int VAR_11 ;
 struct input_polled_dev* FUNC_4 () ;
 int FUNC_5 (struct input_polled_dev*) ;
 int FUNC_6 (struct input_polled_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct buttons_dev*) ;
 struct buttons_dev* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *,int) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct resource*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_12)
{
 struct buttons_dev *VAR_13;
 struct input_polled_dev *VAR_14;
 struct input_dev *VAR_15;
 struct resource *VAR_16;
 int VAR_17, VAR_18;

 VAR_13 = FUNC_11(sizeof(struct buttons_dev), VAR_6);
 VAR_14 = FUNC_4();
 if (!VAR_13 || !VAR_14) {
  VAR_17 = -VAR_3;
  goto err_free_mem;
 }

 FUNC_12(VAR_13->keymap, VAR_10, sizeof(VAR_13->keymap));

 VAR_14->private = VAR_13;
 VAR_14->poll = VAR_11;
 VAR_14->poll_interval = VAR_1;

 VAR_15 = VAR_14->input;
 VAR_15->name = "Cobalt buttons";
 VAR_15->phys = "cobalt/input0";
 VAR_15->id.bustype = VAR_0;
 VAR_15->dev.parent = &VAR_12->dev;

 VAR_15->keycode = VAR_13->keymap;
 VAR_15->keycodemax = FUNC_0(VAR_13->keymap);
 VAR_15->keycodesize = sizeof(unsigned short);

 FUNC_7(VAR_15, VAR_5, VAR_9);
 FUNC_2(VAR_4, VAR_15->evbit);
 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_10); VAR_18++)
  FUNC_2(VAR_13->keymap[VAR_18], VAR_15->keybit);
 FUNC_1(VAR_8, VAR_15->keybit);

 VAR_16 = FUNC_13(VAR_12, VAR_7, 0);
 if (!VAR_16) {
  VAR_17 = -VAR_2;
  goto err_free_mem;
 }

 VAR_13->poll_dev = VAR_14;
 VAR_13->reg = FUNC_8(VAR_16->start, FUNC_14(VAR_16));
 FUNC_3(&VAR_12->dev, VAR_13);

 VAR_17 = FUNC_6(VAR_14);
 if (VAR_17)
  goto err_iounmap;

 return 0;

 err_iounmap:
 FUNC_9(VAR_13->reg);
 err_free_mem:
 FUNC_5(VAR_14);
 FUNC_10(VAR_13);
 return VAR_17;
}
