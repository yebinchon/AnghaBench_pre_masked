
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001 {char* pen_name; char* touch_name; struct input_dev* pen_dev; struct input_dev* touch_dev; int phys; int cmd_done; int mutex; struct serio* serio; } ;
struct serio_driver {int dummy; } ;
struct serio {char* phys; } ;
struct input_dev {char* name; } ;
typedef int basename ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct w8001*) ;
 struct w8001* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct serio*) ;
 int FUNC_9 (struct serio*,struct serio_driver*) ;
 int FUNC_10 (struct serio*,struct w8001*) ;
 int FUNC_11 (int ,int,char*,char*) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (struct w8001*) ;
 int FUNC_15 (struct input_dev*,struct w8001*,struct serio*) ;
 int FUNC_16 (struct w8001*,char*,int) ;
 int FUNC_17 (struct w8001*,char*,int) ;

__attribute__((used)) static int FUNC_18(struct serio *VAR_3, struct serio_driver *VAR_4)
{
 struct w8001 *VAR_5;
 struct input_dev *VAR_6;
 struct input_dev *VAR_7;
 char VAR_8[64];
 int VAR_9, VAR_10, VAR_11;

 VAR_5 = FUNC_6(sizeof(struct w8001), VAR_2);
 VAR_6 = FUNC_1();
 VAR_7 = FUNC_1();
 if (!VAR_5 || !VAR_6 || !VAR_7) {
  VAR_9 = -VAR_0;
  goto fail1;
 }

 VAR_5->serio = VAR_3;
 VAR_5->pen_dev = VAR_6;
 VAR_5->touch_dev = VAR_7;
 FUNC_7(&VAR_5->mutex);
 FUNC_0(&VAR_5->cmd_done);
 FUNC_11(VAR_5->phys, sizeof(VAR_5->phys), "%s/input0", VAR_3->phys);

 FUNC_10(VAR_3, VAR_5);
 VAR_9 = FUNC_9(VAR_3, VAR_4);
 if (VAR_9)
  goto fail2;

 VAR_9 = FUNC_14(VAR_5);
 if (VAR_9)
  goto fail3;




 FUNC_13(VAR_8, "Wacom Serial", sizeof(VAR_8));

 VAR_10 = FUNC_16(VAR_5, VAR_8, sizeof(VAR_8));
 VAR_11 = FUNC_17(VAR_5, VAR_8, sizeof(VAR_8));
 if (VAR_10 && VAR_11) {
  VAR_9 = -VAR_1;
  goto fail3;
 }

 if (!VAR_10) {
  FUNC_13(VAR_5->pen_name, VAR_8, sizeof(VAR_5->pen_name));
  FUNC_12(VAR_5->pen_name, " Pen", sizeof(VAR_5->pen_name));
  VAR_6->name = VAR_5->pen_name;

  FUNC_15(VAR_6, VAR_5, VAR_3);

  VAR_9 = FUNC_3(VAR_5->pen_dev);
  if (VAR_9)
   goto fail3;
 } else {
  FUNC_2(VAR_6);
  VAR_6 = ((void*)0);
  VAR_5->pen_dev = ((void*)0);
 }

 if (!VAR_11) {
  FUNC_13(VAR_5->touch_name, VAR_8, sizeof(VAR_5->touch_name));
  FUNC_12(VAR_5->touch_name, " Finger",
   sizeof(VAR_5->touch_name));
  VAR_7->name = VAR_5->touch_name;

  FUNC_15(VAR_7, VAR_5, VAR_3);

  VAR_9 = FUNC_3(VAR_5->touch_dev);
  if (VAR_9)
   goto fail4;
 } else {
  FUNC_2(VAR_7);
  VAR_7 = ((void*)0);
  VAR_5->touch_dev = ((void*)0);
 }

 return 0;

fail4:
 if (VAR_5->pen_dev)
  FUNC_4(VAR_5->pen_dev);
fail3:
 FUNC_8(VAR_3);
fail2:
 FUNC_10(VAR_3, ((void*)0));
fail1:
 FUNC_2(VAR_6);
 FUNC_2(VAR_7);
 FUNC_5(VAR_5);
 return VAR_9;
}
