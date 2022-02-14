
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct libusb20_device {int dummy; } ;


 struct libusb20_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct libusb20_device*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(uint16_t VAR_0, uint16_t VAR_1, uint32_t VAR_2)
{
 struct libusb20_device *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0)) {
  FUNC_2("USB device not found\n");
  return;
 }
 FUNC_1(VAR_3);
}
