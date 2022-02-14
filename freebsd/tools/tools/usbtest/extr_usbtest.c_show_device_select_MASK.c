
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char*,char*) ;

__attribute__((used)) static void
FUNC_9(uint8_t VAR_0)
{
 uint8_t VAR_1;

 while (1) {

  VAR_1 = FUNC_8(VAR_0, "Select Device Mode Test Group",
      "1) Audio (UAUDIO)\n"
      "2) Mass Storage (MSC)\n"
      "3) Ethernet (CDCE)\n"
      "4) Keyboard Input Device (UKBD)\n"
      "5) Mouse Input Device (UMS)\n"
      "6) Message Transfer Protocol (MTP)\n"
      "7) Modem (CDC)\n"
      "8) Generic Endpoint Loopback (GENERIC)\n"
      "x) Return to previous menu\n");

  switch (VAR_1) {
  case 0:
   break;
  case 1:
   FUNC_0(VAR_0 + 1);
   break;
  case 2:
   FUNC_6(VAR_0 + 1);
   break;
  case 3:
   FUNC_1(VAR_0 + 1);
   break;
  case 4:
   FUNC_3(VAR_0 + 1);
   break;
  case 5:
   FUNC_5(VAR_0 + 1);
   break;
  case 6:
   FUNC_7(VAR_0 + 1);
   break;
  case 7:
   FUNC_4(VAR_0 + 1);
   break;
  case 8:
   FUNC_2(VAR_0 + 1);
   break;
  default:
   return;
  }
 }
}
