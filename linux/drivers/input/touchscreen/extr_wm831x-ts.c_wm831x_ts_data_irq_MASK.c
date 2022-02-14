
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm831x_ts {int pen_down; int input_dev; int pd_data_work; scalar_t__ pressure; int data_irq; struct wm831x* wm831x; } ;
struct wm831x {int dev; } ;
typedef int irqreturn_t ;





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
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wm831x*,int ,int,int*) ;
 int FUNC_8 (struct wm831x*,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_12, void *VAR_13)
{
 struct wm831x_ts *VAR_14 = VAR_13;
 struct wm831x *VAR_15 = VAR_14->wm831x;
 static int VAR_16[] = { 129, 128, 130 };
 u16 VAR_17[3];
 int VAR_18;
 int VAR_19, VAR_20;

 if (VAR_14->pressure)
  VAR_18 = 3;
 else
  VAR_18 = 2;

 FUNC_8(VAR_15, VAR_3,
   VAR_4, VAR_4);

 VAR_20 = FUNC_7(VAR_15, VAR_11, VAR_18,
          VAR_17);
 if (VAR_20 != 0) {
  FUNC_1(VAR_15->dev, "Failed to read touch data: %d\n",
   VAR_20);
  return VAR_2;
 }





 VAR_14->pen_down = 1;
 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  if (!(VAR_17[VAR_19] & VAR_6)) {
   VAR_14->pen_down = 0;
   continue;
  }
  FUNC_3(VAR_14->input_dev, VAR_16[VAR_19],
     VAR_17[VAR_19] & VAR_5);
 }

 if (!VAR_14->pen_down) {

  FUNC_0(VAR_15->dev, "IRQ DATA->PD\n");

  FUNC_2(VAR_14->data_irq);


  FUNC_8(VAR_15, VAR_10,
    VAR_7 | VAR_8 |
    VAR_9, 0);


  FUNC_8(VAR_15, VAR_3,
    VAR_4, VAR_4);

  FUNC_7(VAR_15, VAR_11, VAR_18, VAR_17);

  if (VAR_14->pressure)
   FUNC_3(VAR_14->input_dev,
      130, 0);

  FUNC_4(VAR_14->input_dev, VAR_0, 0);

  FUNC_6(&VAR_14->pd_data_work);
 } else {
  FUNC_4(VAR_14->input_dev, VAR_0, 1);
 }

 FUNC_5(VAR_14->input_dev);

 return VAR_1;
}
