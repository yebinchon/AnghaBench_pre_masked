
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct libusb20_interface {scalar_t__ num_endpoints; struct libusb20_endpoint* endpoints; TYPE_1__ desc; } ;
struct TYPE_4__ {int bmAttributes; int bEndpointAddress; } ;
struct libusb20_endpoint {TYPE_2__ desc; } ;
struct libusb20_device {int dummy; } ;
struct libusb20_config {scalar_t__ num_interface; struct libusb20_interface* interface; } ;


 int FUNC_0 (struct libusb20_config*) ;
 struct libusb20_config* FUNC_1 (struct libusb20_device*,int ) ;
 int FUNC_2 (struct libusb20_device*) ;

void
FUNC_3(struct libusb20_device *VAR_0, uint8_t VAR_1,
    uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4,
    uint8_t *VAR_5, uint8_t *VAR_6, uint8_t *VAR_7, uint8_t VAR_8)
{
 struct libusb20_config *VAR_9;
 struct libusb20_interface *VAR_10;
 struct libusb20_endpoint *VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;

 *VAR_6 = 0;
 *VAR_7 = 0;
 *VAR_5 = 0;

 VAR_9 = FUNC_1(VAR_0,
     FUNC_2(VAR_0));

 if (VAR_9 == ((void*)0))
  return;

 for (VAR_12 = 0; VAR_12 != VAR_9->num_interface; VAR_12++) {

  VAR_13 = VAR_4;

  VAR_10 = (VAR_9->interface + VAR_12);

  if ((VAR_10->desc.bInterfaceClass == VAR_1) &&
      (VAR_10->desc.bInterfaceSubClass == VAR_2 ||
      VAR_2 == 255) &&
      (VAR_10->desc.bInterfaceProtocol == VAR_3 ||
      VAR_3 == 255)) {

   if (VAR_8) {
    VAR_12++;
    if (VAR_12 == VAR_9->num_interface)
     break;
    VAR_10 = (VAR_9->interface + VAR_12);
   }
   *VAR_5 = VAR_12;

   for (VAR_14 = 0; VAR_14 != VAR_10->num_endpoints; VAR_14++) {
    VAR_11 = VAR_10->endpoints + VAR_14;


    if ((VAR_11->desc.bmAttributes & 3) != 2)
     continue;

    if (VAR_11->desc.bEndpointAddress & 0x80)
     *VAR_6 = VAR_11->desc.bEndpointAddress;
    else
     *VAR_7 = VAR_11->desc.bEndpointAddress;
   }
   break;
  }
 }

 FUNC_0(VAR_9);
}
