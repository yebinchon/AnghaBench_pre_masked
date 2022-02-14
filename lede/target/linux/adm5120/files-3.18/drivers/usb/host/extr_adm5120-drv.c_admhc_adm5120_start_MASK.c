
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bus_name; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct admhcd {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct admhcd*) ;
 int FUNC_2 (struct admhcd*) ;
 int FUNC_3 (struct usb_hcd*) ;
 struct admhcd* FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_0)
{
 struct admhcd *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0("unable to init %s\n", VAR_0->self.bus_name);
  goto err;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0("unable to run %s\n", VAR_0->self.bus_name);
  goto err_stop;
 }

 return 0;

err_stop:
 FUNC_3(VAR_0);
err:
 return VAR_2;
}
