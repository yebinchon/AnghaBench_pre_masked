
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; int name; } ;
struct input_polled_dev {int poll_interval; struct input_dev* input; int poll; struct gpio_mouse* private; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {TYPE_2__ dev; TYPE_1__ id; int name; } ;
struct gpio_mouse {int scan_ms; void* bright; void* bmiddle; void* bleft; void* right; void* left; void* down; void* up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct device*,char*,int,char*,char*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,int*) ;
 void* FUNC_6 (struct device*,char*,int ) ;
 void* FUNC_7 (struct device*,char*,int ) ;
 struct input_polled_dev* FUNC_8 (struct device*) ;
 struct gpio_mouse* FUNC_9 (struct device*,int,int ) ;
 int VAR_11 ;
 int FUNC_10 (struct input_polled_dev*) ;
 int FUNC_11 (struct input_dev*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct input_polled_dev*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct gpio_mouse *VAR_14;
 struct input_polled_dev *VAR_15;
 struct input_dev *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_9(VAR_13, sizeof(*VAR_14), VAR_7);
 if (!VAR_14)
  return -VAR_4;


 VAR_17 = FUNC_5(VAR_13, "scan-interval-ms",
           &VAR_14->scan_ms);
 if (VAR_17 || VAR_14->scan_ms == 0) {
  FUNC_4(VAR_13, "invalid scan time, set to 50 ms\n");
  VAR_14->scan_ms = 50;
 }

 VAR_14->up = FUNC_6(VAR_13, "up", VAR_8);
 if (FUNC_0(VAR_14->up))
  return FUNC_1(VAR_14->up);
 VAR_14->down = FUNC_6(VAR_13, "down", VAR_8);
 if (FUNC_0(VAR_14->down))
  return FUNC_1(VAR_14->down);
 VAR_14->left = FUNC_6(VAR_13, "left", VAR_8);
 if (FUNC_0(VAR_14->left))
  return FUNC_1(VAR_14->left);
 VAR_14->right = FUNC_6(VAR_13, "right", VAR_8);
 if (FUNC_0(VAR_14->right))
  return FUNC_1(VAR_14->right);

 VAR_14->bleft = FUNC_7(VAR_13, "button-left", VAR_8);
 if (FUNC_0(VAR_14->bleft))
  return FUNC_1(VAR_14->bleft);
 VAR_14->bmiddle = FUNC_7(VAR_13, "button-middle",
        VAR_8);
 if (FUNC_0(VAR_14->bmiddle))
  return FUNC_1(VAR_14->bmiddle);
 VAR_14->bright = FUNC_7(VAR_13, "button-right",
       VAR_8);
 if (FUNC_0(VAR_14->bright))
  return FUNC_1(VAR_14->bright);

 VAR_15 = FUNC_8(VAR_13);
 if (!VAR_15) {
  FUNC_3(VAR_13, "not enough memory for input device\n");
  return -VAR_4;
 }

 FUNC_12(VAR_12, VAR_15);


 VAR_15->private = VAR_14;
 VAR_15->poll = VAR_11;
 VAR_15->poll_interval = VAR_14->scan_ms;

 VAR_16 = VAR_15->input;
 VAR_16->name = VAR_12->name;
 VAR_16->id.bustype = VAR_3;
 VAR_16->dev.parent = &VAR_12->dev;

 FUNC_11(VAR_16, VAR_6, VAR_9);
 FUNC_11(VAR_16, VAR_6, VAR_10);
 if (VAR_14->bleft)
  FUNC_11(VAR_16, VAR_5, VAR_0);
 if (VAR_14->bmiddle)
  FUNC_11(VAR_16, VAR_5, VAR_1);
 if (VAR_14->bright)
  FUNC_11(VAR_16, VAR_5, VAR_2);

 VAR_17 = FUNC_10(VAR_15);
 if (VAR_17) {
  FUNC_3(VAR_13, "could not register input device\n");
  return VAR_17;
 }

 FUNC_2(VAR_13, "%d ms scan time, buttons: %s%s%s\n",
  VAR_14->scan_ms,
  VAR_14->bleft ? "" : "left ",
  VAR_14->bmiddle ? "" : "middle ",
  VAR_14->bright ? "" : "right");

 return 0;
}
