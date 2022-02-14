
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct input_polled_dev {TYPE_2__* input; int poll; struct gpio_decoder* private; } ;
struct gpio_decoder {unsigned int axis; struct input_polled_dev* poll_dev; struct device* dev; TYPE_3__* input_gpios; } ;
struct TYPE_8__ {int ndescs; } ;
struct TYPE_6__ {int bustype; } ;
struct TYPE_7__ {TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (struct device*,char*,unsigned int*) ;
 TYPE_3__* FUNC_4 (struct device*,int *,int ) ;
 struct input_polled_dev* FUNC_5 (struct device*) ;
 struct gpio_decoder* FUNC_6 (struct device*,int,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct input_polled_dev*) ;
 int FUNC_8 (TYPE_2__*,unsigned int,int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct gpio_decoder *VAR_8;
 struct input_polled_dev *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_8 = FUNC_6(VAR_7, sizeof(struct gpio_decoder), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 FUNC_3(VAR_7, "linux,axis", &VAR_8->axis);
 VAR_8->input_gpios = FUNC_4(VAR_7, ((void*)0), VAR_4);
 if (FUNC_0(VAR_8->input_gpios)) {
  FUNC_2(VAR_7, "unable to acquire input gpios\n");
  return FUNC_1(VAR_8->input_gpios);
 }
 if (VAR_8->input_gpios->ndescs < 2) {
  FUNC_2(VAR_7, "not enough gpios found\n");
  return -VAR_1;
 }

 if (FUNC_3(VAR_7, "decoder-max-value", &VAR_10))
  VAR_10 = (1U << VAR_8->input_gpios->ndescs) - 1;

 VAR_8->dev = VAR_7;
 VAR_9 = FUNC_5(VAR_8->dev);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->private = VAR_8;
 VAR_9->poll = VAR_5;
 VAR_8->poll_dev = VAR_9;

 VAR_9->input->name = VAR_6->name;
 VAR_9->input->id.bustype = VAR_0;
 FUNC_8(VAR_9->input, VAR_8->axis, 0, VAR_10, 0, 0);

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11) {
  FUNC_2(VAR_7, "failed to register polled  device\n");
  return VAR_11;
 }

 return 0;
}
