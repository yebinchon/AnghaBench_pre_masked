
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct libusb20_device {int dummy; } ;
struct LIBUSB20_CONTROL_SETUP_DECODED {int bmRequestType; int bRequest; int wValue; int wLength; scalar_t__ wIndex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct LIBUSB20_CONTROL_SETUP_DECODED*) ;
 struct libusb20_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct libusb20_device*) ;
 int FUNC_3 (struct libusb20_device*) ;
 int FUNC_4 (struct libusb20_device*) ;
 int FUNC_5 (struct libusb20_device*) ;
 int FUNC_6 (struct libusb20_device*,int ) ;
 int FUNC_7 (struct libusb20_device*,struct LIBUSB20_CONTROL_SETUP_DECODED*,int *,int *,int,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,int,int,int) ;

void
FUNC_10(uint16_t VAR_1, uint16_t VAR_2)
{
 struct LIBUSB20_CONTROL_SETUP_DECODED VAR_3;
 struct libusb20_device *VAR_4;
 uint8_t VAR_5[256];
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_8("USB device not found\n");
  return;
 }
 VAR_6 = FUNC_6(VAR_4, 0);
 if (VAR_6) {
  FUNC_8("Could not open USB device\n");
  FUNC_3(VAR_4);
  return;
 }

 VAR_8 = FUNC_5(VAR_4);
 VAR_9 = FUNC_4(VAR_4);

 for (VAR_10 = 0; VAR_10 != 255; VAR_10++) {

  FUNC_0(VAR_0, &VAR_3);
  VAR_3.bmRequestType = 0x80;
  VAR_3.bRequest = 0x06;
  VAR_3.wValue = 0x0200 | VAR_10;
  VAR_3.wIndex = 0;
  VAR_3.wLength = 255;

  FUNC_8("Test #%d.1/3 ...\n", VAR_10);

  FUNC_9(-1,-1,0,0);

  VAR_6 = FUNC_7(VAR_4, &VAR_3, VAR_5,
      ((void*)0), 1000, 0);
  if (VAR_6 != 0) {
   FUNC_8("Last configuration index is: %d\n", VAR_10 - 1);
   break;
  }

  FUNC_8("Test #%d.2/3 ...\n", VAR_10);

  FUNC_9(VAR_8,VAR_9,1,1);

  VAR_6 = FUNC_7(VAR_4, &VAR_3, VAR_5,
      ((void*)0), 1000, 0);

  FUNC_9(-1,-1,0,0);

  VAR_6 = FUNC_7(VAR_4, &VAR_3, VAR_5,
      ((void*)0), 1000, 0);
  if (VAR_6 != 0) {
   FUNC_8("Cannot fetch descriptor (unexpected)\n");
   VAR_7++;
  }

  FUNC_8("Test #%d.3/3 ...\n", VAR_10);

  FUNC_9(VAR_8,VAR_9,0,1);

  VAR_6 = FUNC_7(VAR_4, &VAR_3, VAR_5,
      ((void*)0), 1000, 0);

  FUNC_9(-1,-1,0,0);

  VAR_6 = FUNC_7(VAR_4, &VAR_3, VAR_5,
      ((void*)0), 1000, 0);
  if (VAR_6 != 0) {
   FUNC_8("Cannot fetch descriptor (unexpected)\n");
   VAR_7++;
  }
 }

 FUNC_2(VAR_4);
 FUNC_3(VAR_4);

 FUNC_8("Test completed detecting %d failures\nDone\n\n", VAR_7);
}
