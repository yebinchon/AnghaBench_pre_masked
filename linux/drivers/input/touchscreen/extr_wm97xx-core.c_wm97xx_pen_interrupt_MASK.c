
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm97xx {int pen_event_work; int ts_workq; TYPE_1__* mach_ops; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* irq_enable ) (struct wm97xx*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct wm97xx*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct wm97xx *VAR_3 = VAR_2;

 if (!FUNC_2(&VAR_3->pen_event_work)) {
  VAR_3->mach_ops->irq_enable(VAR_3, 0);
  FUNC_0(VAR_3->ts_workq, &VAR_3->pen_event_work);
 }

 return VAR_0;
}
