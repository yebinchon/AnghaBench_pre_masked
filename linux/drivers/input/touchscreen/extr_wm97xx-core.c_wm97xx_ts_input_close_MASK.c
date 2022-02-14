
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {scalar_t__ id; TYPE_2__* codec; TYPE_1__* mach_ops; int ts_workq; int ts_reader; int pen_event_work; scalar_t__ pen_is_down; scalar_t__ pen_irq; } ;
struct input_dev {int dummy; } ;
struct TYPE_4__ {int (* acc_enable ) (struct wm97xx*,int ) ;int (* dig_enable ) (struct wm97xx*,int ) ;} ;
struct TYPE_3__ {int irq_gpio; scalar_t__ acc_enabled; int (* irq_enable ) (struct wm97xx*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,struct wm97xx*) ;
 struct wm97xx* FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct wm97xx*,int) ;
 int FUNC_7 (struct wm97xx*,int ) ;
 int FUNC_8 (struct wm97xx*,int ) ;
 int FUNC_9 (struct wm97xx*,int ) ;
 int FUNC_10 (struct wm97xx*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct input_dev *VAR_2)
{
 struct wm97xx *VAR_3 = FUNC_5(VAR_2);
 u16 VAR_4;

 if (VAR_3->pen_irq) {

  if (VAR_3->id != VAR_1) {
   FUNC_0(!VAR_3->mach_ops->irq_gpio);
   VAR_4 = FUNC_9(VAR_3, VAR_0);
   FUNC_10(VAR_3, VAR_0,
      VAR_4 | VAR_3->mach_ops->irq_gpio);
  }

  FUNC_4(VAR_3->pen_irq, VAR_3);
 }

 VAR_3->pen_is_down = 0;


 if (FUNC_2(&VAR_3->pen_event_work))
  VAR_3->mach_ops->irq_enable(VAR_3, 1);




 FUNC_1(&VAR_3->ts_reader);

 FUNC_3(VAR_3->ts_workq);


 VAR_3->codec->dig_enable(VAR_3, 0);
 if (VAR_3->mach_ops && VAR_3->mach_ops->acc_enabled)
  VAR_3->codec->acc_enable(VAR_3, 0);
}
