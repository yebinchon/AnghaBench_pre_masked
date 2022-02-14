
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sun4i_lradc_data {int chan0_map_count; TYPE_3__* input; int base; TYPE_2__* chan0_map; struct device* dev; int vref_supply; int variant; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_6__ {int vendor; int product; int version; int bustype; } ;
struct TYPE_8__ {char* phys; int keybit; int evbit; TYPE_1__ id; int close; int open; int name; } ;
struct TYPE_7__ {int keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*,char*) ;
 TYPE_3__* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int ) ;
 struct sun4i_lradc_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,int ,int ,int ,char*,struct sun4i_lradc_data*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,struct sun4i_lradc_data*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (struct device*,struct sun4i_lradc_data*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_9)
{
 struct sun4i_lradc_data *VAR_10;
 struct device *VAR_11 = &VAR_9->dev;
 int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_6(VAR_11, sizeof(struct sun4i_lradc_data), VAR_4);
 if (!VAR_10)
  return -VAR_2;

 VAR_13 = FUNC_14(VAR_11, VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_10->variant = FUNC_11(&VAR_9->dev);
 if (!VAR_10->variant) {
  FUNC_3(&VAR_9->dev, "Missing sun4i-a10-lradc-keys variant\n");
  return -VAR_1;
 }

 VAR_10->vref_supply = FUNC_7(VAR_11, "vref");
 if (FUNC_0(VAR_10->vref_supply))
  return FUNC_1(VAR_10->vref_supply);

 VAR_10->dev = VAR_11;
 VAR_10->input = FUNC_4(VAR_11);
 if (!VAR_10->input)
  return -VAR_2;

 VAR_10->input->name = VAR_9->name;
 VAR_10->input->phys = "sun4i_lradc/input0";
 VAR_10->input->open = VAR_8;
 VAR_10->input->close = VAR_6;
 VAR_10->input->id.bustype = VAR_0;
 VAR_10->input->id.vendor = 0x0001;
 VAR_10->input->id.product = 0x0001;
 VAR_10->input->id.version = 0x0100;

 FUNC_2(VAR_3, VAR_10->input->evbit);
 for (VAR_12 = 0; VAR_12 < VAR_10->chan0_map_count; VAR_12++)
  FUNC_2(VAR_10->chan0_map[VAR_12].keycode, VAR_10->input->keybit);

 FUNC_10(VAR_10->input, VAR_10);

 VAR_10->base = FUNC_5(VAR_11,
         FUNC_13(VAR_9, VAR_5, 0));
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_13 = FUNC_8(VAR_11, FUNC_12(VAR_9, 0),
     VAR_7, 0,
     "sun4i-a10-lradc-keys", VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_9(VAR_10->input);
 if (VAR_13)
  return VAR_13;

 return 0;
}
