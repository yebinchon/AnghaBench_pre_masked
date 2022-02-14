
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct iforce_usb {int out; int irq; TYPE_1__ iforce; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iforce_usb*) ;
 int FUNC_2 (int ) ;
 struct iforce_usb* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_0)
{
 struct iforce_usb *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0, ((void*)0));

 FUNC_0(VAR_1->iforce.dev);

 FUNC_2(VAR_1->irq);
 FUNC_2(VAR_1->out);

 FUNC_1(VAR_1);
}
