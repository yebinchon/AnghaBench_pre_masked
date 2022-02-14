
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_keysc_info {size_t mode; int scan_timing; int * keycodes; } ;
struct sh_keysc_priv {int * iomem_base; struct input_dev* input; struct sh_keysc_info pdata; } ;
struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_5__ {int vendor; int product; int version; int bustype; } ;
struct TYPE_4__ {int * parent; } ;
struct input_dev {char* phys; int keycodesize; int keybit; int keycodemax; int * keycode; TYPE_2__ id; TYPE_1__ dev; int name; int * evbit; } ;
struct TYPE_6__ {int kymd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
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
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int,struct platform_device*) ;
 struct input_dev* FUNC_9 () ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*) ;
 int * FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sh_keysc_priv*) ;
 struct sh_keysc_priv* FUNC_15 (int,int ) ;
 int FUNC_16 (struct sh_keysc_info*,int ,int) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct sh_keysc_priv*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int,int *,int ,int ,int ,struct platform_device*) ;
 int FUNC_23 (struct resource*) ;
 int VAR_11 ;
 int FUNC_24 (struct sh_keysc_priv*,int ) ;
 TYPE_3__* VAR_12 ;
 int FUNC_25 (struct sh_keysc_priv*,int ,int) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_13)
{
 struct sh_keysc_priv *VAR_14;
 struct sh_keysc_info *VAR_15;
 struct resource *VAR_16;
 struct input_dev *VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;

 if (!FUNC_5(&VAR_13->dev)) {
  FUNC_4(&VAR_13->dev, "no platform data defined\n");
  VAR_20 = -VAR_1;
  goto err0;
 }

 VAR_20 = -VAR_3;
 VAR_16 = FUNC_18(VAR_13, VAR_6, 0);
 if (VAR_16 == ((void*)0)) {
  FUNC_4(&VAR_13->dev, "failed to get I/O memory\n");
  goto err0;
 }

 VAR_19 = FUNC_17(VAR_13, 0);
 if (VAR_19 < 0)
  goto err0;

 VAR_14 = FUNC_15(sizeof(*VAR_14), VAR_5);
 if (VAR_14 == ((void*)0)) {
  FUNC_4(&VAR_13->dev, "failed to allocate driver data\n");
  VAR_20 = -VAR_2;
  goto err0;
 }

 FUNC_19(VAR_13, VAR_14);
 FUNC_16(&VAR_14->pdata, FUNC_5(&VAR_13->dev), sizeof(VAR_14->pdata));
 VAR_15 = &VAR_14->pdata;

 VAR_14->iomem_base = FUNC_12(VAR_16->start, FUNC_23(VAR_16));
 if (VAR_14->iomem_base == ((void*)0)) {
  FUNC_4(&VAR_13->dev, "failed to remap I/O memory\n");
  VAR_20 = -VAR_3;
  goto err1;
 }

 VAR_14->input = FUNC_9();
 if (!VAR_14->input) {
  FUNC_4(&VAR_13->dev, "failed to allocate input device\n");
  VAR_20 = -VAR_2;
  goto err2;
 }

 VAR_17 = VAR_14->input;
 VAR_17->evbit[0] = FUNC_1(VAR_4);

 VAR_17->name = VAR_13->name;
 VAR_17->phys = "sh-keysc-keys/input0";
 VAR_17->dev.parent = &VAR_13->dev;

 VAR_17->id.bustype = VAR_0;
 VAR_17->id.vendor = 0x0001;
 VAR_17->id.product = 0x0001;
 VAR_17->id.version = 0x0100;

 VAR_17->keycode = VAR_15->keycodes;
 VAR_17->keycodesize = sizeof(VAR_15->keycodes[0]);
 VAR_17->keycodemax = FUNC_0(VAR_15->keycodes);

 VAR_20 = FUNC_22(VAR_19, ((void*)0), VAR_11, VAR_7,
         FUNC_6(&VAR_13->dev), VAR_13);
 if (VAR_20) {
  FUNC_4(&VAR_13->dev, "failed to request IRQ\n");
  goto err3;
 }

 for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++)
  FUNC_3(VAR_15->keycodes[VAR_18], VAR_17->keybit);
 FUNC_2(VAR_8, VAR_17->keybit);

 VAR_20 = FUNC_11(VAR_17);
 if (VAR_20) {
  FUNC_4(&VAR_13->dev, "failed to register input device\n");
  goto err4;
 }

 FUNC_20(&VAR_13->dev);
 FUNC_21(&VAR_13->dev);

 FUNC_25(VAR_14, VAR_9, (VAR_12[VAR_15->mode].kymd << 8) |
         VAR_15->scan_timing);
 FUNC_24(VAR_14, 0);

 FUNC_7(&VAR_13->dev, 1);

 return 0;

 err4:
 FUNC_8(VAR_19, VAR_13);
 err3:
 FUNC_10(VAR_17);
 err2:
 FUNC_13(VAR_14->iomem_base);
 err1:
 FUNC_14(VAR_14);
 err0:
 return VAR_20;
}
