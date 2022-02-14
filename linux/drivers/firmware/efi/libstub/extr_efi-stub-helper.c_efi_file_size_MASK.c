
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;
struct TYPE_4__ {int file_size; } ;
typedef TYPE_1__ efi_file_info_t ;
typedef void efi_file_handle_t ;
typedef int efi_char16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,...) ;
 scalar_t__ FUNC_1 (int ,int ,void*,void**,unsigned long*,TYPE_1__*,...) ;
 int FUNC_2 (int *,int *) ;
 int VAR_6 ;
 int FUNC_3 (int *,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static efi_status_t FUNC_4(efi_system_table_t *VAR_10, void *VAR_11,
      efi_char16_t *VAR_12, void **VAR_13,
      u64 *VAR_14)
{
 efi_file_handle_t *VAR_15, *VAR_16 = VAR_11;
 efi_file_info_t *VAR_17;
 efi_status_t VAR_18;
 efi_guid_t VAR_19 = VAR_1;
 unsigned long VAR_20;

 VAR_18 = FUNC_1(VAR_6, VAR_9, VAR_16, &VAR_15, VAR_12,
    VAR_2, (u64)0);
 if (VAR_18 != VAR_4) {
  FUNC_3(VAR_10, "Failed to open file: ");
  FUNC_2(VAR_10, VAR_12);
  FUNC_3(VAR_10, "\n");
  return VAR_18;
 }

 *VAR_13 = VAR_15;

 VAR_20 = 0;
 VAR_18 = FUNC_1(VAR_6, VAR_8, VAR_15, &VAR_19,
    &VAR_20, ((void*)0));
 if (VAR_18 != VAR_0) {
  FUNC_3(VAR_10, "Failed to get file info size\n");
  return VAR_18;
 }

grow:
 VAR_18 = FUNC_0(VAR_5, VAR_3,
    VAR_20, (void **)&VAR_17);
 if (VAR_18 != VAR_4) {
  FUNC_3(VAR_10, "Failed to alloc mem for file info\n");
  return VAR_18;
 }

 VAR_18 = FUNC_1(VAR_6, VAR_8, VAR_15, &VAR_19,
    &VAR_20, VAR_17);
 if (VAR_18 == VAR_0) {
  FUNC_0(VAR_7, VAR_17);
  goto grow;
 }

 *VAR_14 = VAR_17->file_size;
 FUNC_0(VAR_7, VAR_17);

 if (VAR_18 != VAR_4)
  FUNC_3(VAR_10, "Failed to get initrd info\n");

 return VAR_18;
}
