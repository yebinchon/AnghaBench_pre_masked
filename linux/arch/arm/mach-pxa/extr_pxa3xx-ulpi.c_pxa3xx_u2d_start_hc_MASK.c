
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_bus {int dummy; } ;
struct TYPE_2__ {int clk; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct usb_bus*) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_0 ;

int FUNC_4(struct usb_bus *VAR_1)
{
 int VAR_2 = 0;


 if (!VAR_0)
  return 0;

 FUNC_0(VAR_0->clk);

 if (FUNC_1()) {
  FUNC_3();
  VAR_2 = FUNC_2(VAR_1);
 }

 return VAR_2;
}
