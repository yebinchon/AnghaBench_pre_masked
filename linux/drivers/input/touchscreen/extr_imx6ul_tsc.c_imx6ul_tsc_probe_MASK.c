
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_10__ {int bustype; } ;
struct input_dev {char* name; int close; int open; TYPE_1__ id; } ;
struct imx6ul_tsc {int measure_delay_time; int pre_charge_time; int average_enable; struct input_dev* input; int average_select; TYPE_2__* dev; void* adc_clk; void* tsc_clk; void* adc_regs; void* tsc_regs; void* xnur_gpio; int completion; } ;
struct device_node {int dummy; } ;


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
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*,char*,int,...) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (TYPE_2__*,char*) ;
 void* FUNC_5 (TYPE_2__*,char*,int ) ;
 struct input_dev* FUNC_6 (TYPE_2__*) ;
 struct imx6ul_tsc* FUNC_7 (TYPE_2__*,int,int ) ;
 void* FUNC_8 (struct platform_device*,int) ;
 int FUNC_9 (TYPE_2__*,int,int ,int ,int ,struct imx6ul_tsc*) ;
 int FUNC_10 (TYPE_2__*,int,int *,int ,int ,int ,struct imx6ul_tsc*) ;
 int FUNC_11 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct input_dev*) ;
 int FUNC_14 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_15 (struct input_dev*,int ,int ) ;
 int FUNC_16 (struct input_dev*,struct imx6ul_tsc*) ;
 int FUNC_17 (struct device_node*,char*,int*) ;
 int FUNC_18 (struct platform_device*,int) ;
 int FUNC_19 (struct platform_device*,struct imx6ul_tsc*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_14)
{
 struct device_node *VAR_15 = VAR_14->dev.of_node;
 struct imx6ul_tsc *VAR_16;
 struct input_dev *VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 u32 VAR_21;

 VAR_16 = FUNC_7(&VAR_14->dev, sizeof(*VAR_16), VAR_7);
 if (!VAR_16)
  return -VAR_5;

 VAR_17 = FUNC_6(&VAR_14->dev);
 if (!VAR_17)
  return -VAR_5;

 VAR_17->name = "iMX6UL Touchscreen Controller";
 VAR_17->id.bustype = VAR_3;

 VAR_17->open = VAR_12;
 VAR_17->close = VAR_11;

 FUNC_15(VAR_17, VAR_6, VAR_2);
 FUNC_14(VAR_17, VAR_0, 0, 0xFFF, 0, 0);
 FUNC_14(VAR_17, VAR_1, 0, 0xFFF, 0, 0);

 FUNC_16(VAR_17, VAR_16);

 VAR_16->dev = &VAR_14->dev;
 VAR_16->input = VAR_17;
 FUNC_12(&VAR_16->completion);

 VAR_16->xnur_gpio = FUNC_5(&VAR_14->dev, "xnur", VAR_8);
 if (FUNC_0(VAR_16->xnur_gpio)) {
  VAR_18 = FUNC_1(VAR_16->xnur_gpio);
  FUNC_2(&VAR_14->dev,
   "failed to request GPIO tsc_X- (xnur): %d\n", VAR_18);
  return VAR_18;
 }

 VAR_16->tsc_regs = FUNC_8(VAR_14, 0);
 if (FUNC_0(VAR_16->tsc_regs)) {
  VAR_18 = FUNC_1(VAR_16->tsc_regs);
  FUNC_2(&VAR_14->dev, "failed to remap tsc memory: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_16->adc_regs = FUNC_8(VAR_14, 1);
 if (FUNC_0(VAR_16->adc_regs)) {
  VAR_18 = FUNC_1(VAR_16->adc_regs);
  FUNC_2(&VAR_14->dev, "failed to remap adc memory: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_16->tsc_clk = FUNC_4(&VAR_14->dev, "tsc");
 if (FUNC_0(VAR_16->tsc_clk)) {
  VAR_18 = FUNC_1(VAR_16->tsc_clk);
  FUNC_2(&VAR_14->dev, "failed getting tsc clock: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_16->adc_clk = FUNC_4(&VAR_14->dev, "adc");
 if (FUNC_0(VAR_16->adc_clk)) {
  VAR_18 = FUNC_1(VAR_16->adc_clk);
  FUNC_2(&VAR_14->dev, "failed getting adc clock: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_19 = FUNC_18(VAR_14, 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_20 = FUNC_18(VAR_14, 1);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_18 = FUNC_10(VAR_16->dev, VAR_19,
     ((void*)0), VAR_13, VAR_9,
     FUNC_3(&VAR_14->dev), VAR_16);
 if (VAR_18) {
  FUNC_2(&VAR_14->dev,
   "failed requesting tsc irq %d: %d\n",
   VAR_19, VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_9(VAR_16->dev, VAR_20, VAR_10, 0,
    FUNC_3(&VAR_14->dev), VAR_16);
 if (VAR_18) {
  FUNC_2(&VAR_14->dev,
   "failed requesting adc irq %d: %d\n",
   VAR_20, VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_17(VAR_15, "measure-delay-time",
       &VAR_16->measure_delay_time);
 if (VAR_18)
  VAR_16->measure_delay_time = 0xffff;

 VAR_18 = FUNC_17(VAR_15, "pre-charge-time",
       &VAR_16->pre_charge_time);
 if (VAR_18)
  VAR_16->pre_charge_time = 0xfff;

 VAR_18 = FUNC_17(VAR_15, "touchscreen-average-samples",
       &VAR_21);
 if (VAR_18)
  VAR_21 = 1;

 switch (VAR_21) {
 case 1:
  VAR_16->average_enable = 0;
  VAR_16->average_select = 0;
  break;
 case 4:
 case 8:
 case 16:
 case 32:
  VAR_16->average_enable = 1;
  VAR_16->average_select = FUNC_11(VAR_21) - 2;
  break;
 default:
  FUNC_2(&VAR_14->dev,
   "touchscreen-average-samples (%u) must be 1, 4, 8, 16 or 32\n",
   VAR_21);
  return -VAR_4;
 }

 VAR_18 = FUNC_13(VAR_16->input);
 if (VAR_18) {
  FUNC_2(&VAR_14->dev,
   "failed to register input device: %d\n", VAR_18);
  return VAR_18;
 }

 FUNC_19(VAR_14, VAR_16);
 return 0;
}
