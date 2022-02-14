
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct work_struct {int dummy; } ;
typedef int efi_time_t ;
typedef int efi_time_cap_t ;
typedef int efi_status_t ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;
typedef int efi_capsule_header_t ;
typedef int efi_bool_t ;
struct TYPE_2__ {int efi_rts_id; int efi_rts_comp; int status; void* arg5; void* arg4; void* arg3; void* arg2; void* arg1; } ;







 int VAR_0 ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned long*,...) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_13)
{
 void *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 efi_status_t VAR_19 = VAR_0;

 VAR_14 = VAR_1.arg1;
 VAR_15 = VAR_1.arg2;
 VAR_16 = VAR_1.arg3;
 VAR_17 = VAR_1.arg4;
 VAR_18 = VAR_1.arg5;

 switch (VAR_1.efi_rts_id) {
 case 136:
  VAR_19 = FUNC_1(VAR_4, (efi_time_t *)VAR_14,
           (efi_time_cap_t *)VAR_15);
  break;
 case 131:
  VAR_19 = FUNC_1(VAR_9, (efi_time_t *)VAR_14);
  break;
 case 134:
  VAR_19 = FUNC_1(VAR_6, (efi_bool_t *)VAR_14,
           (efi_bool_t *)VAR_15, (efi_time_t *)VAR_16);
  break;
 case 129:
  VAR_19 = FUNC_1(VAR_11, *(efi_bool_t *)VAR_14,
           (efi_time_t *)VAR_15);
  break;
 case 135:
  VAR_19 = FUNC_1(VAR_5, (efi_char16_t *)VAR_14,
           (efi_guid_t *)VAR_15, (u32 *)VAR_16,
           (unsigned long *)VAR_17, (void *)VAR_18);
  break;
 case 137:
  VAR_19 = FUNC_1(VAR_3, (unsigned long *)VAR_14,
           (efi_char16_t *)VAR_15,
           (efi_guid_t *)VAR_16);
  break;
 case 130:
  VAR_19 = FUNC_1(VAR_10, (efi_char16_t *)VAR_14,
           (efi_guid_t *)VAR_15, *(u32 *)VAR_16,
           *(unsigned long *)VAR_17, (void *)VAR_18);
  break;
 case 132:
  VAR_19 = FUNC_1(VAR_8, *(u32 *)VAR_14,
           (u64 *)VAR_15, (u64 *)VAR_16, (u64 *)VAR_17);
  break;
 case 138:
  VAR_19 = FUNC_1(VAR_2, (u32 *)VAR_14);
  break;
 case 128:
  VAR_19 = FUNC_1(VAR_12,
           (efi_capsule_header_t **)VAR_14,
           *(unsigned long *)VAR_15,
           *(unsigned long *)VAR_16);
  break;
 case 133:
  VAR_19 = FUNC_1(VAR_7,
           (efi_capsule_header_t **)VAR_14,
           *(unsigned long *)VAR_15, (u64 *)VAR_16,
           (int *)VAR_17);
  break;
 default:





  FUNC_2("Requested executing invalid EFI Runtime Service.\n");
 }
 VAR_1.status = VAR_19;
 FUNC_0(&VAR_1.efi_rts_comp);
}
