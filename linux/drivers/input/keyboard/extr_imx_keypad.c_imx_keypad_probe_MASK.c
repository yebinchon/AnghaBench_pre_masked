
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct matrix_keymap_data {int dummy; } ;
struct TYPE_12__ {TYPE_3__* parent; } ;
struct TYPE_11__ {int bustype; } ;
struct input_dev {int evbit; int close; int open; TYPE_2__ dev; TYPE_1__ id; int name; } ;
struct imx_keypad {int irq; scalar_t__* keycodes; int rows_en_mask; int cols_en_mask; int clk; int mmio_base; int check_matrix_timer; scalar_t__ stable_count; struct input_dev* input_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,char*,int) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 struct matrix_keymap_data* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 struct input_dev* FUNC_11 (TYPE_3__*) ;
 struct imx_keypad* FUNC_12 (TYPE_3__*,int,int ) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (TYPE_3__*,int,int ,int ,int ,struct imx_keypad*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (struct imx_keypad*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (struct input_dev*) ;
 int FUNC_17 (struct input_dev*,int ,int ) ;
 int FUNC_18 (struct input_dev*,struct imx_keypad*) ;
 int FUNC_19 (struct matrix_keymap_data const*,int *,int,int,scalar_t__*,struct input_dev*) ;
 int FUNC_20 (struct platform_device*,int ) ;
 int FUNC_21 (struct platform_device*,struct imx_keypad*) ;
 int FUNC_22 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_15)
{
 const struct matrix_keymap_data *VAR_16 =
   FUNC_8(&VAR_15->dev);
 struct imx_keypad *VAR_17;
 struct input_dev *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 if (!VAR_16 && !VAR_15->dev.of_node) {
  FUNC_7(&VAR_15->dev, "no keymap defined\n");
  return -VAR_1;
 }

 VAR_19 = FUNC_20(VAR_15, 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_18 = FUNC_11(&VAR_15->dev);
 if (!VAR_18) {
  FUNC_7(&VAR_15->dev, "failed to allocate the input device\n");
  return -VAR_2;
 }

 VAR_17 = FUNC_12(&VAR_15->dev, sizeof(*VAR_17), VAR_5);
 if (!VAR_17) {
  FUNC_7(&VAR_15->dev, "not enough memory for driver data\n");
  return -VAR_2;
 }

 VAR_17->input_dev = VAR_18;
 VAR_17->irq = VAR_19;
 VAR_17->stable_count = 0;

 FUNC_22(&VAR_17->check_matrix_timer,
      VAR_11, 0);

 VAR_17->mmio_base = FUNC_13(VAR_15, 0);
 if (FUNC_0(VAR_17->mmio_base))
  return FUNC_2(VAR_17->mmio_base);

 VAR_17->clk = FUNC_10(&VAR_15->dev, ((void*)0));
 if (FUNC_0(VAR_17->clk)) {
  FUNC_7(&VAR_15->dev, "failed to get keypad clock\n");
  return FUNC_2(VAR_17->clk);
 }


 VAR_18->name = VAR_15->name;
 VAR_18->id.bustype = VAR_0;
 VAR_18->dev.parent = &VAR_15->dev;
 VAR_18->open = VAR_14;
 VAR_18->close = VAR_12;

 VAR_20 = FUNC_19(VAR_16, ((void*)0),
        VAR_9,
        VAR_8,
        VAR_17->keycodes, VAR_18);
 if (VAR_20) {
  FUNC_7(&VAR_15->dev, "failed to build keymap\n");
  return VAR_20;
 }


 for (VAR_22 = 0; VAR_22 < VAR_9; VAR_22++) {
  for (VAR_23 = 0; VAR_23 < VAR_8; VAR_23++) {
   VAR_21 = FUNC_1(VAR_22, VAR_23, VAR_7);
   if (VAR_17->keycodes[VAR_21] != VAR_6) {
    VAR_17->rows_en_mask |= 1 << VAR_22;
    VAR_17->cols_en_mask |= 1 << VAR_23;
   }
  }
 }
 FUNC_6(&VAR_15->dev, "enabled rows mask: %x\n", VAR_17->rows_en_mask);
 FUNC_6(&VAR_15->dev, "enabled cols mask: %x\n", VAR_17->cols_en_mask);

 FUNC_3(VAR_4, VAR_18->evbit);
 FUNC_17(VAR_18, VAR_3, VAR_10);
 FUNC_18(VAR_18, VAR_17);


 VAR_20 = FUNC_5(VAR_17->clk);
 if (VAR_20)
  return VAR_20;
 FUNC_15(VAR_17);
 FUNC_4(VAR_17->clk);

 VAR_20 = FUNC_14(&VAR_15->dev, VAR_19, VAR_13, 0,
       VAR_15->name, VAR_17);
 if (VAR_20) {
  FUNC_7(&VAR_15->dev, "failed to request IRQ\n");
  return VAR_20;
 }


 VAR_20 = FUNC_16(VAR_18);
 if (VAR_20) {
  FUNC_7(&VAR_15->dev, "failed to register input device\n");
  return VAR_20;
 }

 FUNC_21(VAR_15, VAR_17);
 FUNC_9(&VAR_15->dev, 1);

 return 0;
}
