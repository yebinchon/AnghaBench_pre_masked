
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int phys_seed ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_physical_addr_t ;
typedef int efi_loaded_image_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ,int ,int ,unsigned long,int *) ;
 scalar_t__ FUNC_2 (int *,int,int *) ;
 scalar_t__ FUNC_3 (int *,unsigned long,unsigned long,unsigned long*) ;
 scalar_t__ FUNC_4 (int *,unsigned long,unsigned long,unsigned long*,int) ;
 int FUNC_5 (void*,void*,unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (unsigned long,unsigned long) ;
 unsigned long FUNC_10 (unsigned long,int ) ;

efi_status_t FUNC_11(efi_system_table_t *VAR_15,
     unsigned long *VAR_16,
     unsigned long *VAR_17,
     unsigned long *VAR_18,
     unsigned long *VAR_19,
     unsigned long VAR_20,
     efi_loaded_image_t *VAR_21)
{
 efi_status_t VAR_22;
 unsigned long VAR_23, VAR_24 = 0;
 void *VAR_25 = (void *)*VAR_16;
 unsigned long VAR_26;
 u64 VAR_27 = 0;

 if (FUNC_0(VAR_1)) {
  if (!FUNC_6()) {
   VAR_22 = FUNC_2(VAR_15,
            sizeof(VAR_27),
            (u8 *)&VAR_27);
   if (VAR_22 == VAR_6) {
    FUNC_7(VAR_15, "EFI_RNG_PROTOCOL unavailable, no randomness supplied\n");
   } else if (VAR_22 != VAR_8) {
    FUNC_8(VAR_15, "efi_get_random_bytes() failed\n");
    return VAR_22;
   }
  } else {
   FUNC_7(VAR_15, "KASLR disabled on kernel command line\n");
  }
 }






 VAR_26 = FUNC_9(VAR_20, VAR_9) + VAR_10;
 if (VAR_26 < VAR_20)
  VAR_26 += VAR_9;

 VAR_23 = VAR_11 - VAR_13;
 VAR_24 = VAR_23 + (VAR_12 - VAR_11);

 if (FUNC_0(VAR_1) && VAR_27 != 0) {






  u32 VAR_28 = (VAR_9 - 1) & ~(VAR_4 - 1);
  u32 VAR_29 = !FUNC_0(VAR_0) ?
        (VAR_27 >> 32) & VAR_28 : VAR_10;
  VAR_29 |= VAR_10 % VAR_4;





  *VAR_19 = VAR_24 + VAR_29;
  VAR_22 = FUNC_4(VAR_15, *VAR_19,
       VAR_9, VAR_18,
       (u32)VAR_27);

  *VAR_16 = *VAR_18 + VAR_29;
 } else {
  if (*VAR_16 == VAR_26)
   return VAR_8;

  *VAR_16 = *VAR_18 = VAR_26;
  *VAR_19 = FUNC_10(VAR_24, VAR_3);

  VAR_22 = FUNC_1(VAR_14, VAR_2,
     VAR_5,
     *VAR_19 / VAR_7,
     (efi_physical_addr_t *)VAR_18);
 }

 if (VAR_22 != VAR_8) {
  *VAR_19 = VAR_24 + VAR_10;
  VAR_22 = FUNC_3(VAR_15, *VAR_19,
           VAR_9, VAR_18);

  if (VAR_22 != VAR_8) {
   FUNC_8(VAR_15, "Failed to relocate kernel\n");
   *VAR_19 = 0;
   return VAR_22;
  }
  *VAR_16 = *VAR_18 + VAR_10;
 }
 FUNC_5((void *)*VAR_16, VAR_25, VAR_23);

 return VAR_8;
}
