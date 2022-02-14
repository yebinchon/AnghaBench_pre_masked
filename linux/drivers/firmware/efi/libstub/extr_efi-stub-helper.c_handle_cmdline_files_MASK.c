
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef long u64 ;
struct file_info {unsigned long size; int handle; } ;
typedef int filename_16 ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_loaded_image_t ;
typedef int efi_file_handle_t ;
typedef char efi_char16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,struct file_info*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,unsigned long*,void*) ;
 scalar_t__ FUNC_4 (int *,int *,char*,void**,unsigned long*) ;
 int FUNC_5 (int *,long,unsigned long) ;
 scalar_t__ FUNC_6 (int *,long,int,unsigned long*,unsigned long) ;
 scalar_t__ FUNC_7 (int *,int *,int **) ;
 int VAR_6 ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;

efi_status_t FUNC_11(efi_system_table_t *VAR_7,
      efi_loaded_image_t *VAR_8,
      char *VAR_9, char *VAR_10,
      unsigned long VAR_11,
      unsigned long *VAR_12,
      unsigned long *VAR_13)
{
 struct file_info *VAR_14;
 unsigned long VAR_15;
 u64 VAR_16;
 efi_file_handle_t *VAR_17 = ((void*)0);
 efi_status_t VAR_18;
 int VAR_19;
 char *VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_15 = 0;
 VAR_16 = 0;

 VAR_20 = VAR_9;

 VAR_22 = 0;

 if (!VAR_12 || !VAR_13)
  return VAR_1;

 *VAR_12 = 0;
 *VAR_13 = 0;

 if (!VAR_20 || !*VAR_20)
  return VAR_3;

 for (VAR_19 = 0; *VAR_20; VAR_19++) {
  VAR_20 = FUNC_10(VAR_20, VAR_10);
  if (!VAR_20)
   break;

  VAR_20 += FUNC_9(VAR_10);


  while (*VAR_20 == '/' || *VAR_20 == '\\')
   VAR_20++;

  while (*VAR_20 && *VAR_20 != ' ' && *VAR_20 != '\n')
   VAR_20++;
 }

 if (!VAR_19)
  return VAR_3;

 VAR_18 = FUNC_1(VAR_5, VAR_2,
    VAR_19 * sizeof(*VAR_14), (void **)&VAR_14);
 if (VAR_18 != VAR_3) {
  FUNC_8(VAR_7, "Failed to alloc mem for file handle list\n");
  goto fail;
 }

 VAR_20 = VAR_9;
 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
  struct file_info *VAR_24;
  efi_char16_t VAR_25[256];
  efi_char16_t *VAR_26;

  VAR_20 = FUNC_10(VAR_20, VAR_10);
  if (!VAR_20)
   break;

  VAR_20 += FUNC_9(VAR_10);

  VAR_24 = &VAR_14[VAR_21];
  VAR_26 = VAR_25;


  while (*VAR_20 == '/' || *VAR_20 == '\\')
   VAR_20++;

  while (*VAR_20 && *VAR_20 != ' ' && *VAR_20 != '\n') {
   if ((u8 *)VAR_26 >= (u8 *)VAR_25 + sizeof(VAR_25))
    break;

   if (*VAR_20 == '/') {
    *VAR_26++ = '\\';
    VAR_20++;
   } else {
    *VAR_26++ = *VAR_20++;
   }
  }

  *VAR_26 = '\0';


  if (!VAR_21) {
   VAR_18 = FUNC_7(VAR_7, VAR_8, &VAR_17);
   if (VAR_18 != VAR_3)
    goto free_files;
  }

  VAR_18 = FUNC_4(VAR_7, VAR_17, VAR_25,
           (void **)&VAR_24->handle, &VAR_24->size);
  if (VAR_18 != VAR_3)
   goto close_handles;

  VAR_16 += VAR_24->size;
 }

 if (VAR_16) {
  unsigned long VAR_27;






  VAR_18 = FUNC_6(VAR_7, VAR_16, 0x1000,
        &VAR_15, VAR_11);
  if (VAR_18 != VAR_3) {
   FUNC_8(VAR_7, "Failed to alloc highmem for files\n");
   goto close_handles;
  }


  if (VAR_15 > VAR_11) {
   FUNC_8(VAR_7, "We've run out of free low memory\n");
   VAR_18 = VAR_1;
   goto free_file_total;
  }

  VAR_27 = VAR_15;
  for (VAR_22 = 0; VAR_22 < VAR_19; VAR_22++) {
   unsigned long VAR_28;

   VAR_28 = VAR_14[VAR_22].size;
   while (VAR_28) {
    unsigned long VAR_29;

    if (FUNC_0(VAR_0) && VAR_28 > VAR_4)
     VAR_29 = VAR_4;
    else
     VAR_29 = VAR_28;

    VAR_18 = FUNC_3(VAR_14[VAR_22].handle,
             &VAR_29,
             (void *)VAR_27);
    if (VAR_18 != VAR_3) {
     FUNC_8(VAR_7, "Failed to read file\n");
     goto free_file_total;
    }
    VAR_27 += VAR_29;
    VAR_28 -= VAR_29;
   }

   FUNC_2(VAR_14[VAR_22].handle);
  }

 }

 FUNC_1(VAR_6, VAR_14);

 *VAR_12 = VAR_15;
 *VAR_13 = VAR_16;

 return VAR_18;

free_file_total:
 FUNC_5(VAR_7, VAR_16, VAR_15);

close_handles:
 for (VAR_23 = VAR_22; VAR_23 < VAR_21; VAR_23++)
  FUNC_2(VAR_14[VAR_23].handle);
free_files:
 FUNC_1(VAR_6, VAR_14);
fail:
 *VAR_12 = 0;
 *VAR_13 = 0;

 return VAR_18;
}
