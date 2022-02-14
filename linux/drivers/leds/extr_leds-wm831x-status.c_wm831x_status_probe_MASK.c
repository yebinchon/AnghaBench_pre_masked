
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wm831x_status_pdata {int default_src; int default_trigger; int name; } ;
struct TYPE_5__ {int groups; int blink_set; int brightness_set_blocking; int default_trigger; int name; } ;
struct wm831x_status {int reg_val; int src; TYPE_1__ cdev; int brightness; int reg; int value_lock; int mutex; struct wm831x* wm831x; } ;
struct wm831x_pdata {scalar_t__* status; } ;
struct wm831x {int dev; } ;
struct resource {int start; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
typedef int pdata ;


 int FUNC_0 (scalar_t__*) ;
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
 int FUNC_1 (TYPE_2__*,char*,...) ;
 struct wm831x* FUNC_2 (int ) ;
 struct wm831x_pdata* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 struct wm831x_status* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (struct wm831x_status_pdata*,scalar_t__,int) ;
 int FUNC_8 (struct wm831x_status_pdata*,int ,int) ;
 int FUNC_9 (int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct wm831x*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_13)
{
 struct wm831x *VAR_14 = FUNC_2(VAR_13->dev.parent);
 struct wm831x_pdata *VAR_15;
 struct wm831x_status_pdata VAR_16;
 struct wm831x_status *VAR_17;
 struct resource *VAR_18;
 int VAR_19 = VAR_13->id % FUNC_0(VAR_15->status);
 int VAR_20;

 VAR_18 = FUNC_10(VAR_13, VAR_3, 0);
 if (VAR_18 == ((void*)0)) {
  FUNC_1(&VAR_13->dev, "No register resource\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_5(&VAR_13->dev, sizeof(struct wm831x_status),
          VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->wm831x = VAR_14;
 VAR_17->reg = VAR_18->start;

 if (FUNC_3(VAR_14->dev))
  VAR_15 = FUNC_3(VAR_14->dev);
 else
  VAR_15 = ((void*)0);

 FUNC_8(&VAR_16, 0, sizeof(VAR_16));
 if (VAR_15 && VAR_15->status[VAR_19])
  FUNC_7(&VAR_16, VAR_15->status[VAR_19], sizeof(VAR_16));
 else
  VAR_16.name = FUNC_4(&VAR_13->dev);

 FUNC_9(&VAR_17->mutex);
 FUNC_11(&VAR_17->value_lock);



 VAR_17->reg_val = FUNC_12(VAR_14, VAR_17->reg);

 if (VAR_17->reg_val & VAR_6)
  VAR_17->brightness = VAR_4;
 else
  VAR_17->brightness = VAR_5;




 if (VAR_16.default_src == VAR_9) {
  VAR_17->src = VAR_17->reg_val;
  VAR_17->src &= VAR_7;
  VAR_17->src >>= VAR_8;
 } else {
  VAR_17->src = VAR_16.default_src - 1;
 }

 VAR_17->cdev.name = VAR_16.name;
 VAR_17->cdev.default_trigger = VAR_16.default_trigger;
 VAR_17->cdev.brightness_set_blocking = VAR_11;
 VAR_17->cdev.blink_set = VAR_10;
 VAR_17->cdev.groups = VAR_12;

 VAR_20 = FUNC_6(VAR_14->dev, &VAR_17->cdev);
 if (VAR_20 < 0) {
  FUNC_1(&VAR_13->dev, "Failed to register LED: %d\n", VAR_20);
  return VAR_20;
 }

 return 0;
}
