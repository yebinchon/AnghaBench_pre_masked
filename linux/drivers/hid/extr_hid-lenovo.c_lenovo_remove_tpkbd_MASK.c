
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lenovo_drvdata_tpkbd {int led_mute; int led_micmute; } ;
struct TYPE_2__ {int kobj; } ;
struct hid_device {TYPE_1__ dev; } ;


 struct lenovo_drvdata_tpkbd* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_1)
{
 struct lenovo_drvdata_tpkbd *VAR_2 = FUNC_0(VAR_1);





 if (VAR_2 == ((void*)0))
  return;

 FUNC_2(&VAR_1->dev.kobj,
   &VAR_0);

 FUNC_1(&VAR_2->led_micmute);
 FUNC_1(&VAR_2->led_mute);
}
