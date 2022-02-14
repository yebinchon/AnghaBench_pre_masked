
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gtdt_header {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(void *VAR_1)
{
 struct acpi_gtdt_header *VAR_2 = VAR_1;

 return VAR_2->type == VAR_0;
}
