
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wm831x_ts {int pressure; void* data_irq; void* pd_irq; int pd_data_work; struct input_dev* input_dev; struct wm831x* wm831x; } ;
struct wm831x_touch_pdata {int pressure; int isel; int data_irqf; int pd_irqf; scalar_t__ fivewire; void* pd_irq; void* data_irq; } ;
struct wm831x_pdata {struct wm831x_touch_pdata* touch; } ;
struct wm831x {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {TYPE_2__* parent; } ;
struct input_dev {char* name; char* phys; TYPE_1__ dev; int keybit; int evbit; int close; int open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int,...) ;
 struct wm831x* FUNC_4 (int ) ;
 struct wm831x_pdata* FUNC_5 (int ) ;
 struct input_dev* FUNC_6 (TYPE_2__*) ;
 struct wm831x_ts* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*,struct wm831x_ts*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,int ,int ,int,int,int ) ;
 int FUNC_12 (struct input_dev*,struct wm831x_ts*) ;
 int FUNC_13 (struct platform_device*,char*) ;
 int FUNC_14 (struct platform_device*,struct wm831x_ts*) ;
 int FUNC_15 (void*,int *,int ,int,char*,struct wm831x_ts*) ;
 void* FUNC_16 (struct wm831x*,int ) ;
 int VAR_16 ;
 int FUNC_17 (struct wm831x*,int ,int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_21)
{
 struct wm831x_ts *VAR_22;
 struct wm831x *VAR_23 = FUNC_4(VAR_21->dev.parent);
 struct wm831x_pdata *VAR_24 = FUNC_5(VAR_21->dev.parent);
 struct wm831x_touch_pdata *VAR_25 = ((void*)0);
 struct input_dev *VAR_26;
 int VAR_27, VAR_28;

 if (VAR_24)
  VAR_25 = VAR_24->touch;

 VAR_22 = FUNC_7(&VAR_21->dev, sizeof(struct wm831x_ts),
     VAR_7);
 VAR_26 = FUNC_6(&VAR_21->dev);
 if (!VAR_22 || !VAR_26) {
  VAR_27 = -VAR_4;
  goto err_alloc;
 }

 VAR_22->wm831x = VAR_23;
 VAR_22->input_dev = VAR_26;
 FUNC_0(&VAR_22->pd_data_work, VAR_16);





 VAR_22->data_irq = FUNC_16(VAR_23,
      FUNC_13(VAR_21,
         "TCHDATA"));
 if (VAR_25 && VAR_25->data_irq)
  VAR_22->data_irq = VAR_25->data_irq;

 VAR_22->pd_irq = FUNC_16(VAR_23,
           FUNC_13(VAR_21, "TCHPD"));
 if (VAR_25 && VAR_25->pd_irq)
  VAR_22->pd_irq = VAR_25->pd_irq;

 if (VAR_25)
  VAR_22->pressure = VAR_25->pressure;
 else
  VAR_22->pressure = 1;


 if (VAR_25 && VAR_25->fivewire) {
  FUNC_17(VAR_23, VAR_15,
    VAR_10, VAR_10);


  FUNC_1(VAR_25->pressure && VAR_25->fivewire);
  VAR_22->pressure = 0;
 } else {
  FUNC_17(VAR_23, VAR_15,
    VAR_10, 0);
 }

 if (VAR_25) {
  switch (VAR_25->isel) {
  default:
   FUNC_3(&VAR_21->dev, "Unsupported ISEL setting: %d\n",
    VAR_25->isel);

  case 200:
  case 0:
   FUNC_17(VAR_23, VAR_15,
     VAR_11, 0);
   break;
  case 400:
   FUNC_17(VAR_23, VAR_15,
     VAR_11, VAR_11);
   break;
  }
 }

 FUNC_17(VAR_23, VAR_15,
   VAR_12, 0);


 FUNC_17(VAR_23, VAR_14,
   VAR_13, 6);

 if (VAR_25 && VAR_25->data_irqf)
  VAR_28 = VAR_25->data_irqf;
 else
  VAR_28 = VAR_9;

 VAR_27 = FUNC_15(VAR_22->data_irq,
         ((void*)0), VAR_17,
         VAR_28 | VAR_8,
         "Touchscreen data", VAR_22);
 if (VAR_27) {
  FUNC_3(&VAR_21->dev, "Failed to request data IRQ %d: %d\n",
   VAR_22->data_irq, VAR_27);
  goto err_alloc;
 }
 FUNC_8(VAR_22->data_irq);

 if (VAR_25 && VAR_25->pd_irqf)
  VAR_28 = VAR_25->pd_irqf;
 else
  VAR_28 = VAR_9;

 VAR_27 = FUNC_15(VAR_22->pd_irq,
         ((void*)0), VAR_20,
         VAR_28 | VAR_8,
         "Touchscreen pen down", VAR_22);
 if (VAR_27) {
  FUNC_3(&VAR_21->dev, "Failed to request pen down IRQ %d: %d\n",
   VAR_22->pd_irq, VAR_27);
  goto err_data_irq;
 }


 VAR_26->name = "WM831x touchscreen";
 VAR_26->phys = "wm831x";
 VAR_26->open = VAR_19;
 VAR_26->close = VAR_18;

 FUNC_2(VAR_5, VAR_26->evbit);
 FUNC_2(VAR_6, VAR_26->evbit);
 FUNC_2(VAR_3, VAR_26->keybit);

 FUNC_11(VAR_26, VAR_1, 0, 4095, 5, 0);
 FUNC_11(VAR_26, VAR_2, 0, 4095, 5, 0);
 if (VAR_22->pressure)
  FUNC_11(VAR_26, VAR_0, 0, 4095, 5, 0);

 FUNC_12(VAR_26, VAR_22);
 VAR_26->dev.parent = &VAR_21->dev;

 VAR_27 = FUNC_10(VAR_26);
 if (VAR_27)
  goto err_pd_irq;

 FUNC_14(VAR_21, VAR_22);
 return 0;

err_pd_irq:
 FUNC_9(VAR_22->pd_irq, VAR_22);
err_data_irq:
 FUNC_9(VAR_22->data_irq, VAR_22);
err_alloc:

 return VAR_27;
}
