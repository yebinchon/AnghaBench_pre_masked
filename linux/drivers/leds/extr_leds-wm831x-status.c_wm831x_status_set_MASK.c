
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_status {int reg_val; int src; int blink_time; int blink_cyc; scalar_t__ brightness; int mutex; int reg; int wm831x; int value_lock; scalar_t__ blink; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct wm831x_status *VAR_8)
{
 unsigned long VAR_9;

 FUNC_0(&VAR_8->mutex);

 VAR_8->reg_val &= ~(VAR_6 | VAR_4 |
     VAR_3 | VAR_1);

 FUNC_2(&VAR_8->value_lock, VAR_9);

 VAR_8->reg_val |= VAR_8->src << VAR_7;
 if (VAR_8->blink) {
  VAR_8->reg_val |= 2 << VAR_5;
  VAR_8->reg_val |= VAR_8->blink_time << VAR_2;
  VAR_8->reg_val |= VAR_8->blink_cyc;
 } else {
  if (VAR_8->brightness != VAR_0)
   VAR_8->reg_val |= 1 << VAR_5;
 }

 FUNC_3(&VAR_8->value_lock, VAR_9);

 FUNC_4(VAR_8->wm831x, VAR_8->reg, VAR_8->reg_val);

 FUNC_1(&VAR_8->mutex);
}
