
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tegra_kbc {int max_keys; int num_rows_and_columns; scalar_t__ irq; int wakeup; TYPE_4__* idev; int keycode; TYPE_3__* hw_support; scalar_t__ keymap_data; scalar_t__ use_fn_map; scalar_t__ repoll_dly; scalar_t__ repeat_cnt; int debounce_cnt; int rst; int clk; int mmio; int timer; int lock; int * dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct of_device_id {TYPE_3__* data; } ;
struct TYPE_10__ {int * parent; } ;
struct TYPE_9__ {int bustype; } ;
struct TYPE_12__ {int evbit; int close; int open; TYPE_2__ dev; TYPE_1__ id; int name; } ;
struct TYPE_11__ {int max_rows; int max_columns; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 TYPE_4__* FUNC_7 (int *) ;
 int FUNC_8 (int *,struct resource*) ;
 struct tegra_kbc* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,scalar_t__,int ,int ,int ,struct tegra_kbc*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*,int ,int ) ;
 int FUNC_15 (TYPE_4__*,struct tegra_kbc*) ;
 int FUNC_16 (scalar_t__,int *,unsigned int,int,int ,TYPE_4__*) ;
 unsigned int FUNC_17 (int ,int ) ;
 struct of_device_id* FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct tegra_kbc*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct tegra_kbc*,int*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_24 (struct tegra_kbc*) ;
 int FUNC_25 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_19)
{
 struct tegra_kbc *VAR_20;
 struct resource *VAR_21;
 int VAR_22;
 int VAR_23 = 0;
 unsigned int VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26;
 const struct of_device_id *VAR_27;

 VAR_27 = FUNC_18(VAR_17, &VAR_19->dev);

 VAR_20 = FUNC_9(&VAR_19->dev, sizeof(*VAR_20), VAR_6);
 if (!VAR_20) {
  FUNC_4(&VAR_19->dev, "failed to alloc memory for kbc\n");
  return -VAR_2;
 }

 VAR_20->dev = &VAR_19->dev;
 VAR_20->hw_support = VAR_27->data;
 VAR_20->max_keys = VAR_20->hw_support->max_rows *
    VAR_20->hw_support->max_columns;
 VAR_20->num_rows_and_columns = VAR_20->hw_support->max_rows +
     VAR_20->hw_support->max_columns;
 VAR_26 = VAR_20->max_keys;
 FUNC_22(&VAR_20->lock);

 VAR_22 = FUNC_24(VAR_20);
 if (VAR_22)
  return VAR_22;

 if (!FUNC_23(VAR_20, &VAR_23))
  return -VAR_1;

 VAR_20->irq = FUNC_19(VAR_19, 0);
 if (VAR_20->irq < 0)
  return -VAR_3;

 VAR_20->idev = FUNC_7(&VAR_19->dev);
 if (!VAR_20->idev) {
  FUNC_4(&VAR_19->dev, "failed to allocate input device\n");
  return -VAR_2;
 }

 FUNC_25(&VAR_20->timer, VAR_16, 0);

 VAR_21 = FUNC_20(VAR_19, VAR_7, 0);
 VAR_20->mmio = FUNC_8(&VAR_19->dev, VAR_21);
 if (FUNC_1(VAR_20->mmio))
  return FUNC_2(VAR_20->mmio);

 VAR_20->clk = FUNC_6(&VAR_19->dev, ((void*)0));
 if (FUNC_1(VAR_20->clk)) {
  FUNC_4(&VAR_19->dev, "failed to get keyboard clock\n");
  return FUNC_2(VAR_20->clk);
 }

 VAR_20->rst = FUNC_11(&VAR_19->dev, "kbc");
 if (FUNC_1(VAR_20->rst)) {
  FUNC_4(&VAR_19->dev, "failed to get keyboard reset\n");
  return FUNC_2(VAR_20->rst);
 }







 VAR_24 = FUNC_17(VAR_20->debounce_cnt, VAR_10);
 VAR_25 = (VAR_12 + VAR_24) * VAR_23;
 VAR_20->repoll_dly = VAR_11 + VAR_25 + VAR_20->repeat_cnt;
 VAR_20->repoll_dly = FUNC_0(VAR_20->repoll_dly, VAR_9);

 VAR_20->idev->name = VAR_19->name;
 VAR_20->idev->id.bustype = VAR_0;
 VAR_20->idev->dev.parent = &VAR_19->dev;
 VAR_20->idev->open = VAR_18;
 VAR_20->idev->close = VAR_14;

 if (VAR_20->keymap_data && VAR_20->use_fn_map)
  VAR_26 *= 2;

 VAR_22 = FUNC_16(VAR_20->keymap_data, ((void*)0),
      VAR_26,
      VAR_20->hw_support->max_columns,
      VAR_20->keycode, VAR_20->idev);
 if (VAR_22) {
  FUNC_4(&VAR_19->dev, "failed to setup keymap\n");
  return VAR_22;
 }

 FUNC_3(VAR_5, VAR_20->idev->evbit);
 FUNC_14(VAR_20->idev, VAR_4, VAR_13);

 FUNC_15(VAR_20->idev, VAR_20);

 VAR_22 = FUNC_10(&VAR_19->dev, VAR_20->irq, VAR_15,
          VAR_8, VAR_19->name, VAR_20);
 if (VAR_22) {
  FUNC_4(&VAR_19->dev, "failed to request keyboard IRQ\n");
  return VAR_22;
 }

 FUNC_12(VAR_20->irq);

 VAR_22 = FUNC_13(VAR_20->idev);
 if (VAR_22) {
  FUNC_4(&VAR_19->dev, "failed to register input device\n");
  return VAR_22;
 }

 FUNC_21(VAR_19, VAR_20);
 FUNC_5(&VAR_19->dev, VAR_20->wakeup);

 return 0;
}
