
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct pxa930_rotary_platform_data {scalar_t__ rel_code; scalar_t__ down_key; scalar_t__ up_key; } ;
struct pxa930_rotary {int * mmio_base; struct input_dev* input_dev; struct pxa930_rotary_platform_data* pdata; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {int evbit; int relbit; int keybit; TYPE_2__ dev; int close; int open; TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,char*) ;
 struct pxa930_rotary_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int,struct pxa930_rotary*) ;
 struct input_dev* FUNC_4 () ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,struct pxa930_rotary*) ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct pxa930_rotary*) ;
 struct pxa930_rotary* FUNC_11 (int,int ) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct pxa930_rotary*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int,int ,int ,char*,struct pxa930_rotary*) ;
 int FUNC_16 (struct resource*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_11)
{
 struct pxa930_rotary_platform_data *VAR_12 =
   FUNC_2(&VAR_11->dev);
 struct pxa930_rotary *VAR_13;
 struct input_dev *VAR_14;
 struct resource *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_16 = FUNC_12(VAR_11, 0);
 if (VAR_16 < 0)
  return -VAR_3;

 VAR_15 = FUNC_13(VAR_11, VAR_7, 0);
 if (!VAR_15) {
  FUNC_1(&VAR_11->dev, "no I/O memory defined\n");
  return -VAR_3;
 }

 if (!VAR_12) {
  FUNC_1(&VAR_11->dev, "no platform data defined\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_11(sizeof(struct pxa930_rotary), VAR_6);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->mmio_base = FUNC_8(VAR_15->start, FUNC_16(VAR_15));
 if (VAR_13->mmio_base == ((void*)0)) {
  FUNC_1(&VAR_11->dev, "failed to remap IO memory\n");
  VAR_17 = -VAR_3;
  goto failed_free;
 }

 VAR_13->pdata = VAR_12;
 FUNC_14(VAR_11, VAR_13);


 VAR_14 = FUNC_4();
 if (!VAR_14) {
  FUNC_1(&VAR_11->dev, "failed to allocate input device\n");
  VAR_17 = -VAR_2;
  goto failed_free_io;
 }

 VAR_14->name = VAR_11->name;
 VAR_14->id.bustype = VAR_0;
 VAR_14->open = VAR_9;
 VAR_14->close = VAR_8;
 VAR_14->dev.parent = &VAR_11->dev;

 if (VAR_12->up_key && VAR_12->down_key) {
  FUNC_0(VAR_12->up_key, VAR_14->keybit);
  FUNC_0(VAR_12->down_key, VAR_14->keybit);
  FUNC_0(VAR_4, VAR_14->evbit);
 } else {
  FUNC_0(VAR_12->rel_code, VAR_14->relbit);
  FUNC_0(VAR_5, VAR_14->evbit);
 }

 VAR_13->input_dev = VAR_14;
 FUNC_7(VAR_14, VAR_13);

 VAR_17 = FUNC_15(VAR_16, VAR_10, 0,
   "enhanced rotary", VAR_13);
 if (VAR_17) {
  FUNC_1(&VAR_11->dev, "failed to request IRQ\n");
  goto failed_free_input;
 }

 VAR_17 = FUNC_6(VAR_14);
 if (VAR_17) {
  FUNC_1(&VAR_11->dev, "failed to register input device\n");
  goto failed_free_irq;
 }

 return 0;

failed_free_irq:
 FUNC_3(VAR_16, VAR_13);
failed_free_input:
 FUNC_5(VAR_14);
failed_free_io:
 FUNC_9(VAR_13->mmio_base);
failed_free:
 FUNC_10(VAR_13);
 return VAR_17;
}
