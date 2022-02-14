
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int rsrc_len; int rsrc_start; int regs; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct usb_hcd* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_1(VAR_0);

 FUNC_4(VAR_1);
 FUNC_0(VAR_1->regs);
 FUNC_2(VAR_1->rsrc_start, VAR_1->rsrc_len);
 FUNC_3(VAR_1);

 return 0;
}
