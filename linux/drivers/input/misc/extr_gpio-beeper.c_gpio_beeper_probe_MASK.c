
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int name; int dev; } ;
struct TYPE_2__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {int event; int close; TYPE_1__ id; int name; } ;
struct gpio_beeper {int work; int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int *,int ) ;
 struct input_dev* FUNC_4 (int *) ;
 struct gpio_beeper* FUNC_5 (int *,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (struct input_dev*,struct gpio_beeper*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9)
{
 struct gpio_beeper *VAR_10;
 struct input_dev *VAR_11;

 VAR_10 = FUNC_5(&VAR_9->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->desc = FUNC_3(&VAR_9->dev, ((void*)0), VAR_4);
 if (FUNC_1(VAR_10->desc))
  return FUNC_2(VAR_10->desc);

 VAR_11 = FUNC_4(&VAR_9->dev);
 if (!VAR_11)
  return -VAR_1;

 FUNC_0(&VAR_10->work, VAR_8);

 VAR_11->name = VAR_9->name;
 VAR_11->id.bustype = VAR_0;
 VAR_11->id.vendor = 0x0001;
 VAR_11->id.product = 0x0001;
 VAR_11->id.version = 0x0100;
 VAR_11->close = VAR_6;
 VAR_11->event = VAR_7;

 FUNC_7(VAR_11, VAR_2, VAR_5);

 FUNC_8(VAR_11, VAR_10);

 return FUNC_6(VAR_11);
}
