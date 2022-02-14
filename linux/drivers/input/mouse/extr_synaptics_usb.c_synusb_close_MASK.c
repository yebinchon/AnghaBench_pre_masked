
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct synusb {int is_open; TYPE_1__* intf; int pm_mutex; int urb; } ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ needs_remote_wakeup; } ;


 struct synusb* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_0)
{
 struct synusb *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1->intf);

 FUNC_1(&VAR_1->pm_mutex);
 FUNC_5(VAR_1->urb);
 VAR_1->intf->needs_remote_wakeup = 0;
 VAR_1->is_open = 0;
 FUNC_2(&VAR_1->pm_mutex);

 if (!VAR_2)
  FUNC_4(VAR_1->intf);
}
