
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_loaded_image_t ;
typedef int efi_guid_t ;
typedef int efi_file_io_interface_t ;
typedef int efi_file_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,void*,int *,void**) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int **) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static efi_status_t FUNC_4(efi_system_table_t *VAR_7,
        efi_loaded_image_t *VAR_8,
        efi_file_handle_t **VAR_9)
{
 efi_file_io_interface_t *VAR_10;
 efi_file_handle_t *VAR_11;
 efi_guid_t VAR_12 = VAR_0;
 efi_status_t VAR_13;
 void *VAR_14 = (void *)(unsigned long)FUNC_3(VAR_4,
            VAR_2,
            VAR_8);

 VAR_13 = FUNC_0(VAR_5, VAR_14,
    &VAR_12, (void **)&VAR_10);
 if (VAR_13 != VAR_1) {
  FUNC_2(VAR_7, "Failed to handle fs_proto\n");
  return VAR_13;
 }

 VAR_13 = FUNC_1(VAR_3, VAR_6, VAR_10, &VAR_11);
 if (VAR_13 != VAR_1)
  FUNC_2(VAR_7, "Failed to open volume\n");
 else
  *VAR_9 = VAR_11;

 return VAR_13;
}
