
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(u32 VAR_2, acpi_handle VAR_3,
 u32 VAR_4, void *VAR_5)
{
 if (VAR_2 == VAR_1) {
  FUNC_1(VAR_4);
  FUNC_2("GPE event 0x%02x\n", VAR_4);
 } else if (VAR_2 == VAR_0) {
  FUNC_0(VAR_4);
  FUNC_2("Fixed event 0x%02x\n", VAR_4);
 } else {
  FUNC_2("Other event 0x%02x\n", VAR_4);
 }
}
