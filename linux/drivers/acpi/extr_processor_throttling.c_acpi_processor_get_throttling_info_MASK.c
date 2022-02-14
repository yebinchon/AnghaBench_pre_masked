
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct acpi_processor_throttling {scalar_t__ state; int state_count; int shared_type; int shared_cpu_map; scalar_t__ tsd_valid_flag; int * acpi_processor_set_throttling; int * acpi_processor_get_throttling; int duty_width; int duty_offset; int address; } ;
struct TYPE_5__ {int throttling; } ;
struct acpi_processor {TYPE_2__ flags; struct acpi_processor_throttling throttling; int id; } ;
struct TYPE_4__ {scalar_t__ throttle; } ;
struct TYPE_6__ {TYPE_1__ piix4; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct acpi_processor*) ;
 scalar_t__ FUNC_2 (struct acpi_processor*) ;
 int FUNC_3 (struct acpi_processor*) ;
 scalar_t__ FUNC_4 (struct acpi_processor*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct acpi_processor*) ;
 scalar_t__ FUNC_6 (struct acpi_processor*) ;
 int FUNC_7 (struct acpi_processor*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,int ) ;
 TYPE_3__ VAR_6 ;

int FUNC_9(struct acpi_processor *VAR_7)
{
 int VAR_8 = 0;
 struct acpi_processor_throttling *VAR_9;

 FUNC_0((VAR_0,
     "pblk_address[0x%08x] duty_offset[%d] duty_width[%d]\n",
     VAR_7->throttling.address,
     VAR_7->throttling.duty_offset,
     VAR_7->throttling.duty_width));





 if (FUNC_4(VAR_7) ||
  FUNC_5(VAR_7) ||
  FUNC_2(VAR_7))
 {
  VAR_7->throttling.acpi_processor_get_throttling =
      &VAR_2;
  VAR_7->throttling.acpi_processor_set_throttling =
      &VAR_4;
  if (FUNC_1(VAR_7))
   return 0;
 } else {
  VAR_7->throttling.acpi_processor_get_throttling =
      &VAR_3;
  VAR_7->throttling.acpi_processor_set_throttling =
      &VAR_5;
 }





 if (FUNC_6(VAR_7)) {
  VAR_9 = &VAR_7->throttling;
  VAR_9->tsd_valid_flag = 0;
  FUNC_8(VAR_7->id, VAR_9->shared_cpu_map);
  VAR_9->shared_type = VAR_1;
 }






 if (VAR_6.piix4.throttle) {
  FUNC_0((VAR_0,
      "Throttling not supported on PIIX4 A- or B-step\n"));
  return 0;
 }

 FUNC_0((VAR_0, "Found %d throttling states\n",
     VAR_7->throttling.state_count));

 VAR_7->flags.throttling = 1;







 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  goto end;

 if (VAR_7->throttling.state) {
  FUNC_0((VAR_0,
      "Disabling throttling (was T%d)\n",
      VAR_7->throttling.state));
  VAR_8 = FUNC_7(VAR_7, 0, 0);
  if (VAR_8)
   goto end;
 }

      end:
 if (VAR_8)
  VAR_7->flags.throttling = 0;

 return VAR_8;
}
