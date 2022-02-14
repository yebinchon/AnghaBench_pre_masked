
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_processor_throttling_arg {int force; int target_state; struct acpi_processor* pr; } ;
struct TYPE_2__ {long (* acpi_processor_set_throttling ) (struct acpi_processor*,int ,int ) ;} ;
struct acpi_processor {TYPE_1__ throttling; } ;


 long FUNC_0 (struct acpi_processor*,int ,int ) ;

__attribute__((used)) static long FUNC_1(void *VAR_0)
{
 struct acpi_processor_throttling_arg *VAR_1 = VAR_0;
 struct acpi_processor *VAR_2 = VAR_1->pr;

 return VAR_2->throttling.acpi_processor_set_throttling(VAR_2,
   VAR_1->target_state, VAR_1->force);
}
