
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct modem {scalar_t__ duration; scalar_t__ data_stress_test; scalar_t__ control_ep_test; scalar_t__ errors; scalar_t__ usb_iface; struct libusb20_device* usb_dev; void* xfer_out; void* xfer_in; scalar_t__ use_vendor_specific; } ;
struct libusb20_device {int dummy; } ;


 struct libusb20_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct libusb20_device*,int,int,int,int ,scalar_t__*,scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (struct libusb20_device*,scalar_t__) ;
 int FUNC_3 (struct libusb20_device*) ;
 char* FUNC_4 (struct libusb20_device*) ;
 scalar_t__ FUNC_5 (struct libusb20_device*,int) ;
 void* FUNC_6 (struct libusb20_device*,int) ;
 int FUNC_7 (void*,int,int,scalar_t__) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct modem*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct modem*,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(struct modem *VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{
 struct libusb20_device *VAR_3;

 uint8_t VAR_4 = 0;
 uint8_t VAR_5;
 uint8_t VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;

 int VAR_9;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_8("USB device not found\n");
  return;
 }

 if (VAR_0->use_vendor_specific)
  FUNC_1(VAR_3, 255, 255, 255, 0, &VAR_8, &VAR_6, &VAR_7, 0);
 else
  FUNC_1(VAR_3, 2, 2, 1, 0, &VAR_8, &VAR_6, &VAR_7, 1);

 if ((VAR_6 == 0) || (VAR_7 == 0)) {
  FUNC_8("Could not find USB endpoints\n");
  FUNC_3(VAR_3);
  return;
 }
 FUNC_8("Attaching to: %s @ iface %d\n",
     FUNC_4(VAR_3), VAR_8);

 if (FUNC_5(VAR_3, 2)) {
  FUNC_8("Could not open USB device\n");
  FUNC_3(VAR_3);
  return;
 }
 if (FUNC_2(VAR_3, VAR_8)) {
  FUNC_8("WARNING: Could not detach kernel driver\n");
 }
 VAR_0->xfer_in = FUNC_6(VAR_3, 0);
 VAR_9 = FUNC_7(VAR_0->xfer_in, 65536 / 4, 1, VAR_6);
 if (VAR_9) {
  FUNC_8("Could not open USB endpoint %d\n", VAR_6);
  FUNC_3(VAR_3);
  return;
 }
 VAR_0->xfer_out = FUNC_6(VAR_3, 1);
 VAR_9 = FUNC_7(VAR_0->xfer_out, 65536 / 4, 1, VAR_7);
 if (VAR_9) {
  FUNC_8("Could not open USB endpoint %d\n", VAR_7);
  FUNC_3(VAR_3);
  return;
 }
 VAR_0->usb_dev = VAR_3;
 VAR_0->usb_iface = VAR_8;
 VAR_0->errors = 0;

 if (VAR_0->control_ep_test)
  VAR_4 += 7;

 if (VAR_0->data_stress_test)
  VAR_4 += 1;

 if (VAR_4 == 0) {
  FUNC_8("No tests selected\n");
 } else {

  if (VAR_0->control_ep_test) {
   for (VAR_5 = 1; VAR_5 != 8; VAR_5++) {
    FUNC_9(VAR_0,
        (VAR_0->duration + VAR_4 - 1) / VAR_4, VAR_5);
   }
  }
  if (VAR_0->data_stress_test) {
   FUNC_10(VAR_0,
       (VAR_0->duration + VAR_4 - 1) / VAR_4);
  }
 }

 FUNC_8("\nDone\n");

 FUNC_3(VAR_3);
}
