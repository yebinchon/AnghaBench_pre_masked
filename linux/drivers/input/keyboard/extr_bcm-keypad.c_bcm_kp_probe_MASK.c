
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct TYPE_11__ {int vendor; int product; int version; int bustype; } ;
struct TYPE_10__ {TYPE_3__* parent; } ;
struct input_dev {char* phys; TYPE_2__ id; int close; int open; TYPE_1__ dev; int name; int evbit; } ;
struct bcm_kp {scalar_t__ irq; int * clk; int * base; int n_cols; int n_rows; struct input_dev* input_dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct bcm_kp*) ;
 int VAR_14 ;
 int FUNC_4 (struct bcm_kp*) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,long) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int * FUNC_10 (TYPE_3__*,char*) ;
 struct input_dev* FUNC_11 (TYPE_3__*) ;
 int * FUNC_12 (TYPE_3__*,struct resource*) ;
 struct bcm_kp* FUNC_13 (TYPE_3__*,int,int ) ;
 int FUNC_14 (TYPE_3__*,scalar_t__,int *,int ,int ,int ,struct bcm_kp*) ;
 int FUNC_15 (struct input_dev*) ;
 int FUNC_16 (struct input_dev*,struct bcm_kp*) ;
 int FUNC_17 (int *,int *,int ,int ,int *,struct input_dev*) ;
 scalar_t__ FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,char*,unsigned int*) ;
 scalar_t__ FUNC_20 (struct platform_device*,int ) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_15)
{
 struct bcm_kp *VAR_16;
 struct input_dev *VAR_17;
 struct resource *VAR_18;
 int VAR_19;

 VAR_16 = FUNC_13(&VAR_15->dev, sizeof(*VAR_16), VAR_9);
 if (!VAR_16)
  return -VAR_5;

 VAR_17 = FUNC_11(&VAR_15->dev);
 if (!VAR_17) {
  FUNC_9(&VAR_15->dev, "failed to allocate the input device\n");
  return -VAR_5;
 }

 FUNC_2(VAR_7, VAR_17->evbit);


 if (FUNC_18(VAR_15->dev.of_node, "autorepeat"))
  FUNC_2(VAR_8, VAR_17->evbit);

 VAR_17->name = VAR_15->name;
 VAR_17->phys = "keypad/input0";
 VAR_17->dev.parent = &VAR_15->dev;
 VAR_17->open = VAR_14;
 VAR_17->close = VAR_12;

 VAR_17->id.bustype = VAR_0;
 VAR_17->id.vendor = 0x0001;
 VAR_17->id.product = 0x0001;
 VAR_17->id.version = 0x0100;

 FUNC_16(VAR_17, VAR_16);

 VAR_16->input_dev = VAR_17;

 VAR_19 = FUNC_3(VAR_16);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_17(((void*)0), ((void*)0),
        VAR_16->n_rows, VAR_16->n_cols,
        ((void*)0), VAR_17);
 if (VAR_19) {
  FUNC_9(&VAR_15->dev, "failed to build keymap\n");
  return VAR_19;
 }


 VAR_18 = FUNC_21(VAR_15, VAR_10, 0);
 if (!VAR_18) {
  FUNC_9(&VAR_15->dev, "Missing keypad base address resource\n");
  return -VAR_3;
 }

 VAR_16->base = FUNC_12(&VAR_15->dev, VAR_18);
 if (FUNC_0(VAR_16->base))
  return FUNC_1(VAR_16->base);


 VAR_16->clk = FUNC_10(&VAR_15->dev, "peri_clk");
 if (FUNC_0(VAR_16->clk)) {
  VAR_19 = FUNC_1(VAR_16->clk);
  if (VAR_19 != -VAR_4) {
   if (VAR_19 != -VAR_6)
    FUNC_9(&VAR_15->dev, "Failed to get clock\n");
   return VAR_19;
  }
  FUNC_8(&VAR_15->dev,
   "No clock specified. Assuming it's enabled\n");
  VAR_16->clk = ((void*)0);
 } else {
  unsigned int VAR_20;
  long VAR_21;

  VAR_19 = FUNC_19(VAR_15->dev.of_node,
          "clock-frequency", &VAR_20);
  if (VAR_19 < 0)
   VAR_20 = VAR_1;

  VAR_21 = FUNC_6(VAR_16->clk, VAR_20);
  if (VAR_21 <= 0)
   return -VAR_2;

  VAR_19 = FUNC_7(VAR_16->clk, VAR_21);
  if (VAR_19)
   return VAR_19;

  VAR_19 = FUNC_5(VAR_16->clk);
  if (VAR_19)
   return VAR_19;
 }


 FUNC_4(VAR_16);

 VAR_16->irq = FUNC_20(VAR_15, 0);
 if (VAR_16->irq < 0)
  return -VAR_2;

 VAR_19 = FUNC_14(&VAR_15->dev, VAR_16->irq,
       ((void*)0), VAR_13,
       VAR_11, VAR_15->name, VAR_16);
 if (VAR_19) {
  FUNC_9(&VAR_15->dev, "failed to request IRQ\n");
  return VAR_19;
 }

 VAR_19 = FUNC_15(VAR_17);
 if (VAR_19) {
  FUNC_9(&VAR_15->dev, "failed to register input device\n");
  return VAR_19;
 }

 return 0;
}
