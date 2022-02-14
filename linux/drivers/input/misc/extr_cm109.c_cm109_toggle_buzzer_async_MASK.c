
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm109_dev {int ctl_urb_pending; int buzzer_pending; int ctl_submit_lock; } ;


 int FUNC_0 (struct cm109_dev*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct cm109_dev *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->ctl_submit_lock, VAR_1);

 if (VAR_0->ctl_urb_pending) {

  VAR_0->buzzer_pending = 1;
 } else {
  VAR_0->ctl_urb_pending = 1;
  FUNC_0(VAR_0);
 }

 FUNC_2(&VAR_0->ctl_submit_lock, VAR_1);
}
