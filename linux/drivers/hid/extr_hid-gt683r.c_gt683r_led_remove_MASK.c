
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
struct gt683r_led {int work; int * led_devs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct gt683r_led* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_1)
{
 int VAR_2;
 struct gt683r_led *VAR_3 = FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_3(&VAR_3->led_devs[VAR_2]);
 FUNC_0(&VAR_3->work);
 FUNC_2(VAR_1);
}
