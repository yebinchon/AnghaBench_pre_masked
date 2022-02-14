
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct LIBUSB20_INTERFACE_DESC_DECODED {int dummy; } ;
struct libusb20_interface {scalar_t__ num_endpoints; scalar_t__ endpoints; int extra; struct LIBUSB20_INTERFACE_DESC_DECODED desc; } ;
struct libusb20_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct LIBUSB20_INTERFACE_DESC_DECODED*) ;
 int FUNC_1 (struct libusb20_device*,scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct libusb20_device *VAR_1,
    struct libusb20_interface *VAR_2)
{
 struct LIBUSB20_INTERFACE_DESC_DECODED *VAR_3;
 uint8_t VAR_4;

 VAR_3 = &VAR_2->desc;
 FUNC_0(VAR_0, VAR_3);
 FUNC_2(&VAR_2->extra, "  " "  " "  ");

 for (VAR_4 = 0; VAR_4 != VAR_2->num_endpoints; VAR_4++) {
  FUNC_3("\n     Endpoint %u\n", VAR_4);
  FUNC_1(VAR_1, VAR_2->endpoints + VAR_4);
 }
 return;
}
