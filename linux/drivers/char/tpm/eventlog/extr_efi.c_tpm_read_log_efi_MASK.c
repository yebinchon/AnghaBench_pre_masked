
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tpm_bios_log {void* bios_event_log; void* bios_event_log_end; } ;
struct tpm_chip {int flags; struct tpm_bios_log log; } ;
struct linux_efi_tpm_eventlog {int size; int version; scalar_t__ final_events_preboot_size; scalar_t__ events; int log; } ;
struct efi_tcg2_final_events_table {int size; int version; scalar_t__ final_events_preboot_size; scalar_t__ events; int log; } ;
struct TYPE_2__ {scalar_t__ tpm_log; scalar_t__ tpm_final_log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int,int ) ;
 void* FUNC_2 (void*,int,int ) ;
 int FUNC_3 (void*,scalar_t__,int) ;
 struct linux_efi_tpm_eventlog* FUNC_4 (scalar_t__,int,int ) ;
 int FUNC_5 (struct linux_efi_tpm_eventlog*) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct tpm_chip *VAR_9)
{

 struct efi_tcg2_final_events_table *VAR_10 = ((void*)0);
 struct linux_efi_tpm_eventlog *VAR_11;
 struct tpm_bios_log *VAR_12;
 u32 VAR_13;
 u8 VAR_14;
 void *VAR_15;
 int VAR_16;

 if (!(VAR_9->flags & VAR_6))
  return -VAR_2;

 if (VAR_7.tpm_log == VAR_0)
  return -VAR_2;

 VAR_12 = &VAR_9->log;

 VAR_11 = FUNC_4(VAR_7.tpm_log, sizeof(*VAR_11), VAR_5);
 if (!VAR_11) {
  FUNC_6("Could not map UEFI TPM log table !\n");
  return -VAR_3;
 }

 VAR_13 = VAR_11->size;
 FUNC_5(VAR_11);

 VAR_11 = FUNC_4(VAR_7.tpm_log, sizeof(*VAR_11) + VAR_13,
      VAR_5);
 if (!VAR_11) {
  FUNC_6("Could not map UEFI TPM log table payload!\n");
  return -VAR_3;
 }


 VAR_12->bios_event_log = FUNC_1(VAR_11->log, VAR_13, VAR_4);
 if (!VAR_12->bios_event_log) {
  VAR_16 = -VAR_3;
  goto out;
 }

 VAR_12->bios_event_log_end = VAR_12->bios_event_log + VAR_13;
 VAR_14 = VAR_11->version;

 VAR_16 = VAR_14;

 if (VAR_7.tpm_final_log == VAR_0 ||
     VAR_8 == 0 ||
     VAR_14 != VAR_1)
  goto out;

 VAR_10 = FUNC_4(VAR_7.tpm_final_log,
        sizeof(*VAR_10) + VAR_8,
        VAR_5);
 if (!VAR_10) {
  FUNC_6("Could not map UEFI TPM final log\n");
  FUNC_0(VAR_12->bios_event_log);
  VAR_16 = -VAR_3;
  goto out;
 }

 VAR_8 -= VAR_11->final_events_preboot_size;

 VAR_15 = FUNC_2(VAR_12->bios_event_log,
         VAR_13 + VAR_8,
         VAR_4);
 if (!VAR_15) {
  FUNC_0(VAR_12->bios_event_log);
  VAR_16 = -VAR_3;
  goto out;
 }

 VAR_12->bios_event_log = VAR_15;






 FUNC_3((void *)VAR_12->bios_event_log + VAR_13,
        VAR_10->events + VAR_11->final_events_preboot_size,
        VAR_8);
 VAR_12->bios_event_log_end = VAR_12->bios_event_log +
  VAR_13 + VAR_8;

out:
 FUNC_5(VAR_10);
 FUNC_5(VAR_11);
 return VAR_16;
}
