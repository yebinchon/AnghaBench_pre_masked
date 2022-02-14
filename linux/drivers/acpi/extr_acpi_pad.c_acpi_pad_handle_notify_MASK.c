
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct acpi_buffer {int length; void* pointer; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct acpi_buffer*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(acpi_handle VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;
 struct acpi_buffer VAR_5 = {
  .length = 4,
  .pointer = (void *)&VAR_4,
 };

 FUNC_4(&VAR_1);
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0) {
  FUNC_5(&VAR_1);
  return;
 }
 FUNC_1(VAR_3);
 VAR_4 = FUNC_2();
 FUNC_0(VAR_2, VAR_0, 0, &VAR_5);
 FUNC_5(&VAR_1);
}
