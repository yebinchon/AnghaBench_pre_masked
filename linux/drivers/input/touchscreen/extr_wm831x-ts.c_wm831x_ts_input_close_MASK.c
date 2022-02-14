
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ts {int pen_down; int pd_irq; int data_irq; int pd_data_work; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct wm831x_ts* FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct wm831x*,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_5)
{
 struct wm831x_ts *VAR_6 = FUNC_3(VAR_5);
 struct wm831x *VAR_7 = VAR_6->wm831x;


 FUNC_5(VAR_7, VAR_4,
   VAR_0 | VAR_1 |
   VAR_2 | VAR_3, 0);




 FUNC_4(VAR_6->data_irq);
 FUNC_4(VAR_6->pd_irq);


 FUNC_2(&VAR_6->pd_data_work);




 if (VAR_6->pen_down) {
  FUNC_0(VAR_6->data_irq);
  FUNC_1(VAR_6->pd_irq);
  VAR_6->pen_down = 0;
 }
}
