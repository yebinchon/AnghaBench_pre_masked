
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct picolcd_data {int addr_sz; } ;
struct hid_report {int id; } ;
struct hid_device {int debug_wait; int debug_list; } ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,size_t*,size_t) ;
 char** VAR_2 ;
 int FUNC_2 (struct hid_device*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,char*,...) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct picolcd_data *VAR_3,
  struct hid_device *VAR_4, struct hid_report *VAR_5,
  u8 *VAR_6, int VAR_7)
{
 char *VAR_8;



 if (FUNC_5(&VAR_4->debug_list))
  return;

 VAR_8 = FUNC_4(256, VAR_1);
 if (!VAR_8)
  return;

 switch (VAR_5->id) {
 case 134:

  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_ERROR_CODE", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);
  if (VAR_6[2] < FUNC_0(VAR_2))
   FUNC_6(VAR_8, 256, "\tError code 0x%02x (%s) in reply to report 0x%02x\n",
     VAR_6[2], VAR_2[VAR_6[2]], VAR_6[1]);
  else
   FUNC_6(VAR_8, 256, "\tError code 0x%02x in reply to report 0x%02x\n",
     VAR_6[2], VAR_6[1]);
  FUNC_2(VAR_4, VAR_8);
  break;
 case 131:

  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_KEY_STATE", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);
  if (VAR_6[1] == 0)
   FUNC_6(VAR_8, 256, "\tNo key pressed\n");
  else if (VAR_6[2] == 0)
   FUNC_6(VAR_8, 256, "\tOne key pressed: 0x%02x (%d)\n",
     VAR_6[1], VAR_6[1]);
  else
   FUNC_6(VAR_8, 256, "\tTwo keys pressed: 0x%02x (%d), 0x%02x (%d)\n",
     VAR_6[1], VAR_6[1], VAR_6[2], VAR_6[2]);
  FUNC_2(VAR_4, VAR_8);
  break;
 case 132:

  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_IR_DATA", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);
  if (VAR_6[1] == 0) {
   FUNC_6(VAR_8, 256, "\tUnexpectedly 0 data length\n");
   FUNC_2(VAR_4, VAR_8);
  } else if (VAR_6[1] + 1 <= VAR_7) {
   FUNC_6(VAR_8, 256, "\tData length: %d\n\tIR Data: ",
     VAR_6[1]);
   FUNC_2(VAR_4, VAR_8);
   FUNC_1(VAR_8, 256, VAR_6+2, VAR_6[1]);
   FUNC_2(VAR_4, VAR_8);
  } else {
   FUNC_6(VAR_8, 256, "\tOverflowing data length: %d\n",
     VAR_6[1]-1);
   FUNC_2(VAR_4, VAR_8);
  }
  break;
 case 135:

  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_EE_DATA", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);
  FUNC_6(VAR_8, 256, "\tData address: 0x%02x%02x\n",
    VAR_6[2], VAR_6[1]);
  FUNC_2(VAR_4, VAR_8);
  FUNC_6(VAR_8, 256, "\tData length: %d\n", VAR_6[3]);
  FUNC_2(VAR_4, VAR_8);
  if (VAR_6[3] == 0) {
   FUNC_6(VAR_8, 256, "\tNo data\n");
   FUNC_2(VAR_4, VAR_8);
  } else if (VAR_6[3] + 4 <= VAR_7) {
   FUNC_6(VAR_8, 256, "\tData: ");
   FUNC_2(VAR_4, VAR_8);
   FUNC_1(VAR_8, 256, VAR_6+4, VAR_6[3]);
   FUNC_2(VAR_4, VAR_8);
  } else {
   FUNC_6(VAR_8, 256, "\tData overflowed\n");
   FUNC_2(VAR_4, VAR_8);
  }
  break;
 case 130:

  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_MEMORY", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);
  switch (VAR_3->addr_sz) {
  case 2:
   FUNC_6(VAR_8, 256, "\tData address: 0x%02x%02x\n",
     VAR_6[2], VAR_6[1]);
   FUNC_2(VAR_4, VAR_8);
   FUNC_6(VAR_8, 256, "\tData length: %d\n", VAR_6[3]);
   FUNC_2(VAR_4, VAR_8);
   if (VAR_6[3] == 0) {
    FUNC_6(VAR_8, 256, "\tNo data\n");
   } else if (VAR_6[3] + 4 <= VAR_7) {
    FUNC_6(VAR_8, 256, "\tData: ");
    FUNC_2(VAR_4, VAR_8);
    FUNC_1(VAR_8, 256, VAR_6+4, VAR_6[3]);
   } else {
    FUNC_6(VAR_8, 256, "\tData overflowed\n");
   }
   break;
  case 3:
   FUNC_6(VAR_8, 256, "\tData address: 0x%02x%02x%02x\n",
     VAR_6[3], VAR_6[2], VAR_6[1]);
   FUNC_2(VAR_4, VAR_8);
   FUNC_6(VAR_8, 256, "\tData length: %d\n", VAR_6[4]);
   FUNC_2(VAR_4, VAR_8);
   if (VAR_6[4] == 0) {
    FUNC_6(VAR_8, 256, "\tNo data\n");
   } else if (VAR_6[4] + 5 <= VAR_7) {
    FUNC_6(VAR_8, 256, "\tData: ");
    FUNC_2(VAR_4, VAR_8);
    FUNC_1(VAR_8, 256, VAR_6+5, VAR_6[4]);
   } else {
    FUNC_6(VAR_8, 256, "\tData overflowed\n");
   }
   break;
  default:
   FUNC_6(VAR_8, 256, "\tNot supported\n");
  }
  FUNC_2(VAR_4, VAR_8);
  break;
 case 128:
  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_VERSION", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);
  FUNC_6(VAR_8, 256, "\tFirmware version: %d.%d\n",
    VAR_6[2], VAR_6[1]);
  FUNC_2(VAR_4, VAR_8);
  break;
 case 139:
  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_BL_ERASE_MEMORY", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);

  break;
 case 138:
  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_BL_READ_MEMORY", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);

  break;
 case 137:
  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_BL_WRITE_MEMORY", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);

  break;
 case 136:
  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_DEVID", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);
  FUNC_6(VAR_8, 256, "\tSerial: 0x%02x%02x%02x%02x\n",
    VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4]);
  FUNC_2(VAR_4, VAR_8);
  FUNC_6(VAR_8, 256, "\tType: 0x%02x\n",
    VAR_6[5]);
  FUNC_2(VAR_4, VAR_8);
  break;
 case 129:
  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_SPLASH_SIZE", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);
  FUNC_6(VAR_8, 256, "\tTotal splash space: %d\n",
    (VAR_6[2] << 8) | VAR_6[1]);
  FUNC_2(VAR_4, VAR_8);
  FUNC_6(VAR_8, 256, "\tUsed splash space: %d\n",
    (VAR_6[4] << 8) | VAR_6[3]);
  FUNC_2(VAR_4, VAR_8);
  break;
 case 133:
  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "REPORT_HOOK_VERSION", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);
  FUNC_6(VAR_8, 256, "\tFirmware version: %d.%d\n",
    VAR_6[1], VAR_6[2]);
  FUNC_2(VAR_4, VAR_8);
  break;
 default:
  FUNC_6(VAR_8, 256, "report %s (%d, size=%d)\n",
   "<unknown>", VAR_5->id, VAR_7-1);
  FUNC_2(VAR_4, VAR_8);
  break;
 }
 FUNC_7(&VAR_4->debug_wait);
 FUNC_3(VAR_8);
}
