
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct TYPE_2__ {int bmRequestType; } ;
struct options {int got_suspend; int got_resume; int got_reset; int got_set_config; int got_set_alt; int got_power_save; int got_power_on; int got_power_off; scalar_t__ got_any; int template; scalar_t__ bus; scalar_t__ addr; scalar_t__ got_dump_all_desc; scalar_t__ got_dump_curr_config; scalar_t__ got_dump_all_config; scalar_t__ got_dump_device_desc; int got_show_iface_driver; scalar_t__ got_list; scalar_t__ got_dump_info; int iface; scalar_t__ got_detach_kernel_driver; int alt_index; int config_index; scalar_t__ buffer; TYPE_1__ setup; scalar_t__ got_do_request; int string_index; scalar_t__ got_dump_string; int quirkname; scalar_t__ got_add_quirk; scalar_t__ got_remove_quirk; scalar_t__ got_addr; scalar_t__ got_bus; scalar_t__ got_get_template; scalar_t__ got_set_template; int hi_rev; int lo_rev; int pid; int vid; scalar_t__ got_add_device_quirk; scalar_t__ got_remove_device_quirk; scalar_t__ got_dump_device_quirks; scalar_t__ got_dump_quirk_names; } ;
struct libusb20_device {int dummy; } ;
struct libusb20_backend {int dummy; } ;
struct LIBUSB20_DEVICE_DESC_DECODED {int bcdDevice; int idProduct; int idVendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct libusb20_backend*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct libusb20_backend*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct libusb20_backend*) ;
 int FUNC_3 (struct libusb20_backend*) ;
 int FUNC_4 (struct libusb20_device*,int) ;
 int FUNC_5 (struct libusb20_device*) ;
 int FUNC_6 (struct libusb20_device*,int ) ;
 int FUNC_7 (struct libusb20_device*,int ) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int ,char*,int) ;
 scalar_t__ FUNC_10 (char) ;
 struct libusb20_device* FUNC_11 (struct libusb20_backend*,struct libusb20_device*) ;
 scalar_t__ FUNC_12 (struct libusb20_backend*,int*) ;
 scalar_t__ FUNC_13 (struct libusb20_backend*,int) ;
 scalar_t__ FUNC_14 (struct libusb20_device*) ;
 scalar_t__ FUNC_15 (struct libusb20_device*,int ) ;
 scalar_t__ FUNC_16 (struct libusb20_device*) ;
 scalar_t__ FUNC_17 (struct libusb20_device*) ;
 struct LIBUSB20_DEVICE_DESC_DECODED* FUNC_18 (struct libusb20_device*) ;
 scalar_t__ FUNC_19 (struct libusb20_device*,int ) ;
 scalar_t__ FUNC_20 (struct libusb20_device*,TYPE_1__*,scalar_t__,size_t*,int,int ) ;
 scalar_t__ FUNC_21 (struct libusb20_device*) ;
 scalar_t__ FUNC_22 (struct libusb20_device*,int ,int ) ;
 scalar_t__ FUNC_23 (struct libusb20_device*,int ) ;
 scalar_t__ FUNC_24 (struct libusb20_device*,int ) ;
 int FUNC_25 (char*,...) ;
 int FUNC_26 (char) ;
 int FUNC_27 (struct options*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_28(struct libusb20_backend *VAR_7, struct options *VAR_8)
{
 struct libusb20_device *VAR_9 = ((void*)0);
 uint32_t VAR_10 = 0;
 uint8_t VAR_11;


 if ((VAR_8->got_suspend +
     VAR_8->got_resume +
     VAR_8->got_reset +
     VAR_8->got_set_config +
     VAR_8->got_set_alt +
     VAR_8->got_power_save +
     VAR_8->got_power_on +
     VAR_8->got_power_off) > 1) {
  FUNC_8(1, "can only specify one of 'set_config', "
      "'set_alt', 'reset', 'suspend', 'resume', "
      "'power_save', 'power_on' and 'power_off' "
      "at the same time!");
 }
 if (VAR_8->got_dump_quirk_names) {
  VAR_8->got_any--;
  FUNC_3(VAR_7);
 }
 if (VAR_8->got_dump_device_quirks) {
  VAR_8->got_any--;
  FUNC_2(VAR_7);
 }
 if (VAR_8->got_remove_device_quirk) {
  VAR_8->got_any--;
  FUNC_1(VAR_7,
      VAR_8->vid, VAR_8->pid, VAR_8->lo_rev, VAR_8->hi_rev, VAR_8->quirkname);
 }
 if (VAR_8->got_add_device_quirk) {
  VAR_8->got_any--;
  FUNC_0(VAR_7,
      VAR_8->vid, VAR_8->pid, VAR_8->lo_rev, VAR_8->hi_rev, VAR_8->quirkname);
 }
 if (VAR_8->got_set_template) {
  VAR_8->got_any--;
  if (FUNC_13(VAR_7, VAR_8->template)) {
   FUNC_9(VAR_6, "Setting USB template %u failed, "
       "continuing.\n", VAR_8->template);
  }
 }
 if (VAR_8->got_get_template) {
  VAR_8->got_any--;
  if (FUNC_12(VAR_7, &VAR_8->template))
   FUNC_25("USB template: <unknown>\n");
  else
   FUNC_25("USB template: %u\n", VAR_8->template);
 }
 if (VAR_8->got_any == 0) {




  goto done;
 }
 while ((VAR_9 = FUNC_11(VAR_7, VAR_9))) {

  if (VAR_8->got_bus &&
      (FUNC_17(VAR_9) != VAR_8->bus)) {
   continue;
  }
  if (VAR_8->got_addr &&
      (FUNC_16(VAR_9) != VAR_8->addr)) {
   continue;
  }
  VAR_10++;

  if (VAR_8->got_remove_quirk) {
   struct LIBUSB20_DEVICE_DESC_DECODED *VAR_12;

   VAR_12 = FUNC_18(VAR_9);

   FUNC_1(VAR_7,
       VAR_12->idVendor, VAR_12->idProduct,
       VAR_12->bcdDevice, VAR_12->bcdDevice,
       VAR_8->quirkname);
  }

  if (VAR_8->got_add_quirk) {
   struct LIBUSB20_DEVICE_DESC_DECODED *VAR_13;

   VAR_13 = FUNC_18(VAR_9);

   FUNC_0(VAR_7,
       VAR_13->idVendor, VAR_13->idProduct,
       VAR_13->bcdDevice, VAR_13->bcdDevice,
       VAR_8->quirkname);
  }

  if (FUNC_19(VAR_9, 0)) {
   FUNC_8(1, "could not open device");
  }
  if (VAR_8->got_dump_string) {
   FUNC_7(VAR_9, VAR_8->string_index);
  }
  if (VAR_8->got_do_request) {
   uint16_t VAR_14;
   uint16_t VAR_15;

   if (FUNC_20(VAR_9, &VAR_8->setup,
       VAR_8->buffer, &VAR_14, 5000 , 0)) {
    FUNC_25("REQUEST = <ERROR>\n");
   } else if (!(VAR_8->setup.bmRequestType &
       VAR_0)) {
    FUNC_25("REQUEST = <OK>\n");
   } else {
    VAR_15 = VAR_14;
    FUNC_25("REQUEST = <");
    for (VAR_15 = 0; VAR_15 != VAR_14; VAR_15++) {
     FUNC_25("0x%02x%s",
         ((uint8_t *)VAR_8->buffer)[VAR_15],
         (VAR_15 == (VAR_14 - 1)) ? "" : " ");
    }
    FUNC_25("><");
    for (VAR_15 = 0; VAR_15 != VAR_14; VAR_15++) {
     char VAR_16;

     VAR_16 = ((uint8_t *)VAR_8->buffer)[VAR_15];
     if ((VAR_16 != '<') &&
         (VAR_16 != '>') && FUNC_10(VAR_16)) {
      FUNC_26(VAR_16);
     }
    }
    FUNC_25(">\n");
   }
  }
  if (VAR_8->got_set_config) {
   if (FUNC_23(VAR_9,
       VAR_8->config_index)) {
    FUNC_8(1, "could not set config index");
   }
  }
  if (VAR_8->got_set_alt) {
   if (FUNC_22(VAR_9, VAR_8->iface,
       VAR_8->alt_index)) {
    FUNC_8(1, "could not set alternate setting");
   }
  }
  if (VAR_8->got_reset) {
   if (FUNC_21(VAR_9)) {
    FUNC_8(1, "could not reset device");
   }
  }
  if (VAR_8->got_suspend) {
   if (FUNC_24(VAR_9,
       VAR_5)) {
    FUNC_8(1, "could not set suspend");
   }
  }
  if (VAR_8->got_resume) {
   if (FUNC_24(VAR_9,
       VAR_3)) {
    FUNC_8(1, "could not set resume");
   }
  }
  if (VAR_8->got_power_off) {
   if (FUNC_24(VAR_9,
       VAR_1)) {
    FUNC_8(1, "could not set power OFF");
   }
  }
  if (VAR_8->got_power_save) {
   if (FUNC_24(VAR_9,
       VAR_4)) {
    FUNC_8(1, "could not set power SAVE");
   }
  }
  if (VAR_8->got_power_on) {
   if (FUNC_24(VAR_9,
       VAR_2)) {
    FUNC_8(1, "could not set power ON");
   }
  }
  if (VAR_8->got_detach_kernel_driver) {
   if (FUNC_15(VAR_9, VAR_8->iface)) {
    FUNC_8(1, "could not detach kernel driver");
   }
  }
  VAR_11 =
      (VAR_8->got_dump_all_desc ||
      VAR_8->got_dump_device_desc ||
      VAR_8->got_dump_curr_config ||
      VAR_8->got_dump_all_config ||
      VAR_8->got_dump_info);

  if (VAR_8->got_list || VAR_11) {
   FUNC_6(VAR_9,
       VAR_8->got_show_iface_driver);
  }
  if (VAR_8->got_dump_device_desc) {
   FUNC_25("\n");
   FUNC_5(VAR_9);
  }
  if (VAR_8->got_dump_all_config) {
   FUNC_25("\n");
   FUNC_4(VAR_9, 1);
  } else if (VAR_8->got_dump_curr_config) {
   FUNC_25("\n");
   FUNC_4(VAR_9, 0);
  } else if (VAR_8->got_dump_all_desc) {
   FUNC_25("\n");
   FUNC_5(VAR_9);
   FUNC_4(VAR_9, 1);
  }
  if (VAR_11) {
   FUNC_25("\n");
  }
  if (FUNC_14(VAR_9)) {
   FUNC_8(1, "could not close device");
  }
 }

 if (VAR_10 == 0) {
  FUNC_25("No device match or lack of permissions.\n");
 }
done:
 FUNC_27(VAR_8);

 return;
}
