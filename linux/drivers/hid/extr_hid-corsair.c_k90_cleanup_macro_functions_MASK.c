
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct k90_drvdata* name; } ;
struct TYPE_5__ {int removed; TYPE_3__ cdev; int work; } ;
struct k90_drvdata {TYPE_2__ record_led; } ;
struct TYPE_4__ {int kobj; } ;
struct hid_device {TYPE_1__ dev; } ;
struct corsair_drvdata {struct k90_drvdata* k90; } ;


 int FUNC_0 (int *) ;
 struct corsair_drvdata* FUNC_1 (struct hid_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct k90_drvdata*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct hid_device *VAR_1)
{
 struct corsair_drvdata *VAR_2 = FUNC_1(VAR_1);
 struct k90_drvdata *VAR_3 = VAR_2->k90;

 if (VAR_3) {
  FUNC_4(&VAR_1->dev.kobj, &VAR_0);

  VAR_3->record_led.removed = 1;
  FUNC_3(&VAR_3->record_led.cdev);
  FUNC_0(&VAR_3->record_led.work);
  FUNC_2(VAR_3->record_led.cdev.name);

  FUNC_2(VAR_3);
 }
}
