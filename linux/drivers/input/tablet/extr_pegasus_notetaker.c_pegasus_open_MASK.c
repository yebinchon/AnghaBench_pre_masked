
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pegasus {int is_open; int intf; int pm_mutex; int init; TYPE_1__* irq; int usbdev; } ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct pegasus* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pegasus*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_9(struct input_dev *VAR_4)
{
 struct pegasus *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_5(VAR_5->intf);
 if (VAR_6)
  return VAR_6;

 FUNC_2(&VAR_5->pm_mutex);
 VAR_5->irq->dev = VAR_5->usbdev;
 if (FUNC_8(VAR_5->irq, VAR_1)) {
  VAR_6 = -VAR_0;
  goto err_autopm_put;
 }

 VAR_6 = FUNC_4(VAR_5, VAR_3, VAR_2);
 if (VAR_6)
  goto err_kill_urb;

 VAR_5->is_open = 1;
 FUNC_3(&VAR_5->pm_mutex);
 return 0;

err_kill_urb:
 FUNC_7(VAR_5->irq);
 FUNC_0(&VAR_5->init);
err_autopm_put:
 FUNC_3(&VAR_5->pm_mutex);
 FUNC_6(VAR_5->intf);
 return VAR_6;
}
