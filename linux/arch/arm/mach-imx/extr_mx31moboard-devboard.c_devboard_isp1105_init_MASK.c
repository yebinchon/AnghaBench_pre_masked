
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct usb_phy *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_0, "usbh1-mode");
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_0, 0);

 VAR_3 = FUNC_2(VAR_1, "usbh1-vbusen");
 if (VAR_3) {
  FUNC_1(VAR_0);
  return VAR_3;
 }
 FUNC_0(VAR_1, 1);

 return 0;
}
