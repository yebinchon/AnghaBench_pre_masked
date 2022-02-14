
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int force_fs ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (char*,int *,int *,int*,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int,int) ;
 int FUNC_13 (int,int,int) ;
 int FUNC_14 (int,char*,char*,int,int,char*,int) ;

__attribute__((used)) static void
FUNC_15(uint8_t VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;
 uint32_t VAR_4 = 60;

 uint16_t VAR_5 = 0;
 uint16_t VAR_6 = 0;
 uint8_t VAR_7;

 while (1) {

  VAR_3 = FUNC_5("hw.usb.ehci.no_hs", ((void*)0), ((void*)0),
      &VAR_2, sizeof(VAR_2));

  if (VAR_3 != 0) {
   FUNC_1("WARNING: Could not set non-FS mode "
       "to %d (error=%d)\n", VAR_2, VAR_0);
  }
  VAR_7 = FUNC_14(VAR_1, "Select Host Mode Test (via LibUSB)",
      " 1) Select USB device (VID=0x%04x, PID=0x%04x)\n"
      " 2) Manually enter USB vendor and product ID\n"
      " 3) Force FULL speed operation: <%s>\n"
      " 4) Mass Storage (UMASS)\n"
      " 5) Modem (UMODEM)\n"
      "10) Start String Descriptor Test\n"
      "11) Start Port Reset Test\n"
      "12) Start Set Config Test\n"
      "13) Start Get Descriptor Test\n"
      "14) Start Suspend and Resume Test\n"
      "15) Start Set and Clear Endpoint Stall Test\n"
      "16) Start Set Alternate Interface Setting Test\n"
      "17) Start Invalid Control Request Test\n"
      "30) Duration: <%d> seconds\n"
      "x) Return to previous menu\n",
      VAR_5, VAR_6,
      VAR_2 ? "YES" : "NO",
      (int)VAR_4);

  switch (VAR_7) {
  case 0:
   break;
  case 1:
   FUNC_2(VAR_1 + 1, &VAR_5, &VAR_6);
   break;
  case 2:
   VAR_5 = FUNC_0() & 0xFFFF;
   VAR_6 = FUNC_0() & 0xFFFF;
   break;
  case 3:
   VAR_2 ^= 1;
   break;
  case 4:
   FUNC_4(VAR_1 + 1, VAR_5, VAR_6, VAR_4);
   break;
  case 5:
   FUNC_3(VAR_1 + 1, VAR_5, VAR_6, VAR_4);
   break;
  case 10:
   FUNC_8(VAR_5, VAR_6);
   break;
  case 11:
   FUNC_9(VAR_5, VAR_6, VAR_4);
   break;
  case 12:
   FUNC_12(VAR_5, VAR_6, VAR_4);
   break;
  case 13:
   FUNC_7(VAR_5, VAR_6, VAR_4);
   break;
  case 14:
   FUNC_13(VAR_5, VAR_6, VAR_4);
   break;
  case 15:
   FUNC_11(VAR_5, VAR_6);
   break;
  case 16:
   FUNC_10(VAR_5, VAR_6);
   break;
  case 17:
   FUNC_6(VAR_5, VAR_6);
   break;
  case 30:
   VAR_4 = FUNC_0();
   break;
  default:
   return;
  }
 }
}
