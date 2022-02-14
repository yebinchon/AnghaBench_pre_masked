
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ts {int pen_down; int pd_data_work; scalar_t__ pressure; int pd_irq; struct wm831x* wm831x; } ;
struct wm831x {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wm831x*,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct wm831x_ts *VAR_9 = VAR_8;
 struct wm831x *VAR_10 = VAR_9->wm831x;
 int VAR_11 = 0;

 if (VAR_9->pen_down)
  return VAR_0;

 FUNC_1(VAR_9->pd_irq);


 if (VAR_9->pressure)
  VAR_11 |= VAR_5;

 FUNC_3(VAR_10, VAR_6,
   VAR_3 | VAR_4 | VAR_5,
   VAR_3 | VAR_4 | VAR_11);

 FUNC_3(VAR_10, VAR_1,
   VAR_2, VAR_2);

 VAR_9->pen_down = 1;


 FUNC_0(VAR_10->dev, "IRQ PD->DATA\n");
 FUNC_2(&VAR_9->pd_data_work);

 return VAR_0;
}
