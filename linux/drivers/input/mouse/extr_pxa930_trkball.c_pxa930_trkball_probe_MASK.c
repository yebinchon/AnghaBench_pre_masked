
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct pxa930_trkball {int mmio_base; struct input_dev* input; int pdata; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {TYPE_2__ dev; int close; int open; TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct pxa930_trkball*) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (struct input_dev*,struct pxa930_trkball*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct pxa930_trkball*) ;
 struct pxa930_trkball* FUNC_11 (int,int ) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct pxa930_trkball*) ;
 int VAR_9 ;
 int FUNC_15 (struct pxa930_trkball*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (int,int ,int ,int ,struct pxa930_trkball*) ;
 int FUNC_17 (struct resource*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_12)
{
 struct pxa930_trkball *VAR_13;
 struct input_dev *VAR_14;
 struct resource *VAR_15;
 int VAR_16, VAR_17;

 VAR_16 = FUNC_12(VAR_12, 0);
 if (VAR_16 < 0)
  return -VAR_3;

 VAR_15 = FUNC_13(VAR_12, VAR_6, 0);
 if (!VAR_15) {
  FUNC_0(&VAR_12->dev, "failed to get register memory\n");
  return -VAR_3;
 }

 VAR_13 = FUNC_11(sizeof(struct pxa930_trkball), VAR_5);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->pdata = FUNC_1(&VAR_12->dev);
 if (!VAR_13->pdata) {
  FUNC_0(&VAR_12->dev, "no platform data defined\n");
  VAR_17 = -VAR_1;
  goto failed;
 }

 VAR_13->mmio_base = FUNC_8(VAR_15->start, FUNC_17(VAR_15));
 if (!VAR_13->mmio_base) {
  FUNC_0(&VAR_12->dev, "failed to ioremap registers\n");
  VAR_17 = -VAR_3;
  goto failed;
 }


 FUNC_15(VAR_13);

 VAR_17 = FUNC_16(VAR_16, VAR_10, 0,
       VAR_12->name, VAR_13);
 if (VAR_17) {
  FUNC_0(&VAR_12->dev, "failed to request irq: %d\n", VAR_17);
  goto failed_free_io;
 }

 FUNC_14(VAR_12, VAR_13);

 VAR_14 = FUNC_3();
 if (!VAR_14) {
  FUNC_0(&VAR_12->dev, "failed to allocate input device\n");
  VAR_17 = -VAR_2;
  goto failed_free_irq;
 }

 VAR_14->name = VAR_12->name;
 VAR_14->id.bustype = VAR_0;
 VAR_14->open = VAR_11;
 VAR_14->close = VAR_9;
 VAR_14->dev.parent = &VAR_12->dev;
 FUNC_7(VAR_14, VAR_13);

 VAR_13->input = VAR_14;

 FUNC_6(VAR_14, VAR_4, VAR_7);
 FUNC_6(VAR_14, VAR_4, VAR_8);

 VAR_17 = FUNC_5(VAR_14);
 if (VAR_17) {
  FUNC_0(&VAR_12->dev, "unable to register input device\n");
  goto failed_free_input;
 }

 return 0;

failed_free_input:
 FUNC_4(VAR_14);
failed_free_irq:
 FUNC_2(VAR_16, VAR_13);
failed_free_io:
 FUNC_9(VAR_13->mmio_base);
failed:
 FUNC_10(VAR_13);
 return VAR_17;
}
