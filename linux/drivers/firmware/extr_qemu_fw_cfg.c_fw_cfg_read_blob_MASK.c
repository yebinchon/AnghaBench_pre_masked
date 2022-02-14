
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int u16 ;
typedef size_t ssize_t ;
typedef int loff_t ;
typedef scalar_t__ acpi_status ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int ,unsigned int*) ;
 int FUNC_3 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,void*,size_t) ;
 int FUNC_7 (void*,int ,size_t) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static ssize_t FUNC_10(u16 VAR_5,
    void *VAR_6, loff_t VAR_7, size_t VAR_8)
{
 u32 VAR_9 = -1U;
 acpi_status VAR_10;




 VAR_10 = FUNC_2(VAR_0, &VAR_9);
 if (FUNC_0(VAR_10) && VAR_10 != VAR_1) {

  FUNC_1(1, "fw_cfg_read_blob: Failed to lock ACPI!\n");
  FUNC_7(VAR_6, 0, VAR_8);
  return -VAR_2;
 }

 FUNC_8(&VAR_3);
 FUNC_4(VAR_5);
 while (VAR_7-- > 0)
  FUNC_5(VAR_4);
 FUNC_6(VAR_4, VAR_6, VAR_8);
 FUNC_9(&VAR_3);

 FUNC_3(VAR_9);
 return VAR_8;
}
