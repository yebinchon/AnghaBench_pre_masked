
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct gpio_vibrator {TYPE_2__* input; int play_work; int gpio; int vcc; } ;
struct TYPE_7__ {int bustype; } ;
struct TYPE_8__ {char* name; int close; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ) ;
 TYPE_2__* FUNC_4 (int *) ;
 struct gpio_vibrator* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_2__*,int *,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;
 int FUNC_10 (TYPE_2__*,struct gpio_vibrator*) ;
 int FUNC_11 (struct platform_device*,struct gpio_vibrator*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_10)
{
 struct gpio_vibrator *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(&VAR_10->dev, sizeof(*VAR_11), VAR_5);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->input = FUNC_4(&VAR_10->dev);
 if (!VAR_11->input)
  return -VAR_1;

 VAR_11->vcc = FUNC_6(&VAR_10->dev, "vcc");
 VAR_12 = FUNC_1(VAR_11->vcc);
 if (VAR_12) {
  if (VAR_12 != -VAR_2)
   FUNC_2(&VAR_10->dev, "Failed to request regulator: %d\n",
    VAR_12);
  return VAR_12;
 }

 VAR_11->gpio = FUNC_3(&VAR_10->dev, "enable", VAR_6);
 VAR_12 = FUNC_1(VAR_11->gpio);
 if (VAR_12) {
  if (VAR_12 != -VAR_2)
   FUNC_2(&VAR_10->dev, "Failed to request main gpio: %d\n",
    VAR_12);
  return VAR_12;
 }

 FUNC_0(&VAR_11->play_work, VAR_9);

 VAR_11->input->name = "gpio-vibrator";
 VAR_11->input->id.bustype = VAR_0;
 VAR_11->input->close = VAR_7;

 FUNC_10(VAR_11->input, VAR_11);
 FUNC_9(VAR_11->input, VAR_3, VAR_4);

 VAR_12 = FUNC_7(VAR_11->input, ((void*)0),
          VAR_8);
 if (VAR_12) {
  FUNC_2(&VAR_10->dev, "Couldn't create FF dev: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_8(VAR_11->input);
 if (VAR_12) {
  FUNC_2(&VAR_10->dev, "Couldn't register input dev: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_11(VAR_10, VAR_11);

 return 0;
}
