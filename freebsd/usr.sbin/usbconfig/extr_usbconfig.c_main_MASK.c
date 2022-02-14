
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_2__ {int bmRequestType; int wLength; void* wIndex; void* wValue; void* bRequest; } ;
struct options {int got_add_quirk; char* quirkname; int got_remove_quirk; int got_add_device_quirk; int got_remove_device_quirk; int got_detach_kernel_driver; int got_dump_quirk_names; int got_dump_device_quirks; int got_show_iface_driver; int bus; int addr; int got_bus; int got_addr; int got_iface; int got_set_config; int got_set_alt; int got_set_template; int got_get_template; int got_dump_all_desc; int got_dump_device_desc; int got_dump_curr_config; int got_dump_all_config; int got_dump_info; int got_dump_string; int got_suspend; int got_resume; int got_power_off; int got_power_save; int got_power_on; int got_reset; int got_list; int got_do_request; scalar_t__ got_any; TYPE_1__ setup; int * buffer; void* string_index; int template; void* alt_index; void* config_index; void* iface; void* hi_rev; void* lo_rev; void* pid; void* vid; } ;
struct libusb20_backend {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,char*) ;
 int FUNC_4 (struct libusb20_backend*,struct options*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 struct libusb20_backend* FUNC_7 () ;
 int FUNC_8 (struct libusb20_backend*) ;
 int * FUNC_9 (int) ;
 void* FUNC_10 (char*,char*) ;
 struct options VAR_2 ;
 int FUNC_11 (char const*,char*,int*,int*) ;
 int FUNC_12 () ;

int
FUNC_13(int VAR_3, char **VAR_4)
{
 struct libusb20_backend *VAR_5;
 struct options *VAR_6 = &VAR_2;
 const char *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_3 < 1) {
  FUNC_12();
 }
 VAR_5 = FUNC_7();
 if (VAR_5 == ((void*)0))
  FUNC_2(1, "could not access USB backend\n");

 for (VAR_10 = 1; VAR_10 != VAR_3; VAR_10++) {


  VAR_11 = (VAR_3 - VAR_10 - 1);
  if (VAR_11 > 255)
   VAR_11 = 255;
  switch (FUNC_6(VAR_4[VAR_10], VAR_11)) {
  case 155:
   if (VAR_6->got_add_quirk) {
    FUNC_4(VAR_5, VAR_6);
   }
   VAR_6->quirkname = VAR_4[VAR_10 + 1];
   VAR_10++;

   VAR_6->got_add_quirk = 1;
   VAR_6->got_any++;
   break;

  case 137:
   if (VAR_6->got_remove_quirk) {
    FUNC_4(VAR_5, VAR_6);
   }
   VAR_6->quirkname = VAR_4[VAR_10 + 1];
   VAR_10++;

   VAR_6->got_remove_quirk = 1;
   VAR_6->got_any++;
   break;

  case 156:
   if (VAR_6->got_add_device_quirk) {
    FUNC_4(VAR_5, VAR_6);
   }
   VAR_6->vid = FUNC_10(VAR_4[VAR_10 + 1], "Vendor ID");
   VAR_6->pid = FUNC_10(VAR_4[VAR_10 + 2], "Product ID");
   VAR_6->lo_rev = FUNC_10(VAR_4[VAR_10 + 3], "Low Revision");
   VAR_6->hi_rev = FUNC_10(VAR_4[VAR_10 + 4], "High Revision");
   VAR_6->quirkname = VAR_4[VAR_10 + 5];
   VAR_10 += 5;

   VAR_6->got_add_device_quirk = 1;
   VAR_6->got_any++;
   break;

  case 138:
   if (VAR_6->got_remove_device_quirk) {
    FUNC_4(VAR_5, VAR_6);
   }
   VAR_6->vid = FUNC_10(VAR_4[VAR_10 + 1], "Vendor ID");
   VAR_6->pid = FUNC_10(VAR_4[VAR_10 + 2], "Product ID");
   VAR_6->lo_rev = FUNC_10(VAR_4[VAR_10 + 3], "Low Revision");
   VAR_6->hi_rev = FUNC_10(VAR_4[VAR_10 + 4], "High Revision");
   VAR_6->quirkname = VAR_4[VAR_10 + 5];
   VAR_10 += 5;
   VAR_6->got_remove_device_quirk = 1;
   VAR_6->got_any++;
   break;

  case 154:
   if (VAR_6->got_detach_kernel_driver)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_detach_kernel_driver = 1;
   VAR_6->got_any++;
   break;

  case 146:
   if (VAR_6->got_dump_quirk_names)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_dump_quirk_names = 1;
   VAR_6->got_any++;
   break;

  case 148:
   if (VAR_6->got_dump_device_quirks)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_dump_device_quirks = 1;
   VAR_6->got_any++;
   break;

  case 131:
   VAR_6->got_show_iface_driver = 1;
   break;

  case 129:
   if (VAR_6->got_any) {

    FUNC_4(VAR_5, VAR_6);
   }
   VAR_7 = VAR_4[VAR_10 + 1];

   if ((VAR_7[0] == 'u') &&
       (VAR_7[1] == 'g') &&
       (VAR_7[2] == 'e') &&
       (VAR_7[3] == 'n'))
    VAR_7 += 4;

   if ((FUNC_11(VAR_7, "%d.%d",
       &VAR_8, &VAR_9) != 2) ||
       (VAR_8 < 0) || (VAR_8 > 65535) ||
       (VAR_9 < 0) || (VAR_9 > 65535)) {
    FUNC_3(1, "cannot "
        "parse '%s'", VAR_4[VAR_10 + 1]);
   }
   VAR_6->bus = VAR_8;
   VAR_6->addr = VAR_9;
   VAR_6->got_bus = 1;
   VAR_6->got_addr = 1;
   VAR_10++;
   break;

  case 128:
   if (VAR_6->got_any) {

    FUNC_4(VAR_5, VAR_6);
   }
   VAR_6->bus = FUNC_10(VAR_4[VAR_10 + 1], "busnum");
   VAR_6->got_bus = 1;
   VAR_10++;
   break;
  case 157:
   VAR_6->addr = FUNC_10(VAR_4[VAR_10 + 1], "addr");
   VAR_6->got_addr = 1;
   VAR_10++;
   break;
  case 143:
   VAR_6->iface = FUNC_10(VAR_4[VAR_10 + 1], "iface");
   VAR_6->got_iface = 1;
   VAR_10++;
   break;
  case 133:
   if (VAR_6->got_set_config)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->config_index = FUNC_10(VAR_4[VAR_10 + 1], "cfg_index");
   VAR_6->got_set_config = 1;
   VAR_6->got_any++;
   VAR_10++;
   break;
  case 134:
   if (VAR_6->got_set_alt)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->alt_index = FUNC_10(VAR_4[VAR_10 + 1], "cfg_index");
   VAR_6->got_set_alt = 1;
   VAR_6->got_any++;
   VAR_10++;
   break;
  case 132:
   if (VAR_6->got_set_template)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->template = FUNC_5(VAR_4[VAR_10 + 1]);
   VAR_6->got_set_template = 1;
   VAR_6->got_any++;
   VAR_10++;
   break;
  case 144:
   if (VAR_6->got_get_template)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_get_template = 1;
   VAR_6->got_any++;
   break;
  case 151:
   if (VAR_6->got_dump_all_desc)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_dump_all_desc = 1;
   VAR_6->got_any++;
   break;
  case 149:
   if (VAR_6->got_dump_device_desc)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_dump_device_desc = 1;
   VAR_6->got_any++;
   break;
  case 150:
   if (VAR_6->got_dump_curr_config)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_dump_curr_config = 1;
   VAR_6->got_any++;
   break;
  case 152:
   if (VAR_6->got_dump_all_config)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_dump_all_config = 1;
   VAR_6->got_any++;
   break;
  case 147:
   if (VAR_6->got_dump_info)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_dump_info = 1;
   VAR_6->got_any++;
   break;
  case 145:
   if (VAR_6->got_dump_string)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->string_index = FUNC_10(VAR_4[VAR_10 + 1], "str_index");
   VAR_6->got_dump_string = 1;
   VAR_6->got_any++;
   VAR_10++;
   break;
  case 130:
   if (VAR_6->got_suspend)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_suspend = 1;
   VAR_6->got_any++;
   break;
  case 135:
   if (VAR_6->got_resume)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_resume = 1;
   VAR_6->got_any++;
   break;
  case 141:
   if (VAR_6->got_power_off)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_power_off = 1;
   VAR_6->got_any++;
   break;
  case 139:
   if (VAR_6->got_power_save)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_power_save = 1;
   VAR_6->got_any++;
   break;
  case 140:
   if (VAR_6->got_power_on)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_power_on = 1;
   VAR_6->got_any++;
   break;
  case 136:
   if (VAR_6->got_reset)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_reset = 1;
   VAR_6->got_any++;
   break;
  case 142:
   if (VAR_6->got_list)
    FUNC_1(VAR_4[VAR_10]);
   VAR_6->got_list = 1;
   VAR_6->got_any++;
   break;
  case 153:
   if (VAR_6->got_do_request)
    FUNC_1(VAR_4[VAR_10]);
   FUNC_0(VAR_0, &VAR_6->setup);
   VAR_6->setup.bmRequestType = FUNC_10(VAR_4[VAR_10 + 1], "bmReqTyp");
   VAR_6->setup.bRequest = FUNC_10(VAR_4[VAR_10 + 2], "bReq");
   VAR_6->setup.wValue = FUNC_10(VAR_4[VAR_10 + 3], "wVal");
   VAR_6->setup.wIndex = FUNC_10(VAR_4[VAR_10 + 4], "wIndex");
   VAR_6->setup.wLength = FUNC_10(VAR_4[VAR_10 + 5], "wLen");
   if (VAR_6->setup.wLength != 0) {
    VAR_6->buffer = FUNC_9(VAR_6->setup.wLength);
   } else {
    VAR_6->buffer = ((void*)0);
   }

   VAR_10 += 5;

   if (!(VAR_6->setup.bmRequestType &
       VAR_1)) {

    VAR_11 = (VAR_3 - VAR_10 - 1);
    if (VAR_11 < VAR_6->setup.wLength) {
     FUNC_2(1, "request data missing");
    }
    VAR_11 = VAR_6->setup.wLength;
    while (VAR_11--) {
     ((uint8_t *)VAR_6->buffer)[VAR_11] =
         FUNC_10(VAR_4[VAR_10 + VAR_11 + 1], "req_data");
    }
    VAR_10 += VAR_6->setup.wLength;
   }
   VAR_6->got_do_request = 1;
   VAR_6->got_any++;
   break;
  default:
   if (VAR_10 == 1) {
    VAR_7 = VAR_4[VAR_10];

    if ((VAR_7[0] == 'u') &&
        (VAR_7[1] == 'g') &&
        (VAR_7[2] == 'e') &&
        (VAR_7[3] == 'n'))
     VAR_7 += 4;

    if ((FUNC_11(VAR_7, "%d.%d",
        &VAR_8, &VAR_9) != 2) ||
        (VAR_8 < 0) || (VAR_8 > 65535) ||
        (VAR_9 < 0) || (VAR_9 > 65535)) {
     FUNC_12();
     break;
    }

    VAR_6->bus = VAR_8;
    VAR_6->addr = VAR_9;
    VAR_6->got_bus = 1;
    VAR_6->got_addr = 1;
    break;
   }
   FUNC_12();
   break;
  }
 }
 if (VAR_6->got_any) {

  FUNC_4(VAR_5, VAR_6);
 } else {

  VAR_6->got_list = 1;
  VAR_6->got_any++;
  FUNC_4(VAR_5, VAR_6);
 }

 FUNC_8(VAR_5);

 return (0);
}
