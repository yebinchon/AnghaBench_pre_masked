
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct roccat_common2_control {int value; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct usb_device*,int ,struct roccat_common2_control*,int) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_2)
{
 int VAR_3;
 struct roccat_common2_control VAR_4;

 do {
  FUNC_1(50);
  VAR_3 = FUNC_2(VAR_2,
    VAR_1,
    &VAR_4, sizeof(struct roccat_common2_control));

  if (VAR_3)
   return VAR_3;

  switch (VAR_4.value) {
  case 128:
   return 0;
  case 132:
   FUNC_1(500);
   continue;
  case 129:
  case 131:
  case 130:
   return -VAR_0;
  default:
   FUNC_0(&VAR_2->dev,
     "roccat_common2_receive_control_status: "
     "unknown response value 0x%x\n",
     VAR_4.value);
   return -VAR_0;
  }

 } while (1);
}
