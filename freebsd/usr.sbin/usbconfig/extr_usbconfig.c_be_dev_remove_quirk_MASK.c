
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint16_t ;
struct libusb20_quirk {int quirkname; void* bcdDeviceHigh; void* bcdDeviceLow; void* pid; void* vid; } ;
struct libusb20_backend {int dummy; } ;
typedef int q ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (struct libusb20_backend*,struct libusb20_quirk*) ;
 int FUNC_2 (struct libusb20_quirk*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(struct libusb20_backend *VAR_1,
    uint16_t VAR_2, uint16_t VAR_3, uint16_t VAR_4, uint16_t VAR_5,
    const char *VAR_6)
{
 struct libusb20_quirk VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.vid = VAR_2;
 VAR_7.pid = VAR_3;
 VAR_7.bcdDeviceLow = VAR_4;
 VAR_7.bcdDeviceHigh = VAR_5;
 FUNC_3(VAR_7.quirkname, VAR_6, sizeof(VAR_7.quirkname));

 VAR_8 = FUNC_1(VAR_1, &VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_0, "Removing quirk '%s' failed, continuing.\n", VAR_6);
 }
 return;
}
