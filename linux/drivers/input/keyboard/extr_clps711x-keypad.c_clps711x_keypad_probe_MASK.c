
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct device {struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct input_polled_dev {TYPE_3__* input; int poll_interval; int poll; struct clps711x_keypad_data* private; } ;
struct device_node {int dummy; } ;
struct clps711x_keypad_data {int row_count; int syscon; struct clps711x_gpio_data* gpio_data; int row_shift; } ;
struct clps711x_gpio_data {int desc; } ;
struct TYPE_6__ {int vendor; int product; int version; int bustype; } ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_7__ {int evbit; TYPE_2__ id; TYPE_1__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ) ;
 int VAR_11 ;
 int FUNC_4 (struct device*,char*,int,int ) ;
 struct clps711x_gpio_data* FUNC_5 (struct device*,int,int,int ) ;
 struct clps711x_keypad_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int ) ;
 struct input_polled_dev* FUNC_8 () ;
 int FUNC_9 (struct input_polled_dev*) ;
 int FUNC_10 (struct input_polled_dev*) ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;
 int FUNC_12 (int *,int *,int,int ,int *,TYPE_3__*) ;
 int FUNC_13 (struct device_node*,char*) ;
 scalar_t__ FUNC_14 (struct device_node*,char*) ;
 int FUNC_15 (struct device_node*,char*,int *) ;
 int FUNC_16 (struct platform_device*,struct input_polled_dev*) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_12)
{
 struct clps711x_keypad_data *VAR_13;
 struct device *VAR_14 = &VAR_12->dev;
 struct device_node *VAR_15 = VAR_14->of_node;
 struct input_polled_dev *VAR_16;
 u32 VAR_17;
 int VAR_18, VAR_19;

 VAR_13 = FUNC_6(VAR_14, sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->syscon =
  FUNC_18("cirrus,ep7209-syscon1");
 if (FUNC_0(VAR_13->syscon))
  return FUNC_1(VAR_13->syscon);

 VAR_13->row_count = FUNC_13(VAR_15, "row-gpios");
 if (VAR_13->row_count < 1)
  return -VAR_2;

 VAR_13->gpio_data = FUNC_5(VAR_14,
    VAR_13->row_count, sizeof(*VAR_13->gpio_data),
    VAR_6);
 if (!VAR_13->gpio_data)
  return -VAR_3;

 VAR_13->row_shift = FUNC_7(VAR_1);

 for (VAR_18 = 0; VAR_18 < VAR_13->row_count; VAR_18++) {
  struct clps711x_gpio_data *VAR_20 = &VAR_13->gpio_data[VAR_18];

  VAR_20->desc = FUNC_4(VAR_14, "row", VAR_18, VAR_7);
  if (FUNC_0(VAR_20->desc))
   return FUNC_1(VAR_20->desc);
 }

 VAR_19 = FUNC_15(VAR_15, "poll-interval", &VAR_17);
 if (VAR_19)
  return VAR_19;

 VAR_16 = FUNC_8();
 if (!VAR_16)
  return -VAR_3;

 VAR_16->private = VAR_13;
 VAR_16->poll = VAR_11;
 VAR_16->poll_interval = VAR_17;
 VAR_16->input->name = VAR_12->name;
 VAR_16->input->dev.parent = VAR_14;
 VAR_16->input->id.bustype = VAR_0;
 VAR_16->input->id.vendor = 0x0001;
 VAR_16->input->id.product = 0x0001;
 VAR_16->input->id.version = 0x0100;

 VAR_19 = FUNC_12(((void*)0), ((void*)0), VAR_13->row_count,
      VAR_1,
      ((void*)0), VAR_16->input);
 if (VAR_19)
  goto out_err;

 FUNC_11(VAR_16->input, VAR_4, VAR_8);
 if (FUNC_14(VAR_15, "autorepeat"))
  FUNC_3(VAR_5, VAR_16->input->evbit);

 FUNC_16(VAR_12, VAR_16);


 FUNC_17(VAR_13->syscon, VAR_10, VAR_9,
      FUNC_2(1));

 VAR_19 = FUNC_10(VAR_16);
 if (VAR_19)
  goto out_err;

 return 0;

out_err:
 FUNC_9(VAR_16);
 return VAR_19;
}
