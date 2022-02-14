
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct platform_device {int dummy; } ;
struct oxnas_hcd {int clk; int refsrc; int phyref; scalar_t__ use_pllb; } ;
struct TYPE_2__ {scalar_t__ priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_3(VAR_0);
 struct oxnas_hcd *VAR_2 = (struct oxnas_hcd *)FUNC_2(VAR_1)->priv;

 FUNC_5(VAR_1);
 if (VAR_2->use_pllb) {
  FUNC_0(VAR_2->phyref);
  FUNC_1(VAR_2->phyref);
  FUNC_0(VAR_2->refsrc);
  FUNC_1(VAR_2->refsrc);
 }
 FUNC_0(VAR_2->clk);
 FUNC_4(VAR_1);

 return 0;
}
