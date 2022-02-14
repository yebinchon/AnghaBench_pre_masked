
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xpad {scalar_t__ xtype; int irq_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_xpad*) ;

__attribute__((used)) static int FUNC_3(struct usb_xpad *VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_3->irq_in, VAR_1))
  return -VAR_0;

 if (VAR_3->xtype == VAR_2) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4) {
   FUNC_0(VAR_3->irq_in);
   return VAR_4;
  }
 }

 return 0;
}
