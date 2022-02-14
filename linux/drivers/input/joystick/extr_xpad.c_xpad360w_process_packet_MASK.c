
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_xpad {int pad_present; int x360w_dev; int work; } ;
struct input_dev {int dummy; } ;


 struct input_dev* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_xpad*,struct input_dev*,int ,unsigned char*) ;

__attribute__((used)) static void FUNC_5(struct usb_xpad *VAR_0, u16 VAR_1, unsigned char *VAR_2)
{
 struct input_dev *VAR_3;
 bool VAR_4;


 if (VAR_2[0] & 0x08) {
  VAR_4 = (VAR_2[1] & 0x80) != 0;

  if (VAR_0->pad_present != VAR_4) {
   VAR_0->pad_present = VAR_4;
   FUNC_3(&VAR_0->work);
  }
 }


 if (VAR_2[1] != 0x1)
  return;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0->x360w_dev);
 if (VAR_3)
  FUNC_4(VAR_0, VAR_3, VAR_1, &VAR_2[4]);
 FUNC_2();
}
