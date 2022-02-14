
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int flags; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wiimote_data*) ;
 struct wiimote_data* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct wiimote_data*,int ) ;

__attribute__((used)) static void FUNC_5(struct input_dev *VAR_2)
{
 struct wiimote_data *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->state.lock, VAR_4);
 VAR_3->state.flags &= ~VAR_0;
 FUNC_4(VAR_3, VAR_1);
 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->state.lock, VAR_4);
}
