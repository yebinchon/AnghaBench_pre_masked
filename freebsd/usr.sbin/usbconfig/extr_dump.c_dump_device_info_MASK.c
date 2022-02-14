
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb20_device {int dummy; } ;
typedef int buf ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct libusb20_device*) ;
 int FUNC_4 (struct libusb20_device*) ;
 int FUNC_5 (struct libusb20_device*) ;
 char* FUNC_6 (struct libusb20_device*) ;
 scalar_t__ FUNC_7 (struct libusb20_device*,int,char*,int) ;
 int FUNC_8 (struct libusb20_device*) ;
 int FUNC_9 (struct libusb20_device*) ;
 unsigned int FUNC_10 (struct libusb20_device*) ;
 int FUNC_11 (struct libusb20_device*) ;
 int FUNC_12 (char*,...) ;

void
FUNC_13(struct libusb20_device *VAR_0, uint8_t VAR_1)
{
 char VAR_2[128];
 uint8_t VAR_3;
 unsigned int VAR_4;

 VAR_4 = FUNC_10(VAR_0);

 FUNC_12("%s, cfg=%u md=%s spd=%s pwr=%s (%umA)\n",
     FUNC_6(VAR_0),
     FUNC_5(VAR_0),
     FUNC_0(FUNC_8(VAR_0)),
     FUNC_2(FUNC_11(VAR_0)),
     FUNC_1(FUNC_9(VAR_0)),
     VAR_4);

 if (!VAR_1)
  return;

 for (VAR_3 = 0; VAR_3 != 255; VAR_3++) {
  if (FUNC_7(VAR_0, VAR_3, VAR_2, sizeof(VAR_2)))
   break;
  if (VAR_2[0] == 0)
   continue;
  FUNC_12("ugen%u.%u.%u: %s\n",
      FUNC_4(VAR_0),
      FUNC_3(VAR_0), VAR_3, VAR_2);
 }
}
