
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int fdt_val64 ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int,int *) ;
 int FUNC_3 (void*,int ,char*) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (void*,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*,void*,int) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*,int,char*,char*,scalar_t__) ;
 int FUNC_11 (void*,int,char*,scalar_t__) ;
 int FUNC_12 (void*,int ,char*) ;
 unsigned long FUNC_13 (void*) ;
 int FUNC_14 (int *,void*) ;
 int FUNC_15 (int *,char*) ;
 scalar_t__ FUNC_16 (char*) ;

__attribute__((used)) static efi_status_t FUNC_17(efi_system_table_t *VAR_8, void *VAR_9,
          unsigned long VAR_10,
          void *VAR_11, int VAR_12, char *VAR_13,
          u64 VAR_14, u64 VAR_15)
{
 int VAR_16, VAR_17;
 int VAR_18;
 u32 VAR_19;
 u64 VAR_20;


 if (VAR_9) {
  if (FUNC_4(VAR_9)) {
   FUNC_15(VAR_8, "Device Tree header not valid!\n");
   return VAR_2;
  }




  if (VAR_10 && FUNC_13(VAR_9) > VAR_10) {
   FUNC_15(VAR_8, "Truncated device tree! foo!\n");
   return VAR_2;
  }
 }

 if (VAR_9) {
  VAR_18 = FUNC_8(VAR_9, VAR_11, VAR_12);
 } else {
  VAR_18 = FUNC_5(VAR_11, VAR_12);
  if (VAR_18 == 0) {




   FUNC_14(VAR_8, VAR_11);
  }
 }

 if (VAR_18 != 0)
  goto fdt_set_fail;





 VAR_17 = FUNC_7(VAR_11);
 while (VAR_17-- > 0)
  FUNC_6(VAR_11, VAR_17);

 VAR_16 = FUNC_12(VAR_11, 0, "chosen");
 if (VAR_16 < 0) {
  VAR_16 = FUNC_3(VAR_11, 0, "chosen");
  if (VAR_16 < 0) {

   VAR_18 = VAR_16;
   goto fdt_set_fail;
  }
 }

 if (VAR_13 != ((void*)0) && FUNC_16(VAR_13) > 0) {
  VAR_18 = FUNC_10(VAR_11, VAR_16, "bootargs", VAR_13,
         FUNC_16(VAR_13) + 1);
  if (VAR_18)
   goto fdt_set_fail;
 }


 if (VAR_15 != 0) {
  u64 VAR_21;
  u64 VAR_22 = FUNC_1(VAR_14);

  VAR_18 = FUNC_11(VAR_11, VAR_16, "linux,initrd-start", VAR_22);
  if (VAR_18)
   goto fdt_set_fail;

  VAR_21 = FUNC_1(VAR_14 + VAR_15);
  VAR_18 = FUNC_11(VAR_11, VAR_16, "linux,initrd-end", VAR_21);
  if (VAR_18)
   goto fdt_set_fail;
 }


 VAR_16 = FUNC_12(VAR_11, 0, "chosen");
 VAR_20 = FUNC_1((u64)(unsigned long)VAR_8);

 VAR_18 = FUNC_11(VAR_11, VAR_16, "linux,uefi-system-table", VAR_20);
 if (VAR_18)
  goto fdt_set_fail;

 VAR_20 = VAR_7;

 VAR_18 = FUNC_11(VAR_11, VAR_16, "linux,uefi-mmap-start", VAR_20);
 if (VAR_18)
  goto fdt_set_fail;

 VAR_19 = VAR_6;

 VAR_18 = FUNC_11(VAR_11, VAR_16, "linux,uefi-mmap-size", VAR_19);
 if (VAR_18)
  goto fdt_set_fail;

 VAR_18 = FUNC_11(VAR_11, VAR_16, "linux,uefi-mmap-desc-size", VAR_19);
 if (VAR_18)
  goto fdt_set_fail;

 VAR_18 = FUNC_11(VAR_11, VAR_16, "linux,uefi-mmap-desc-ver", VAR_19);
 if (VAR_18)
  goto fdt_set_fail;

 if (FUNC_0(VAR_0)) {
  efi_status_t VAR_23;

  VAR_23 = FUNC_2(VAR_8, sizeof(VAR_20),
        (u8 *)&VAR_20);
  if (VAR_23 == VAR_4) {
   VAR_18 = FUNC_11(VAR_11, VAR_16, "kaslr-seed", VAR_20);
   if (VAR_18)
    goto fdt_set_fail;
  } else if (VAR_23 != VAR_3) {
   return VAR_23;
  }
 }


 FUNC_9(VAR_11);

 return VAR_4;

fdt_set_fail:
 if (VAR_18 == -VAR_5)
  return VAR_1;

 return VAR_2;
}
