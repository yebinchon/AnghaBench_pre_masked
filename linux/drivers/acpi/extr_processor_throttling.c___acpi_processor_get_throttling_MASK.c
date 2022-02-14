
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long (* acpi_processor_get_throttling ) (struct acpi_processor*) ;} ;
struct acpi_processor {TYPE_1__ throttling; } ;


 long FUNC_0 (struct acpi_processor*) ;

__attribute__((used)) static long FUNC_1(void *VAR_0)
{
 struct acpi_processor *VAR_1 = VAR_0;

 return VAR_1->throttling.acpi_processor_get_throttling(VAR_1);
}
