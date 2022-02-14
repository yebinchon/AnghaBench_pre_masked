
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct libusb20_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct libusb20_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct timeval*,int ) ;
 scalar_t__ FUNC_3 (struct libusb20_device*) ;
 int FUNC_4 (struct libusb20_device*) ;
 int FUNC_5 (struct libusb20_device*,int ) ;
 scalar_t__ FUNC_6 (struct libusb20_device*) ;
 int FUNC_7 (char*,...) ;
 int VAR_0 ;
 int FUNC_8 (struct timeval*,struct timeval*,struct timeval*) ;
 int FUNC_9 (int) ;

void
FUNC_10(uint16_t VAR_1, uint16_t VAR_2, uint32_t VAR_3)
{
 struct timeval VAR_4;
 struct timeval VAR_5;
 struct timeval VAR_6;

 struct libusb20_device *VAR_7;

 int VAR_8;
 int VAR_9;
 int VAR_10;

 time_t VAR_11;



 VAR_7 = FUNC_1(VAR_1, VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_7("USB device not found\n");
  return;
 }
 VAR_8 = FUNC_5(VAR_7, 0);
 if (VAR_8) {
  FUNC_4(VAR_7);
  FUNC_7("Could not open USB device\n");
  return;
 }
 VAR_9 = 0;

 VAR_10 = 0;

 FUNC_2(&VAR_5, 0);

 VAR_11 = VAR_5.tv_sec;

 while (1) {

  FUNC_2(&VAR_4, 0);

  if (VAR_11 != VAR_4.tv_sec) {

   FUNC_7("STATUS: ID=%u, ERR=%u\n",
       (int)VAR_9, (int)VAR_10);

   FUNC_0(VAR_0);

   VAR_11 = VAR_4.tv_sec;
  }
  FUNC_8(&VAR_4, &VAR_5, &VAR_6);

  if ((VAR_6.tv_sec < 0) || (VAR_6.tv_sec >= (int)VAR_3))
   break;

  if (FUNC_6(VAR_7)) {
   VAR_10++;
   FUNC_9(50000);
  }
  if (FUNC_3(VAR_7) != 0) {
   FUNC_7("Device disconnected\n");
   break;
  }
  VAR_9++;
 }

 FUNC_6(VAR_7);

 FUNC_4(VAR_7);
}
