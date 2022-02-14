
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct efi_boot_memmap {int * desc_ver; int * desc_size; int * map_size; scalar_t__* map; } ;
typedef int efi_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (void*,char*) ;
 int FUNC_3 (void*,int,char*,int ) ;

__attribute__((used)) static efi_status_t FUNC_4(void *VAR_2, struct efi_boot_memmap *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2, "/chosen");
 u64 VAR_5;
 u32 VAR_6;
 int VAR_7;

 if (VAR_4 < 0)
  return VAR_0;

 VAR_5 = FUNC_1((unsigned long)*VAR_3->map);

 VAR_7 = FUNC_3(VAR_2, VAR_4, "linux,uefi-mmap-start", VAR_5);
 if (VAR_7)
  return VAR_0;

 VAR_6 = FUNC_0(*VAR_3->map_size);

 VAR_7 = FUNC_3(VAR_2, VAR_4, "linux,uefi-mmap-size", VAR_6);
 if (VAR_7)
  return VAR_0;

 VAR_6 = FUNC_0(*VAR_3->desc_size);

 VAR_7 = FUNC_3(VAR_2, VAR_4, "linux,uefi-mmap-desc-size", VAR_6);
 if (VAR_7)
  return VAR_0;

 VAR_6 = FUNC_0(*VAR_3->desc_ver);

 VAR_7 = FUNC_3(VAR_2, VAR_4, "linux,uefi-mmap-desc-ver", VAR_6);
 if (VAR_7)
  return VAR_0;

 return VAR_1;
}
