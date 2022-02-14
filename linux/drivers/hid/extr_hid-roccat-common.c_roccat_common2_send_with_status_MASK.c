
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct usb_device*,int ,void const*,int ) ;

int FUNC_3(struct usb_device *VAR_0,
  uint VAR_1, void const *VAR_2, uint VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_0(100);

 return FUNC_1(VAR_0);
}
