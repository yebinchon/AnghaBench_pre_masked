
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ acpi_size ;



__attribute__((used)) static acpi_size
FUNC_0(const char *VAR_0, acpi_size VAR_1)
{
 u32 VAR_2 = 0;

 while (*VAR_0 && VAR_1) {
  VAR_2++;
  VAR_0++;
  VAR_1--;
 }

 return (VAR_2);
}
