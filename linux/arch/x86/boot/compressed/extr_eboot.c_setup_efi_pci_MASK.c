
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct setup_data {unsigned long next; } ;
struct pci_setup_rom {int dummy; } ;
struct TYPE_2__ {unsigned long setup_data; } ;
struct boot_params {TYPE_1__ hdr; } ;
typedef scalar_t__ efi_status_t ;
typedef int efi_pci_io_protocol_t ;
typedef int efi_guid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,void**,...) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int *,struct pci_setup_rom**) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_4(struct boot_params *VAR_10)
{
 efi_status_t VAR_11;
 void **VAR_12 = ((void*)0);
 efi_guid_t VAR_13 = VAR_3;
 unsigned long VAR_14 = 0;
 unsigned long VAR_15;
 struct setup_data *VAR_16;
 int VAR_17;

 VAR_11 = FUNC_0(VAR_8,
    VAR_2,
    &VAR_13, ((void*)0), &VAR_14, VAR_12);

 if (VAR_11 == VAR_0) {
  VAR_11 = FUNC_0(VAR_5,
     VAR_1,
     VAR_14, (void **)&VAR_12);

  if (VAR_11 != VAR_4) {
   FUNC_2(VAR_9, "Failed to allocate memory for 'pci_handle'\n");
   return;
  }

  VAR_11 = FUNC_0(VAR_8,
     VAR_2, &VAR_13,
     ((void*)0), &VAR_14, VAR_12);
 }

 if (VAR_11 != VAR_4)
  goto free_handle;

 VAR_16 = (struct setup_data *)(unsigned long)VAR_10->hdr.setup_data;

 while (VAR_16 && VAR_16->next)
  VAR_16 = (struct setup_data *)(unsigned long)VAR_16->next;

 VAR_15 = VAR_14 / (FUNC_1() ? sizeof(u64) : sizeof(u32));
 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
  efi_pci_io_protocol_t *VAR_18 = ((void*)0);
  struct pci_setup_rom *VAR_19;

  VAR_11 = FUNC_0(VAR_7,
     FUNC_1() ? ((u64 *)VAR_12)[VAR_17]
             : ((u32 *)VAR_12)[VAR_17],
     &VAR_13, (void **)&VAR_18);
  if (VAR_11 != VAR_4 || !VAR_18)
   continue;

  VAR_11 = FUNC_3(VAR_18, &VAR_19);
  if (VAR_11 != VAR_4)
   continue;

  if (VAR_16)
   VAR_16->next = (unsigned long)VAR_19;
  else
   VAR_10->hdr.setup_data = (unsigned long)VAR_19;

  VAR_16 = (struct setup_data *)VAR_19;
 }

free_handle:
 FUNC_0(VAR_6, VAR_12);
}
