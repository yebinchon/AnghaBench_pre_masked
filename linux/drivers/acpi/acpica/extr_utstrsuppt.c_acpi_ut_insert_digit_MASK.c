
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static acpi_status
FUNC_4(u64 *VAR_0, u32 VAR_1, int VAR_2)
{
 acpi_status VAR_3;
 u64 VAR_4;



 VAR_3 = FUNC_3(*VAR_0, VAR_1, &VAR_4);
 if (FUNC_0(VAR_3)) {
  return (VAR_3);
 }



 VAR_3 =
     FUNC_2(VAR_4,
      FUNC_1(VAR_2),
      VAR_0);

 return (VAR_3);
}
