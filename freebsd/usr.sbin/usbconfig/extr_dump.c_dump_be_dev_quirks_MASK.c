
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct libusb20_quirk {char* quirkname; int vid; int pid; int bcdDeviceLow; int bcdDeviceHigh; } ;
struct libusb20_backend {int dummy; } ;
typedef int q ;


 int FUNC_0 (struct libusb20_backend*,int,struct libusb20_quirk*) ;
 int FUNC_1 (struct libusb20_quirk*,int ,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;

void
FUNC_4(struct libusb20_backend *VAR_0)
{
 struct libusb20_quirk VAR_1;
 uint16_t VAR_2;
 int VAR_3;

 FUNC_1(&VAR_1, 0, sizeof(VAR_1));

 FUNC_2("\nDumping current device quirks:\n\n");

 for (VAR_2 = 0; VAR_2 != 0xFFFF; VAR_2++) {

  VAR_3 = FUNC_0(VAR_0, VAR_2, &VAR_1);
  if (VAR_3) {
   if (VAR_2 == 0) {
    FUNC_2("No device quirks - maybe the USB quirk "
        "module has not been loaded.\n");
   }
   break;
  }
  if (FUNC_3(VAR_1.quirkname, "UQ_NONE")) {
   FUNC_2("VID=0x%04x PID=0x%04x REVLO=0x%04x "
       "REVHI=0x%04x QUIRK=%s\n",
       VAR_1.vid, VAR_1.pid, VAR_1.bcdDeviceLow,
       VAR_1.bcdDeviceHigh, VAR_1.quirkname);
  }
 }
 FUNC_2("\n");
 return;
}
