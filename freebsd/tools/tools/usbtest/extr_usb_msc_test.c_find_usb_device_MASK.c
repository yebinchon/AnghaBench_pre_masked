
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct libusb20_device {int dummy; } ;
struct libusb20_backend {int dummy; } ;
struct LIBUSB20_DEVICE_DESC_DECODED {scalar_t__ idVendor; scalar_t__ idProduct; } ;


 scalar_t__ VAR_0 ;
 struct libusb20_backend* FUNC_0 () ;
 int FUNC_1 (struct libusb20_backend*,struct libusb20_device*) ;
 struct libusb20_device* FUNC_2 (struct libusb20_backend*,struct libusb20_device*) ;
 int FUNC_3 (struct libusb20_backend*) ;
 struct LIBUSB20_DEVICE_DESC_DECODED* FUNC_4 (struct libusb20_device*) ;
 scalar_t__ FUNC_5 (struct libusb20_device*) ;

struct libusb20_device *
FUNC_6(uint16_t VAR_1, uint16_t VAR_2)
{
 struct libusb20_backend *VAR_3 = FUNC_0();
 struct libusb20_device *VAR_4 = ((void*)0);
 struct LIBUSB20_DEVICE_DESC_DECODED *VAR_5;

 while ((VAR_4 = FUNC_2(VAR_3, VAR_4))) {

  if (FUNC_5(VAR_4) != VAR_0)
   continue;

  VAR_5 = FUNC_4(VAR_4);

  if ((VAR_1 == VAR_5->idVendor) &&
      (VAR_2 == VAR_5->idProduct)) {
   FUNC_1(VAR_3, VAR_4);
   break;
  }
 }


 FUNC_3(VAR_3);

 return (VAR_4);
}
