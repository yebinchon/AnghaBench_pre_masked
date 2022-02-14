
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct libusb20_device {int dummy; } ;
struct libusb20_config {int num_interface; TYPE_1__* interface; } ;
struct TYPE_2__ {int num_altsetting; } ;


 struct libusb20_device* FUNC_0 (int,int) ;
 struct libusb20_config* FUNC_1 (struct libusb20_device*,int ) ;
 int FUNC_2 (struct libusb20_device*) ;
 int FUNC_3 (struct libusb20_device*,int) ;
 int FUNC_4 (struct libusb20_device*) ;
 int FUNC_5 (struct libusb20_device*) ;
 int FUNC_6 (struct libusb20_device*,int ) ;
 scalar_t__ FUNC_7 (struct libusb20_device*,int,int) ;
 int FUNC_8 (char*,...) ;

void
FUNC_9(uint16_t VAR_0, uint16_t VAR_1)
{
 struct libusb20_device *VAR_2;
 struct libusb20_config *VAR_3;

 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_8("USB device not found\n");
  return;
 }
 FUNC_8("Starting set alternate setting test "
     "for VID=0x%04x PID=0x%04x\n", VAR_0, VAR_1);

 VAR_3 = FUNC_1(VAR_2,
     FUNC_5(VAR_2));
 if (VAR_3 == ((void*)0)) {
  FUNC_8("Could not get configuration descriptor\n");
  FUNC_4(VAR_2);
  return;
 }
 VAR_4 = 0;
 VAR_6 = 0;

 for (VAR_7 = 0; VAR_7 != VAR_3->num_interface; VAR_7++) {

  FUNC_3(VAR_2, VAR_7);

  VAR_5 = FUNC_6(VAR_2, 0);
  if (VAR_5)
   FUNC_8("ERROR could not open device\n");


  for (VAR_8 = 0; VAR_8 != VAR_3->interface[VAR_7].num_altsetting; VAR_8++) {

   VAR_4++;

   if (FUNC_7(VAR_2, VAR_7, VAR_8 + 1)) {
    FUNC_8("ERROR on interface %d alt %d\n", VAR_7, VAR_8 + 1);
    VAR_6++;
   }
  }



  VAR_4++;

  if (FUNC_7(VAR_2, VAR_7, 0)) {
   FUNC_8("ERROR on interface %d alt %d\n", VAR_7, 0);
   VAR_6++;
  }
  FUNC_2(VAR_2);
 }

 FUNC_4(VAR_2);

 FUNC_8("\n"
     "Test summary\n"
     "============\n"
     "Interfaces tested: %d\n"
     "Errors: %d\n", VAR_4, VAR_6);
}
