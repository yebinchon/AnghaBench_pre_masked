
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct kone_roccat_report {int event; int key; int value; } ;
struct kone_mouse_event {int event; int macro_key; int value; } ;
struct kone_device {int chrdev_minor; int actual_profile; } ;


 int VAR_0 ;






 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct kone_device const *VAR_1,
  struct kone_mouse_event const *VAR_2)
{
 struct kone_roccat_report VAR_3;

 switch (VAR_2->event) {
 case 128:
 case 129:
 case 130:
 case 131:
  VAR_3.event = VAR_2->event;
  VAR_3.value = VAR_2->value;
  VAR_3.key = 0;
  FUNC_0(VAR_1->chrdev_minor,
    (uint8_t *)&VAR_3);
  break;
 case 133:
 case 132:
  if (VAR_2->value == VAR_0) {
   VAR_3.event = VAR_2->event;
   VAR_3.value = VAR_1->actual_profile;
   VAR_3.key = VAR_2->macro_key;
   FUNC_0(VAR_1->chrdev_minor,
     (uint8_t *)&VAR_3);
  }
  break;
 }

}
