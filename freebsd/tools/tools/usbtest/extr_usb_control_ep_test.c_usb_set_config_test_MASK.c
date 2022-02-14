
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct libusb20_device {int dummy; } ;
struct LIBUSB20_DEVICE_DESC_DECODED {int bNumConfigurations; } ;


 struct libusb20_device* FUNC_0 (int,int) ;
 int FUNC_1 (struct libusb20_device*) ;
 struct LIBUSB20_DEVICE_DESC_DECODED* FUNC_2 (struct libusb20_device*) ;
 int FUNC_3 (struct libusb20_device*,int ) ;
 int FUNC_4 (struct libusb20_device*,int) ;
 int FUNC_5 (char*,...) ;

void
FUNC_6(uint16_t VAR_0, uint16_t VAR_1, uint32_t VAR_2)
{
 struct libusb20_device *VAR_3;
 struct LIBUSB20_DEVICE_DESC_DECODED *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0)) {
  FUNC_5("USB device not found\n");
  return;
 }
 VAR_6 = FUNC_3(VAR_3, 0);
 if (VAR_6) {
  FUNC_5("Could not open USB device\n");
  FUNC_1(VAR_3);
  return;
 }
 VAR_7 = 0;

 FUNC_5("Starting set config test for "
     "VID=0x%04x PID=0x%04x\n", VAR_0, VAR_1);

 for (VAR_5 = 255; VAR_5 > -1; VAR_5--) {

  VAR_6 = FUNC_4(VAR_3, VAR_5);
  if (VAR_6 == 0) {
   if (VAR_5 == 255) {
    FUNC_5("Unconfiguring USB device "
        "was successful\n");
   } else {
    FUNC_5("Setting configuration %d "
        "was successful\n", VAR_5);
   }
  } else {
   VAR_7++;
  }
 }

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 != ((void*)0))
  VAR_8 = VAR_4->bNumConfigurations + 1;
 else
  VAR_8 = 1;

 FUNC_5("\n\n"
     "Set configuration summary\n"
     "Valid count:  %d/%d %s\n"
     "Failed count: %d\n",
     256 - VAR_7, VAR_8,
     (VAR_8 == (256 - VAR_7)) ? "(expected)" : "(unexpected)",
     VAR_7);

 FUNC_1(VAR_3);
}
