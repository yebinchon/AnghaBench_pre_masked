
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct lpc32xx_kscan_drv {int matrix_sz; int row_shift; int deb_clks; int scan_delay; struct input_dev* input; int clk; int kscan_base; void* keymap; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int vendor; int product; int version; } ;
struct input_dev {char* phys; TYPE_2__ dev; int close; int open; TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int *) ;
 struct input_dev* FUNC_11 (int *) ;
 int FUNC_12 (int *,struct resource*) ;
 void* FUNC_13 (int *,size_t,int ) ;
 int FUNC_14 (int *,int,int ,int ,int ,struct lpc32xx_kscan_drv*) ;
 int FUNC_15 (struct input_dev*) ;
 int FUNC_16 (struct input_dev*,int ,int ) ;
 int FUNC_17 (struct input_dev*,struct lpc32xx_kscan_drv*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (int *,struct lpc32xx_kscan_drv*) ;
 int FUNC_19 (int *,int *,int,int,void*,struct input_dev*) ;
 int FUNC_20 (struct platform_device*,int ) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct platform_device*,struct lpc32xx_kscan_drv*) ;
 int FUNC_23 (int,int ) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_10)
{
 struct lpc32xx_kscan_drv *VAR_11;
 struct input_dev *VAR_12;
 struct resource *VAR_13;
 size_t VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_13 = FUNC_21(VAR_10, VAR_4, 0);
 if (!VAR_13) {
  FUNC_9(&VAR_10->dev, "failed to get platform I/O memory\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_20(VAR_10, 0);
 if (VAR_16 < 0)
  return -VAR_0;

 VAR_11 = FUNC_13(&VAR_10->dev, sizeof(*VAR_11),
    VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_15 = FUNC_18(&VAR_10->dev, VAR_11);
 if (VAR_15) {
  FUNC_9(&VAR_10->dev, "failed to parse device tree\n");
  return VAR_15;
 }

 VAR_14 = sizeof(VAR_11->keymap[0]) *
    (VAR_11->matrix_sz << VAR_11->row_shift);
 VAR_11->keymap = FUNC_13(&VAR_10->dev, VAR_14, VAR_3);
 if (!VAR_11->keymap)
  return -VAR_1;

 VAR_11->input = VAR_12 = FUNC_11(&VAR_10->dev);
 if (!VAR_12) {
  FUNC_9(&VAR_10->dev, "failed to allocate input device\n");
  return -VAR_1;
 }


 VAR_12->name = VAR_10->name;
 VAR_12->phys = "lpc32xx/input0";
 VAR_12->id.vendor = 0x0001;
 VAR_12->id.product = 0x0001;
 VAR_12->id.version = 0x0100;
 VAR_12->open = VAR_9;
 VAR_12->close = VAR_7;
 VAR_12->dev.parent = &VAR_10->dev;

 FUNC_16(VAR_12, VAR_2, VAR_6);

 VAR_15 = FUNC_19(((void*)0), ((void*)0),
        VAR_11->matrix_sz,
        VAR_11->matrix_sz,
        VAR_11->keymap, VAR_11->input);
 if (VAR_15) {
  FUNC_9(&VAR_10->dev, "failed to build keymap\n");
  return VAR_15;
 }

 FUNC_17(VAR_11->input, VAR_11);

 VAR_11->kscan_base = FUNC_12(&VAR_10->dev, VAR_13);
 if (FUNC_0(VAR_11->kscan_base))
  return FUNC_6(VAR_11->kscan_base);


 VAR_11->clk = FUNC_10(&VAR_10->dev, ((void*)0));
 if (FUNC_0(VAR_11->clk)) {
  FUNC_9(&VAR_10->dev, "failed to get clock\n");
  return FUNC_6(VAR_11->clk);
 }


 VAR_15 = FUNC_8(VAR_11->clk);
 if (VAR_15)
  return VAR_15;

 FUNC_23(VAR_11->deb_clks, FUNC_1(VAR_11->kscan_base));
 FUNC_23(VAR_11->scan_delay, FUNC_5(VAR_11->kscan_base));
 FUNC_23(VAR_5,
        FUNC_2(VAR_11->kscan_base));
 FUNC_23(VAR_11->matrix_sz,
        FUNC_4(VAR_11->kscan_base));
 FUNC_23(1, FUNC_3(VAR_11->kscan_base));
 FUNC_7(VAR_11->clk);

 VAR_15 = FUNC_14(&VAR_10->dev, VAR_16, VAR_8, 0,
     VAR_10->name, VAR_11);
 if (VAR_15) {
  FUNC_9(&VAR_10->dev, "failed to request irq\n");
  return VAR_15;
 }

 VAR_15 = FUNC_15(VAR_11->input);
 if (VAR_15) {
  FUNC_9(&VAR_10->dev, "failed to register input device\n");
  return VAR_15;
 }

 FUNC_22(VAR_10, VAR_11);

 return 0;
}
