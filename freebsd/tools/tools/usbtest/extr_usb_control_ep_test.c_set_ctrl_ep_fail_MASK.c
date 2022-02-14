
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ss_fail ;
typedef int ds_fail ;
typedef int dev ;
typedef int bus ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *,int *,int*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1("hw.usb.ctrl_bus_fail", ((void*)0), ((void*)0),
     &VAR_0, sizeof(VAR_0));
 if (VAR_4 != 0)
  goto emissing;

 VAR_4 = FUNC_1("hw.usb.ctrl_dev_fail", ((void*)0), ((void*)0),
     &VAR_1, sizeof(VAR_1));
 if (VAR_4 != 0)
  goto emissing;

 VAR_4 = FUNC_1("hw.usb.ctrl_ds_fail", ((void*)0), ((void*)0),
     &VAR_2, sizeof(VAR_2));
 if (VAR_4 != 0)
  goto emissing;

 VAR_4 = FUNC_1("hw.usb.ctrl_ss_fail", ((void*)0), ((void*)0),
     &VAR_3, sizeof(VAR_3));
 if (VAR_4 != 0)
  goto emissing;
 return;

emissing:
 FUNC_0("Cannot set USB sysctl, missing USB_REQ_DEBUG option?\n");
}
