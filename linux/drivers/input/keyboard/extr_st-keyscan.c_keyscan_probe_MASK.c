
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct st_keyscan {scalar_t__ irq; int clk; int base; int n_cols; int n_rows; struct input_dev* input_dev; } ;
struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct TYPE_11__ {int bustype; } ;
struct TYPE_10__ {TYPE_3__* parent; } ;
struct input_dev {char* phys; TYPE_2__ id; int close; int open; TYPE_1__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 struct input_dev* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,struct resource*) ;
 struct st_keyscan* FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,int ,int ,int ,struct st_keyscan*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,struct st_keyscan*) ;
 int FUNC_12 (struct st_keyscan*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (struct st_keyscan*) ;
 int FUNC_14 (int *,int *,int ,int ,int *,struct input_dev*) ;
 scalar_t__ FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct st_keyscan*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 struct st_keyscan *VAR_9;
 struct input_dev *VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 if (!VAR_8->dev.of_node) {
  FUNC_3(&VAR_8->dev, "no DT data present\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_8(&VAR_8->dev, sizeof(*VAR_9),
       VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_6(&VAR_8->dev);
 if (!VAR_10) {
  FUNC_3(&VAR_8->dev, "failed to allocate the input device\n");
  return -VAR_2;
 }

 VAR_10->name = VAR_8->name;
 VAR_10->phys = "keyscan-keys/input0";
 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->open = VAR_7;
 VAR_10->close = VAR_5;

 VAR_10->id.bustype = VAR_0;

 VAR_9->input_dev = VAR_10;

 VAR_12 = FUNC_12(VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_14(((void*)0), ((void*)0),
        VAR_9->n_rows,
        VAR_9->n_cols,
        ((void*)0), VAR_10);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "failed to build keymap\n");
  return VAR_12;
 }

 FUNC_11(VAR_10, VAR_9);

 VAR_11 = FUNC_16(VAR_8, VAR_4, 0);
 VAR_9->base = FUNC_7(&VAR_8->dev, VAR_11);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_9->clk = FUNC_5(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_9->clk)) {
  FUNC_3(&VAR_8->dev, "cannot get clock\n");
  return FUNC_1(VAR_9->clk);
 }

 VAR_12 = FUNC_2(VAR_9->clk);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "failed to enable clock\n");
  return VAR_12;
 }

 FUNC_13(VAR_9);

 VAR_9->irq = FUNC_15(VAR_8, 0);
 if (VAR_9->irq < 0)
  return -VAR_1;

 VAR_12 = FUNC_9(&VAR_8->dev, VAR_9->irq, VAR_6, 0,
     VAR_8->name, VAR_9);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "failed to request IRQ\n");
  return VAR_12;
 }

 VAR_12 = FUNC_10(VAR_10);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "failed to register input device\n");
  return VAR_12;
 }

 FUNC_17(VAR_8, VAR_9);

 FUNC_4(&VAR_8->dev, 1);

 return 0;
}
