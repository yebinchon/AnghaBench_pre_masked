
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_1, int *VAR_2)
{
 int VAR_3;
 uint8_t VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_4, 1);

 if (VAR_3)
  return VAR_3;

 *VAR_2 = (int)VAR_4;
 return 0;
}
