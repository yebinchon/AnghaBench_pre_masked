
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct pm860x_touch_pdata {int gpadc_prebias; int slot_cycle; int off_scale; int sw_cal; int tsi_prebias; int pen_prebias; int pen_prechg; int res_x; } ;
struct pm860x_touch {int irq; int res_x; TYPE_3__* idev; struct i2c_client* i2c; struct pm860x_chip* chip; } ;
struct pm860x_chip {scalar_t__ id; TYPE_6__* dev; struct i2c_client* companion; struct i2c_client* client; } ;
struct TYPE_15__ {int parent; } ;
struct platform_device {TYPE_6__ dev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_13__ {TYPE_6__* parent; } ;
struct TYPE_12__ {int bustype; } ;
struct TYPE_14__ {char* name; char* phys; int keybit; int evbit; int absbit; int close; int open; TYPE_2__ dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 struct pm860x_chip* FUNC_2 (int ) ;
 struct pm860x_touch_pdata* FUNC_3 (TYPE_6__*) ;
 TYPE_3__* FUNC_4 (TYPE_6__*) ;
 struct pm860x_touch* FUNC_5 (TYPE_6__*,int,int ) ;
 int FUNC_6 (TYPE_6__*,int,int *,int ,int ,char*,struct pm860x_touch*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int,int ,int ) ;
 int FUNC_9 (TYPE_3__*,struct pm860x_touch*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct i2c_client*,int ,int) ;
 int FUNC_12 (struct i2c_client*,int ,int ,int ) ;
 int VAR_24 ;
 scalar_t__ FUNC_13 (struct platform_device*,struct pm860x_chip*,int*) ;
 int VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_27)
{
 struct pm860x_chip *VAR_28 = FUNC_2(VAR_27->dev.parent);
 struct pm860x_touch_pdata *VAR_29 = FUNC_3(&VAR_27->dev);
 struct pm860x_touch *VAR_30;
 struct i2c_client *VAR_31 = (VAR_28->id == VAR_6) ? VAR_28->client : VAR_28->companion;

 int VAR_32, VAR_33, VAR_34 = 0, VAR_35 = 0;

 VAR_32 = FUNC_10(VAR_27, 0);
 if (VAR_32 < 0)
  return -VAR_7;

 if (FUNC_13(VAR_27, VAR_28, &VAR_34)) {
  if (VAR_29) {

   VAR_35 = 0;
   VAR_35 |= (VAR_29->gpadc_prebias << 1)
    & VAR_17;
   VAR_35 |= (VAR_29->slot_cycle << 3)
    & VAR_18;
   VAR_35 |= (VAR_29->off_scale << 5)
    & VAR_16;
   VAR_35 |= (VAR_29->sw_cal << 7)
    & VAR_19;
   if (VAR_35) {
    VAR_33 = FUNC_11(VAR_31,
     VAR_15, VAR_35);
    if (VAR_33 < 0)
     return -VAR_7;
   }

   if (VAR_29->tsi_prebias) {
    VAR_35 = VAR_29->tsi_prebias;
    VAR_33 = FUNC_11(VAR_31,
     VAR_23, VAR_35);
    if (VAR_33 < 0)
     return -VAR_7;
   }

   VAR_35 = 0;
   VAR_35 |= VAR_29->pen_prebias
    & VAR_21;
   VAR_35 |= (VAR_29->pen_prechg << 5)
    & VAR_22;
   if (VAR_35) {
    VAR_33 = FUNC_11(VAR_31,
     VAR_20, VAR_35);
    if (VAR_33 < 0)
     return -VAR_7;
   }
   VAR_34 = VAR_29->res_x;
  } else {
   FUNC_1(&VAR_27->dev, "failed to get platform data\n");
   return -VAR_7;
  }
 }

 VAR_33 = FUNC_12(VAR_31, VAR_15, VAR_14,
         VAR_14);
 if (VAR_33)
  return VAR_33;

 VAR_30 = FUNC_5(&VAR_27->dev, sizeof(struct pm860x_touch),
        VAR_12);
 if (!VAR_30)
  return -VAR_8;

 VAR_30->idev = FUNC_4(&VAR_27->dev);
 if (!VAR_30->idev) {
  FUNC_1(&VAR_27->dev, "Failed to allocate input device!\n");
  return -VAR_8;
 }

 VAR_30->idev->name = "88pm860x-touch";
 VAR_30->idev->phys = "88pm860x/input0";
 VAR_30->idev->id.bustype = VAR_5;
 VAR_30->idev->dev.parent = &VAR_27->dev;
 VAR_30->idev->open = VAR_26;
 VAR_30->idev->close = VAR_24;
 VAR_30->chip = VAR_28;
 VAR_30->i2c = VAR_31;
 VAR_30->irq = VAR_32;
 VAR_30->res_x = VAR_34;
 FUNC_9(VAR_30->idev, VAR_30);

 VAR_33 = FUNC_6(&VAR_27->dev, VAR_30->irq, ((void*)0),
     VAR_25, VAR_13,
     "touch", VAR_30);
 if (VAR_33 < 0)
  return VAR_33;

 FUNC_0(VAR_9, VAR_30->idev->evbit);
 FUNC_0(VAR_1, VAR_30->idev->absbit);
 FUNC_0(VAR_2, VAR_30->idev->absbit);
 FUNC_0(VAR_0, VAR_30->idev->absbit);
 FUNC_0(VAR_11, VAR_30->idev->evbit);
 FUNC_0(VAR_10, VAR_30->idev->evbit);
 FUNC_0(VAR_4, VAR_30->idev->keybit);

 FUNC_8(VAR_30->idev, VAR_1, 0, 1 << VAR_3, 0, 0);
 FUNC_8(VAR_30->idev, VAR_2, 0, 1 << VAR_3, 0, 0);
 FUNC_8(VAR_30->idev, VAR_0, 0, 1 << VAR_3,
    0, 0);

 VAR_33 = FUNC_7(VAR_30->idev);
 if (VAR_33 < 0) {
  FUNC_1(VAR_28->dev, "Failed to register touch!\n");
  return VAR_33;
 }

 return 0;
}
