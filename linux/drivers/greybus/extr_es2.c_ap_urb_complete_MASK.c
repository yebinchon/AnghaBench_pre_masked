
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int dummy; } ;
struct urb {struct usb_ctrlrequest* context; } ;


 int FUNC_0 (struct usb_ctrlrequest*) ;
 int FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 struct usb_ctrlrequest *VAR_1 = VAR_0->context;

 FUNC_0(VAR_1);
 FUNC_1(VAR_0);
}
