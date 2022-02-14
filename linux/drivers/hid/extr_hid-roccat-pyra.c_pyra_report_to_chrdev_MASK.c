
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u8 ;
struct pyra_roccat_report {int type; int value; int key; } ;
struct pyra_mouse_event_button {int type; int data1; int data2; } ;
struct pyra_device {int chrdev_minor; int actual_profile; } ;


 int VAR_0 ;





 scalar_t__ const VAR_1 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static void FUNC_1(struct pyra_device const *VAR_2,
  u8 const *VAR_3)
{
 struct pyra_roccat_report VAR_4;
 struct pyra_mouse_event_button const *VAR_5;

 if (VAR_3[0] != VAR_1)
  return;

 VAR_5 = (struct pyra_mouse_event_button const *)VAR_3;

 switch (VAR_5->type) {
 case 130:
 case 132:
  VAR_4.type = VAR_5->type;
  VAR_4.value = VAR_5->data1;
  VAR_4.key = 0;
  FUNC_0(VAR_2->chrdev_minor,
    (uint8_t const *)&VAR_4);
  break;
 case 131:
 case 128:
 case 129:
  if (VAR_5->data2 == VAR_0) {
   VAR_4.type = VAR_5->type;
   VAR_4.key = VAR_5->data1;




   VAR_4.value = VAR_2->actual_profile + 1;
   FUNC_0(VAR_2->chrdev_minor,
     (uint8_t const *)&VAR_4);
  }
  break;
 }
}
