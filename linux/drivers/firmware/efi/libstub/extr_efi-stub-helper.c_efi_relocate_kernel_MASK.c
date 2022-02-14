
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef unsigned long efi_physical_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int ,unsigned long,unsigned long*) ;
 scalar_t__ FUNC_1 (int *,unsigned long,unsigned long,unsigned long*,unsigned long) ;
 int FUNC_2 (void*,void*,unsigned long) ;
 int FUNC_3 (int *,char*) ;
 unsigned long FUNC_4 (unsigned long,int ) ;

efi_status_t FUNC_5(efi_system_table_t *VAR_7,
     unsigned long *VAR_8,
     unsigned long VAR_9,
     unsigned long VAR_10,
     unsigned long VAR_11,
     unsigned long VAR_12,
     unsigned long VAR_13)
{
 unsigned long VAR_14;
 unsigned long VAR_15 = 0;
 efi_status_t VAR_16;
 unsigned long VAR_17;
 efi_physical_addr_t VAR_18 = VAR_11;

 if (!VAR_8 || !VAR_9 || !VAR_10)
  return VAR_2;
 if (VAR_10 < VAR_9)
  return VAR_2;

 VAR_14 = *VAR_8;
 VAR_17 = FUNC_4(VAR_10, VAR_1) / VAR_4;
 VAR_16 = FUNC_0(VAR_6,
    VAR_0, VAR_3,
    VAR_17, &VAR_18);
 VAR_15 = VAR_18;




 if (VAR_16 != VAR_5) {
  VAR_16 = FUNC_1(VAR_7, VAR_10,
          VAR_12, &VAR_15, VAR_13);
 }
 if (VAR_16 != VAR_5) {
  FUNC_3(VAR_7, "Failed to allocate usable memory for kernel.\n");
  return VAR_16;
 }





 FUNC_2((void *)VAR_15, (void *)VAR_14, VAR_9);


 *VAR_8 = VAR_15;

 return VAR_16;
}
