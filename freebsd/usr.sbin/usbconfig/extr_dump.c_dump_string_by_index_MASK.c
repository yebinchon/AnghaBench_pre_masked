
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct libusb20_device {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct libusb20_device*,scalar_t__,char*,int) ;
 scalar_t__ FUNC_3 (struct libusb20_device*,scalar_t__,int ,char*,int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;

void
FUNC_6(struct libusb20_device *VAR_0, uint8_t VAR_1)
{
 char *VAR_2;
 uint8_t VAR_3;
 uint8_t VAR_4;

 VAR_2 = FUNC_4(256);
 if (VAR_2 == ((void*)0))
  FUNC_0(1, "out of memory");

 if (VAR_1 == 0) {

  if (FUNC_3(VAR_0,
      VAR_1, 0, VAR_2, 256)) {
   FUNC_5("STRING_0x%02x = <read error>\n", VAR_1);
  } else {
   FUNC_5("STRING_0x%02x = ", VAR_1);
   VAR_4 = (uint8_t)VAR_2[0];
   for (VAR_3 = 0; VAR_3 != VAR_4; VAR_3++) {
    FUNC_5("0x%02x%s", (uint8_t)VAR_2[VAR_3],
        (VAR_3 != (VAR_4 - 1)) ? ", " : "");
   }
   FUNC_5("\n");
  }
 } else {

  if (FUNC_2(VAR_0,
      VAR_1, VAR_2, 256)) {
   FUNC_5("STRING_0x%02x = <read error>\n", VAR_1);
  } else {
   FUNC_5("STRING_0x%02x = <%s>\n", VAR_1, VAR_2);
  }
 }
 FUNC_1(VAR_2);
}
