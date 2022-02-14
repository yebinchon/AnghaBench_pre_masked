
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct vibra_info {int vibldrv_res; int vibrdrv_res; int viblmotor_res; int vibrmotor_res; scalar_t__ irq; TYPE_5__* dev; TYPE_2__* input_dev; int play_work; TYPE_6__* supplies; int twl6040; } ;
struct TYPE_14__ {struct device* parent; } ;
struct platform_device {TYPE_5__ dev; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_15__ {char* supply; int consumer; } ;
struct TYPE_12__ {int version; } ;
struct TYPE_13__ {char* name; int ffbit; int close; TYPE_1__ id; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_5__*,char*,...) ;
 int FUNC_4 (struct device*) ;
 TYPE_2__* FUNC_5 (TYPE_5__*) ;
 struct vibra_info* FUNC_6 (TYPE_5__*,int,int ) ;
 int FUNC_7 (struct device*,int ,TYPE_6__*) ;
 int FUNC_8 (TYPE_5__*,scalar_t__,int *,int ,int ,char*,struct vibra_info*) ;
 int FUNC_9 (TYPE_2__*,int *,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,struct vibra_info*) ;
 struct device_node* FUNC_12 (int ,char*) ;
 int FUNC_13 (struct device_node*) ;
 int FUNC_14 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_15 (struct platform_device*,int ) ;
 int FUNC_16 (struct platform_device*,struct vibra_info*) ;
 int FUNC_17 (int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_9)
{
 struct device *VAR_10 = VAR_9->dev.parent;
 struct device_node *VAR_11;
 struct vibra_info *VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15;

 VAR_11 = FUNC_12(VAR_10->of_node,
       "vibra");
 if (!VAR_11) {
  FUNC_3(&VAR_9->dev, "parent of node is missing?\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_6(&VAR_9->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12) {
  FUNC_13(VAR_11);
  FUNC_3(&VAR_9->dev, "couldn't allocate memory\n");
  return -VAR_1;
 }

 VAR_12->dev = &VAR_9->dev;

 VAR_12->twl6040 = FUNC_4(VAR_9->dev.parent);

 FUNC_14(VAR_11, "ti,vibldrv-res",
        &VAR_12->vibldrv_res);
 FUNC_14(VAR_11, "ti,vibrdrv-res",
        &VAR_12->vibrdrv_res);
 FUNC_14(VAR_11, "ti,viblmotor-res",
        &VAR_12->viblmotor_res);
 FUNC_14(VAR_11, "ti,vibrmotor-res",
        &VAR_12->vibrmotor_res);
 FUNC_14(VAR_11, "ti,vddvibl-uV", &VAR_13);
 FUNC_14(VAR_11, "ti,vddvibr-uV", &VAR_14);

 FUNC_13(VAR_11);

 if ((!VAR_12->vibldrv_res && !VAR_12->viblmotor_res) ||
     (!VAR_12->vibrdrv_res && !VAR_12->vibrmotor_res)) {
  FUNC_3(VAR_12->dev, "invalid vibra driver/motor resistance\n");
  return -VAR_0;
 }

 VAR_12->irq = FUNC_15(VAR_9, 0);
 if (VAR_12->irq < 0)
  return -VAR_0;

 VAR_15 = FUNC_8(&VAR_9->dev, VAR_12->irq, ((void*)0),
       VAR_5,
       VAR_4,
       "twl6040_irq_vib", VAR_12);
 if (VAR_15) {
  FUNC_3(VAR_12->dev, "VIB IRQ request failed: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_12->supplies[0].supply = "vddvibl";
 VAR_12->supplies[1].supply = "vddvibr";




 VAR_15 = FUNC_7(VAR_10,
     FUNC_0(VAR_12->supplies),
     VAR_12->supplies);
 if (VAR_15) {
  FUNC_3(VAR_12->dev, "couldn't get regulators %d\n", VAR_15);
  return VAR_15;
 }

 if (VAR_13) {
  VAR_15 = FUNC_17(VAR_12->supplies[0].consumer,
           VAR_13, VAR_13);
  if (VAR_15) {
   FUNC_3(VAR_12->dev, "failed to set VDDVIBL volt %d\n",
    VAR_15);
   return VAR_15;
  }
 }

 if (VAR_14) {
  VAR_15 = FUNC_17(VAR_12->supplies[1].consumer,
           VAR_14, VAR_14);
  if (VAR_15) {
   FUNC_3(VAR_12->dev, "failed to set VDDVIBR volt %d\n",
    VAR_15);
   return VAR_15;
  }
 }

 FUNC_1(&VAR_12->play_work, VAR_8);

 VAR_12->input_dev = FUNC_5(&VAR_9->dev);
 if (!VAR_12->input_dev) {
  FUNC_3(VAR_12->dev, "couldn't allocate input device\n");
  return -VAR_1;
 }

 FUNC_11(VAR_12->input_dev, VAR_12);

 VAR_12->input_dev->name = "twl6040:vibrator";
 VAR_12->input_dev->id.version = 1;
 VAR_12->input_dev->close = VAR_6;
 FUNC_2(VAR_2, VAR_12->input_dev->ffbit);

 VAR_15 = FUNC_9(VAR_12->input_dev, ((void*)0), VAR_7);
 if (VAR_15) {
  FUNC_3(VAR_12->dev, "couldn't register vibrator to FF\n");
  return VAR_15;
 }

 VAR_15 = FUNC_10(VAR_12->input_dev);
 if (VAR_15) {
  FUNC_3(VAR_12->dev, "couldn't register input device\n");
  return VAR_15;
 }

 FUNC_16(VAR_9, VAR_12);

 return 0;
}
