
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xpad {int irq_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_xpad*) ;

__attribute__((used)) static int FUNC_3(struct usb_xpad *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->irq_in, VAR_1);
 if (VAR_3)
  return -VAR_0;
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->irq_in);
  return VAR_3;
 }

 return 0;
}
