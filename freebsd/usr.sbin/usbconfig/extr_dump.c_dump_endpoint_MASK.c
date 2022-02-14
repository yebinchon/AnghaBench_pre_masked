
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LIBUSB20_ENDPOINT_DESC_DECODED {int dummy; } ;
struct libusb20_endpoint {int extra; struct LIBUSB20_ENDPOINT_DESC_DECODED desc; } ;
struct libusb20_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct LIBUSB20_ENDPOINT_DESC_DECODED*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void
FUNC_2(struct libusb20_device *VAR_1,
    struct libusb20_endpoint *VAR_2)
{
 struct LIBUSB20_ENDPOINT_DESC_DECODED *VAR_3;

 VAR_3 = &VAR_2->desc;
 FUNC_0(VAR_0, VAR_3);
 FUNC_1(&VAR_2->extra, "  " "  " "  ");
 return;
}
