
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct apm_info {int ai_status; int ai_batt_life; int ai_batt_stat; int ai_acline; int ai_minor; int ai_major; } ;
struct apm_event_info {int type; int index; } ;
struct apm_clone_data {int notify_status; struct acpi_softc* acpi_sc; } ;
struct apm_bios_arg {int dummy; } ;
struct acpi_softc {int acpi_next_sstate; int acpi_standby_sx; int acpi_suspend_sx; } ;
typedef scalar_t__ caddr_t ;
typedef int apm_pwstatus_t ;
typedef struct apm_info* apm_info_t ;
typedef TYPE_1__* apm_info_old_t ;
struct TYPE_2__ {int ai_status; int ai_batt_life; int ai_batt_stat; int ai_acline; int ai_minor; int ai_major; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct apm_clone_data*,int ) ;
 int FUNC_3 (struct acpi_softc*,int ) ;
 int FUNC_4 (struct apm_info*) ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (void**) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(struct cdev *VAR_13, u_long VAR_14, caddr_t VAR_15, int VAR_16, struct thread *VAR_17)
{
 int VAR_18;
 struct apm_clone_data *VAR_19;
 struct acpi_softc *VAR_20;
 struct apm_info VAR_21;
 struct apm_event_info *VAR_22;
 apm_info_old_t VAR_23;

 VAR_18 = 0;
 FUNC_7((void **)&VAR_19);
 VAR_20 = VAR_19->acpi_sc;

 switch (VAR_14) {
 case 128:
  if ((VAR_16 & VAR_8) == 0)
   return (VAR_7);
  if (VAR_20->acpi_next_sstate == 0) {
   if (VAR_20->acpi_suspend_sx != VAR_1) {
    VAR_18 = FUNC_3(VAR_20,
        VAR_20->acpi_suspend_sx);
   } else {
    FUNC_8(
   "power off via apm suspend not supported\n");
    VAR_18 = VAR_6;
   }
  } else
   VAR_18 = FUNC_2(VAR_19, 0);
  break;
 case 129:
  if ((VAR_16 & VAR_8) == 0)
   return (VAR_7);
  if (VAR_20->acpi_next_sstate == 0) {
   if (VAR_20->acpi_standby_sx != VAR_1) {
    VAR_18 = FUNC_3(VAR_20,
        VAR_20->acpi_standby_sx);
   } else {
    FUNC_8(
   "power off via apm standby not supported\n");
    VAR_18 = VAR_6;
   }
  } else
   VAR_18 = FUNC_2(VAR_19, 0);
  break;
 case 131:
  FUNC_8("apm nextevent start\n");
  FUNC_0(VAR_11);
  if (VAR_20->acpi_next_sstate != 0 && VAR_19->notify_status ==
      VAR_2) {
   VAR_22 = (struct apm_event_info *)VAR_15;
   if (VAR_20->acpi_next_sstate <= VAR_0)
    VAR_22->type = VAR_9;
   else
    VAR_22->type = VAR_10;
   VAR_22->index = 0;
   VAR_19->notify_status = VAR_3;
   FUNC_8("apm event returning %d\n", VAR_22->type);
  } else
   VAR_18 = VAR_4;
  FUNC_1(VAR_11);
  break;
 case 134:
  if (FUNC_4(&VAR_21))
   VAR_18 = VAR_6;
  VAR_23 = (apm_info_old_t)VAR_15;
  VAR_23->ai_major = VAR_21.ai_major;
  VAR_23->ai_minor = VAR_21.ai_minor;
  VAR_23->ai_acline = VAR_21.ai_acline;
  VAR_23->ai_batt_stat = VAR_21.ai_batt_stat;
  VAR_23->ai_batt_life = VAR_21.ai_batt_life;
  VAR_23->ai_status = VAR_21.ai_status;
  break;
 case 135:
  if (FUNC_4((apm_info_t)VAR_15))
   VAR_18 = VAR_6;
  break;
 case 133:
  if (FUNC_5((apm_pwstatus_t)VAR_15))
   VAR_18 = VAR_6;
  break;
 case 136:
  if ((VAR_16 & VAR_8) == 0)
   return (VAR_7);
  VAR_12 = 1;
  break;
 case 138:
  if ((VAR_16 & VAR_8) == 0)
   return (VAR_7);
  VAR_12 = 0;
  break;
 case 132:
  break;
 case 130:
  break;
 case 137:
  if ((VAR_16 & VAR_8) == 0)
   return (VAR_7);
  break;
 case 139:
  if ((VAR_16 & VAR_8) == 0)
   return (VAR_7);
  FUNC_6(VAR_15, sizeof(struct apm_bios_arg));
  break;
 default:
  VAR_18 = VAR_5;
  break;
 }

 return (VAR_18);
}
