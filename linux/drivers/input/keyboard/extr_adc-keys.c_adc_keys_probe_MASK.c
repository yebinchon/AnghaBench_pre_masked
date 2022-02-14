
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct input_polled_dev {int poll_interval; struct input_dev* input; struct adc_keys_state* private; int poll; } ;
struct TYPE_7__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {char* phys; int evbit; int keybit; TYPE_1__ id; int name; } ;
struct adc_keys_state {int keyup_voltage; int num_keys; TYPE_2__* map; TYPE_3__* channel; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
struct TYPE_9__ {int indio_dev; } ;
struct TYPE_8__ {int keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*,struct adc_keys_state*) ;
 int VAR_8 ;
 int FUNC_4 (struct device*,char*,...) ;
 scalar_t__ FUNC_5 (struct device*,char*) ;
 scalar_t__ FUNC_6 (struct device*,char*,int*) ;
 TYPE_3__* FUNC_7 (struct device*,char*) ;
 struct input_polled_dev* FUNC_8 (struct device*) ;
 struct adc_keys_state* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (TYPE_3__*,int*) ;
 int FUNC_11 (struct input_polled_dev*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct adc_keys_state *VAR_11;
 struct input_polled_dev *VAR_12;
 struct input_dev *VAR_13;
 enum iio_chan_type VAR_14;
 int VAR_15, VAR_16;
 int VAR_17;

 VAR_11 = FUNC_9(VAR_10, sizeof(*VAR_11), VAR_6);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->channel = FUNC_7(VAR_10, "buttons");
 if (FUNC_0(VAR_11->channel))
  return FUNC_1(VAR_11->channel);

 if (!VAR_11->channel->indio_dev)
  return -VAR_3;

 VAR_17 = FUNC_10(VAR_11->channel, &VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_14 != VAR_7) {
  FUNC_4(VAR_10, "Incompatible channel type %d\n", VAR_14);
  return -VAR_1;
 }

 if (FUNC_6(VAR_10, "keyup-threshold-microvolt",
         &VAR_11->keyup_voltage)) {
  FUNC_4(VAR_10, "Invalid or missing keyup voltage\n");
  return -VAR_1;
 }
 VAR_11->keyup_voltage /= 1000;

 VAR_17 = FUNC_3(VAR_10, VAR_11);
 if (VAR_17)
  return VAR_17;

 VAR_12 = FUNC_8(VAR_10);
 if (!VAR_12) {
  FUNC_4(VAR_10, "failed to allocate input device\n");
  return -VAR_2;
 }

 if (!FUNC_6(VAR_10, "poll-interval", &VAR_16))
  VAR_12->poll_interval = VAR_16;

 VAR_12->poll = VAR_8;
 VAR_12->private = VAR_11;

 VAR_13 = VAR_12->input;

 VAR_13->name = VAR_9->name;
 VAR_13->phys = "adc-keys/input0";

 VAR_13->id.bustype = VAR_0;
 VAR_13->id.vendor = 0x0001;
 VAR_13->id.product = 0x0001;
 VAR_13->id.version = 0x0100;

 FUNC_2(VAR_4, VAR_13->evbit);
 for (VAR_15 = 0; VAR_15 < VAR_11->num_keys; VAR_15++)
  FUNC_2(VAR_11->map[VAR_15].keycode, VAR_13->keybit);

 if (FUNC_5(VAR_10, "autorepeat"))
  FUNC_2(VAR_5, VAR_13->evbit);

 VAR_17 = FUNC_11(VAR_12);
 if (VAR_17) {
  FUNC_4(VAR_10, "Unable to register input device: %d\n", VAR_17);
  return VAR_17;
 }

 return 0;
}
