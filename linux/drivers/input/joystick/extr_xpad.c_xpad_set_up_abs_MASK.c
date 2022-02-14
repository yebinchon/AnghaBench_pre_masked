
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xpad {int xtype; } ;
struct input_dev {int dummy; } ;
 int VAR_0 ;
 struct usb_xpad* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_dev*,short,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_1, signed short VAR_2)
{
 struct usb_xpad *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 130:
 case 129:
 case 133:
 case 132:
  FUNC_1(VAR_1, VAR_2, -32768, 32767, 16, 128);
  break;
 case 128:
 case 131:
  if (VAR_3->xtype == VAR_0)
   FUNC_1(VAR_1, VAR_2, 0, 1023, 0, 0);
  else
   FUNC_1(VAR_1, VAR_2, 0, 255, 0, 0);
  break;
 case 135:
 case 134:
  FUNC_1(VAR_1, VAR_2, -1, 1, 0, 0);
  break;
 default:
  FUNC_1(VAR_1, VAR_2, 0, 0, 0, 0);
  break;
 }
}
