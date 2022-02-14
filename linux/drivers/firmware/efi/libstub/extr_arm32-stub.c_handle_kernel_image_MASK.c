
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
struct TYPE_3__ {unsigned long image_size; } ;
typedef TYPE_1__ efi_loaded_image_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int *,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int *,unsigned long*,unsigned long,unsigned long,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,unsigned long,unsigned long*,unsigned long*) ;
 unsigned long FUNC_4 (unsigned long,int ) ;

efi_status_t FUNC_5(efi_system_table_t *VAR_7,
     unsigned long *VAR_8,
     unsigned long *VAR_9,
     unsigned long *VAR_10,
     unsigned long *VAR_11,
     unsigned long VAR_12,
     efi_loaded_image_t *VAR_13)
{
 unsigned long VAR_14;
 efi_status_t VAR_15;
 VAR_14 = FUNC_4(VAR_12, VAR_4);
 VAR_14 += VAR_5 - 5 * VAR_3;

 VAR_15 = FUNC_3(VAR_7, VAR_14, VAR_10,
         VAR_11);
 if (VAR_15 != VAR_1) {
  FUNC_2(VAR_7, "Unable to allocate memory for uncompressed kernel.\n");
  return VAR_15;
 }





 *VAR_9 = VAR_13->image_size;
 VAR_15 = FUNC_1(VAR_7, VAR_8, *VAR_9,
         *VAR_9,
         VAR_14 + VAR_2, 0, 0);
 if (VAR_15 != VAR_1) {
  FUNC_2(VAR_7, "Failed to relocate kernel.\n");
  FUNC_0(VAR_7, *VAR_11, *VAR_10);
  *VAR_11 = 0;
  return VAR_15;
 }






 if (*VAR_8 + *VAR_9 > VAR_12 + VAR_6) {
  FUNC_2(VAR_7, "Failed to relocate kernel, no low memory available.\n");
  FUNC_0(VAR_7, *VAR_11, *VAR_10);
  *VAR_11 = 0;
  FUNC_0(VAR_7, *VAR_9, *VAR_8);
  *VAR_9 = 0;
  return VAR_0;
 }
 return VAR_1;
}
