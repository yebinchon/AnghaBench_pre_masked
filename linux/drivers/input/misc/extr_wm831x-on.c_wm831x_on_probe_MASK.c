
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wm831x_on {TYPE_2__* dev; int work; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_8__ {TYPE_3__* parent; } ;
struct TYPE_9__ {char* name; char* phys; TYPE_1__ dev; void** keybit; void** evbit; } ;


 void* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 struct wm831x* FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (TYPE_3__*) ;
 struct wm831x_on* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (int,struct wm831x_on*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct platform_device*,struct wm831x_on*) ;
 int FUNC_12 (int,int *,int ,int,char*,struct wm831x_on*) ;
 int FUNC_13 (struct wm831x*,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct wm831x *VAR_9 = FUNC_5(VAR_8->dev.parent);
 struct wm831x_on *VAR_10;
 int VAR_11 = FUNC_13(VAR_9, FUNC_10(VAR_8, 0));
 int VAR_12;

 VAR_10 = FUNC_7(&VAR_8->dev, sizeof(struct wm831x_on),
     VAR_2);
 if (!VAR_10) {
  FUNC_4(&VAR_8->dev, "Can't allocate data\n");
  return -VAR_0;
 }

 VAR_10->wm831x = VAR_9;
 FUNC_2(&VAR_10->work, VAR_7);

 VAR_10->dev = FUNC_6(&VAR_8->dev);
 if (!VAR_10->dev) {
  FUNC_4(&VAR_8->dev, "Can't allocate input dev\n");
  VAR_12 = -VAR_0;
  goto err;
 }

 VAR_10->dev->evbit[0] = FUNC_0(VAR_1);
 VAR_10->dev->keybit[FUNC_1(VAR_5)] = FUNC_0(VAR_5);
 VAR_10->dev->name = "wm831x_on";
 VAR_10->dev->phys = "wm831x_on/input0";
 VAR_10->dev->dev.parent = &VAR_8->dev;

 VAR_12 = FUNC_12(VAR_11, ((void*)0), VAR_6,
       VAR_4 | VAR_3,
       "wm831x_on",
       VAR_10);
 if (VAR_12 < 0) {
  FUNC_4(&VAR_8->dev, "Unable to request IRQ: %d\n", VAR_12);
  goto err_input_dev;
 }
 VAR_12 = FUNC_9(VAR_10->dev);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "Can't register input device: %d\n", VAR_12);
  goto err_irq;
 }

 FUNC_11(VAR_8, VAR_10);

 return 0;

err_irq:
 FUNC_8(VAR_11, VAR_10);
err_input_dev:
err:
 return VAR_12;
}
