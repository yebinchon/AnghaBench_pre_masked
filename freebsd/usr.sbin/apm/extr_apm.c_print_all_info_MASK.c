
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int time_t ;
struct tm {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct apm_pwstatus {int ap_device; int ap_batt_flag; int eax; int ecx; int edx; int esi; void* ebx; int edi; int ap_batt_time; int ap_batt_life; int ap_batt_stat; } ;
struct apm_bios_arg {int ap_device; int ap_batt_flag; int eax; int ecx; int edx; int esi; void* ebx; int edi; int ap_batt_time; int ap_batt_life; int ap_batt_stat; } ;
typedef int buf ;
typedef int args ;
typedef int aps ;
typedef TYPE_1__* apm_info_t ;
struct TYPE_3__ {int ai_major; int ai_minor; int ai_acline; int ai_infoversion; unsigned int ai_batteries; int ai_capabilities; int ai_batt_time; int ai_batt_life; int ai_batt_stat; scalar_t__ ai_status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct apm_pwstatus*,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (int,int ,struct apm_pwstatus*) ;
 struct tm* FUNC_4 (int*) ;
 int FUNC_5 (struct tm*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,char*,struct tm*) ;
 int FUNC_11 (struct tm*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(int VAR_10, apm_info_t VAR_11, int VAR_12)
{
 struct apm_bios_arg VAR_13;
 int VAR_14;
 const char *VAR_15[] = { "off-line", "on-line" , "backup power"};

 FUNC_9("APM version: %d.%d\n", VAR_11->ai_major, VAR_11->ai_minor);
 FUNC_9("APM Management: %s\n", VAR_11->ai_status ? "Enabled" : "Disabled");
 FUNC_9("AC Line status: ");
 if (VAR_11->ai_acline == VAR_6)
  FUNC_9("unknown\n");
 else if (VAR_11->ai_acline > 2)
  FUNC_9("invalid value (0x%x)\n", VAR_11->ai_acline);
 else
  FUNC_9("%s\n", VAR_15[VAR_11->ai_acline]);

 FUNC_7(VAR_11->ai_batt_stat);
 FUNC_6(VAR_11->ai_batt_life);
 FUNC_8(VAR_11->ai_batt_time);

 if (VAR_11->ai_infoversion >= 1) {
  FUNC_9("Number of batteries: ");
  if (VAR_11->ai_batteries == ~0U)
   FUNC_9("unknown\n");
  else {
   u_int VAR_16;
   struct apm_pwstatus VAR_17;

   FUNC_9("%d\n", VAR_11->ai_batteries);
   for (VAR_16 = 0; VAR_16 < VAR_11->ai_batteries; ++VAR_16) {
    FUNC_2(&VAR_17, sizeof(VAR_17));
    VAR_17.ap_device = VAR_8 + VAR_16;
    if (FUNC_3(VAR_10, VAR_1, &VAR_17) == -1)
     continue;
    FUNC_9("Battery %d:\n", VAR_16);
    if (VAR_17.ap_batt_flag & VAR_2) {
     FUNC_9("not present\n");
     continue;
    }
    FUNC_9("\t");
    FUNC_7(VAR_17.ap_batt_stat);
    FUNC_9("\t");
    FUNC_6(VAR_17.ap_batt_life);
    FUNC_9("\t");
    FUNC_8(VAR_17.ap_batt_time);
   }
  }
 }

 if (VAR_12) {



  FUNC_2(&VAR_13, sizeof(VAR_13));
  VAR_13.eax = (VAR_3) << 8 | VAR_5;
  VAR_13.ebx = VAR_7;
  VAR_13.ecx = 0x0001;
  if (FUNC_3(VAR_10, VAR_0, &VAR_13)) {
   FUNC_9("Resume timer: unknown\n");
  } else {
   VAR_14 = FUNC_0(VAR_13.eax);
   if (VAR_14 == 0x0d || VAR_14 == 0x86)
    FUNC_9("Resume timer: disabled\n");
   else if (VAR_14)
    FUNC_12(
  "failed to get the resume timer: APM error0x%x", VAR_14);
   else {
    struct tm VAR_18;
    char VAR_19[1024];
    time_t VAR_20;

    VAR_18.tm_sec = FUNC_1(FUNC_13(VAR_13.ecx));
    VAR_18.tm_min = FUNC_1(FUNC_14(VAR_13.edx));
    VAR_18.tm_hour = FUNC_1(FUNC_13(VAR_13.edx));
    VAR_18.tm_mday = FUNC_1(FUNC_14(VAR_13.esi));
    VAR_18.tm_mon = FUNC_1(FUNC_13(VAR_13.esi)) - 1;
    VAR_18.tm_year = FUNC_1(VAR_13.edi) - 1900;
    if (VAR_9)
     VAR_20 = FUNC_5(&VAR_18);
    else
     VAR_20 = FUNC_11(&VAR_18);
    if (VAR_20 != -1) {
     VAR_18 = *FUNC_4(&VAR_20);
     FUNC_10(VAR_19, sizeof(VAR_19), "%c", &VAR_18);
     FUNC_9("Resume timer: %s\n", VAR_19);
    } else
     FUNC_9("Resume timer: unknown\n");
   }
  }




  FUNC_2(&VAR_13, sizeof(VAR_13));
  VAR_13.eax = (VAR_3) << 8 | VAR_4;
  VAR_13.ebx = VAR_7;
  VAR_13.ecx = 0x0002;
  if (FUNC_3(VAR_10, VAR_0, &VAR_13) == 0) {
   FUNC_9("Resume on ring indicator: %sabled\n",
       VAR_13.ecx ? "en" : "dis");
  }
 }

 if (VAR_11->ai_infoversion >= 1) {
  if (VAR_11->ai_capabilities == 0xff00)
      return;
  FUNC_9("APM Capabilities:\n");
  if (VAR_11->ai_capabilities & 0x01)
   FUNC_9("\tglobal standby state\n");
  if (VAR_11->ai_capabilities & 0x02)
   FUNC_9("\tglobal suspend state\n");
  if (VAR_11->ai_capabilities & 0x04)
   FUNC_9("\tresume timer from standby\n");
  if (VAR_11->ai_capabilities & 0x08)
   FUNC_9("\tresume timer from suspend\n");
  if (VAR_11->ai_capabilities & 0x10)
   FUNC_9("\tRI resume from standby\n");
  if (VAR_11->ai_capabilities & 0x20)
   FUNC_9("\tRI resume from suspend\n");
  if (VAR_11->ai_capabilities & 0x40)
   FUNC_9("\tPCMCIA RI resume from standby\n");
  if (VAR_11->ai_capabilities & 0x80)
   FUNC_9("\tPCMCIA RI resume from suspend\n");
 }

}
