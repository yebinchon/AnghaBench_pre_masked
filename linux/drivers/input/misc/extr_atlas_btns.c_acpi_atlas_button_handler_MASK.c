
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,unsigned long,scalar_t__) ;

__attribute__((used)) static acpi_status FUNC_4(u32 VAR_7,
        acpi_physical_address VAR_8,
        u32 VAR_9, u64 *VAR_10,
        void *VAR_11, void *VAR_12)
{
 acpi_status VAR_13;

 if (VAR_7 == VAR_0) {
  int VAR_14 = VAR_8 & 0x0f;
  int VAR_15 = !(VAR_8 & 0x10);

  FUNC_0(VAR_6, VAR_3, VAR_4, VAR_14);
  FUNC_1(VAR_6, VAR_5[VAR_14], VAR_15);
  FUNC_2(VAR_6);

  VAR_13 = VAR_2;
 } else {
  FUNC_3("shrugged on unexpected function: function=%x,address=%lx,value=%x\n",
   VAR_7, (unsigned long)VAR_8, (u32)*VAR_10);
  VAR_13 = VAR_1;
 }

 return VAR_13;
}
