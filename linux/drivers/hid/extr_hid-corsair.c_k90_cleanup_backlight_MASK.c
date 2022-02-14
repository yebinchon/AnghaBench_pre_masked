
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_device {int dummy; } ;
struct corsair_drvdata {TYPE_2__* backlight; } ;
struct TYPE_3__ {TYPE_2__* name; } ;
struct TYPE_4__ {int removed; TYPE_1__ cdev; int work; } ;


 int FUNC_0 (int *) ;
 struct corsair_drvdata* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_0)
{
 struct corsair_drvdata *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->backlight) {
  VAR_1->backlight->removed = 1;
  FUNC_3(&VAR_1->backlight->cdev);
  FUNC_0(&VAR_1->backlight->work);
  FUNC_2(VAR_1->backlight->cdev.name);
  FUNC_2(VAR_1->backlight);
 }
}
