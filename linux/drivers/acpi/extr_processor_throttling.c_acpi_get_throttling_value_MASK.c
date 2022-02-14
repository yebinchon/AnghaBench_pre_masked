
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct acpi_processor_tx_tss {int control; } ;
struct TYPE_2__ {int state_count; int * states_tss; } ;
struct acpi_processor {TYPE_1__ throttling; } ;



__attribute__((used)) static int FUNC_0(struct acpi_processor *VAR_0,
   int VAR_1, u64 *VAR_2)
{
 int VAR_3 = -1;

 if (VAR_1 >= 0 && VAR_1 <= VAR_0->throttling.state_count) {
  struct acpi_processor_tx_tss *VAR_4 =
      (struct acpi_processor_tx_tss *)&(VAR_0->throttling.
            states_tss[VAR_1]);
  *VAR_2 = VAR_4->control;
  VAR_3 = 0;
 }
 return VAR_3;
}
