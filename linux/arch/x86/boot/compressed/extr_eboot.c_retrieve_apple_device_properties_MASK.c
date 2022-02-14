
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct setup_data {long next; int len; int type; int * data; } ;
struct TYPE_2__ {unsigned long setup_data; } ;
struct boot_params {TYPE_1__ hdr; } ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,struct setup_data*,...) ;
 scalar_t__ FUNC_1 (int ,int ,void*,int *,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_4(struct boot_params *VAR_12)
{
 efi_guid_t VAR_13 = VAR_0;
 struct setup_data *VAR_14, *VAR_15;
 efi_status_t VAR_16;
 u32 VAR_17 = 0;
 void *VAR_18;

 VAR_16 = FUNC_0(VAR_9, &VAR_13, ((void*)0), &VAR_18);
 if (VAR_16 != VAR_3)
  return;

 if (FUNC_3(VAR_6, VAR_11, VAR_18) != 0x10000) {
  FUNC_2(VAR_10, "Unsupported properties proto version\n");
  return;
 }

 FUNC_1(VAR_6, VAR_8, VAR_18, ((void*)0), &VAR_17);
 if (!VAR_17)
  return;

 do {
  VAR_16 = FUNC_0(VAR_5, VAR_2,
     VAR_17 + sizeof(struct setup_data), &VAR_15);
  if (VAR_16 != VAR_3) {
   FUNC_2(VAR_10, "Failed to allocate memory for 'properties'\n");
   return;
  }

  VAR_16 = FUNC_1(VAR_6, VAR_8, VAR_18,
     VAR_15->data, &VAR_17);

  if (VAR_16 == VAR_1)
   FUNC_0(VAR_7, VAR_15);
 } while (VAR_16 == VAR_1);

 VAR_15->type = VAR_4;
 VAR_15->len = VAR_17;
 VAR_15->next = 0;

 VAR_14 = (struct setup_data *)(unsigned long)VAR_12->hdr.setup_data;
 if (!VAR_14) {
  VAR_12->hdr.setup_data = (unsigned long)VAR_15;
 } else {
  while (VAR_14->next)
   VAR_14 = (struct setup_data *)(unsigned long)VAR_14->next;
  VAR_14->next = (unsigned long)VAR_15;
 }
}
