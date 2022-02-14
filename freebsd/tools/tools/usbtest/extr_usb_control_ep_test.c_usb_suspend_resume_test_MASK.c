
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct libusb20_device {int dummy; } ;
typedef int ptimo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct libusb20_device* FUNC_1 (int,int) ;
 int FUNC_2 (struct timeval*,int ) ;
 scalar_t__ FUNC_3 (struct libusb20_device*) ;
 int FUNC_4 (struct libusb20_device*) ;
 int FUNC_5 (struct libusb20_device*) ;
 int FUNC_6 (struct libusb20_device*,int ) ;
 int FUNC_7 (struct libusb20_device*,int) ;
 int FUNC_8 (char*,...) ;
 int VAR_3 ;
 int FUNC_9 (char*,int *,int *,int*,int) ;
 int FUNC_10 (struct timeval*,struct timeval*,struct timeval*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int) ;

void
FUNC_13(uint16_t VAR_4, uint16_t VAR_5, uint32_t VAR_6)
{
 struct timeval VAR_7;
 struct timeval VAR_8;
 struct timeval VAR_9;

 struct libusb20_device *VAR_10;

 time_t VAR_11;

 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_14 = 1;

 VAR_13 = FUNC_9("hw.usb.power_timeout", ((void*)0), ((void*)0),
     &VAR_14, sizeof(VAR_14));

 if (VAR_13 != 0) {
  FUNC_8("WARNING: Could not set power "
      "timeout to 1 (error=%d) \n", VAR_2);
 }
 VAR_10 = FUNC_1(VAR_4, VAR_5);
 if (VAR_10 == ((void*)0)) {
  FUNC_8("USB device not found\n");
  return;
 }
 VAR_13 = FUNC_6(VAR_10, 0);
 if (VAR_13) {
  FUNC_8("Could not open USB device\n");
  FUNC_4(VAR_10);
  return;
 }
 VAR_16 = FUNC_5(VAR_10);

 FUNC_8("Starting suspend and resume "
     "test for VID=0x%04x PID=0x%04x\n", VAR_4, VAR_5);

 VAR_12 = 0;
 VAR_15 = 0;

 FUNC_2(&VAR_8, 0);

 VAR_11 = VAR_8.tv_sec;

 while (1) {

  if (FUNC_3(VAR_10) != 0) {
   FUNC_8("Device disconnected\n");
   break;
  }
  FUNC_2(&VAR_7, 0);

  if (VAR_11 != VAR_7.tv_sec) {

   FUNC_8("STATUS: ID=%u, ERR=%u\n",
       (int)VAR_12, (int)VAR_15);

   FUNC_0(VAR_3);

   VAR_11 = VAR_7.tv_sec;
  }
  FUNC_10(&VAR_7, &VAR_8, &VAR_9);

  if ((VAR_9.tv_sec < 0) || (VAR_9.tv_sec >= (int)VAR_6))
   break;

  VAR_13 = FUNC_7(VAR_10, (VAR_12 & 1) ?
      VAR_0 : VAR_1);

  if (VAR_13)
   VAR_15++;


  FUNC_12(4100000 +
      (((uint32_t)FUNC_11()) % 2000000U));

  VAR_12++;
 }


 FUNC_7(VAR_10, VAR_16);

 FUNC_4(VAR_10);
}
