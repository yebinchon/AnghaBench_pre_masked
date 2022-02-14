
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_0, int VAR_1)
{
 static const char *VAR_2[] = {
  "", "Modem", "Data", "Fax", "Voice", "Data modem",
  "Fax/modem", "Voice", " (Data)", " (Fax)", " (Voice)"
 };

 if (VAR_1 < 1)
  return;
 switch (VAR_0[0]) {
 case 0:
 case 8:
 case 9:
 case 10:
  FUNC_0("\tSerial interface extension:%s\n", VAR_2[*VAR_0]);
  if (VAR_1 < 4)
   goto err;
  switch (VAR_0[1] & 0x1F) {
  default:
   FUNC_0("\t\tUnknown device");
   break;
  case 0:
   FUNC_0("\t\t8250 UART");
   break;
  case 1:
   FUNC_0("\t\t16450 UART");
   break;
  case 2:
   FUNC_0("\t\t16550 UART");
   break;
  }
  FUNC_0(", Parity - %s%s%s%s\n",
         (VAR_0[2] & 1) ? "Space," : "",
         (VAR_0[2] & 2) ? "Mark," : "",
         (VAR_0[2] & 4) ? "Odd," : "",
         (VAR_0[2] & 8) ? "Even" : "");
  FUNC_0("\t\tData bit - %s%s%s%s Stop bit - %s%s%s\n",
         (VAR_0[3] & 1) ? "5bit," : "",
         (VAR_0[3] & 2) ? "6bit," : "",
         (VAR_0[3] & 4) ? "7bit," : "",
         (VAR_0[3] & 8) ? "8bit," : "",
         (VAR_0[3] & 0x10) ? "1bit," : "",
         (VAR_0[3] & 0x20) ? "1.5bit," : "",
         (VAR_0[3] & 0x40) ? "2bit" : "");
  break;
 case 1:
 case 5:
 case 6:
 case 7:
  FUNC_0("\t%s interface capabilities:\n", VAR_2[*VAR_0]);
  if (VAR_1 < 9)
   goto err;
  break;
 case 2:
  FUNC_0("\tData modem services available:\n");
  break;
 case 0x13:
 case 0x23:
 case 0x33:
  FUNC_0("\tFax%d/modem services available:\n", *VAR_0 >> 4);
  break;
 case 0x84:
  FUNC_0("\tVoice services available:\n");
  break;
 err:
  FUNC_0("\tWrong length for serial extension tuple\n");
  return;
 }
}
