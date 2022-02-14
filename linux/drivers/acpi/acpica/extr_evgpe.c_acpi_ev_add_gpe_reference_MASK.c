
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct acpi_gpe_event_info {int runtime_count; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct acpi_gpe_event_info*) ;
 int FUNC_4 (struct acpi_gpe_event_info*) ;
 int FUNC_5 (struct acpi_gpe_event_info*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(struct acpi_gpe_event_info *VAR_4,
     u8 VAR_5)
{
 acpi_status VAR_6 = VAR_2;

 FUNC_1(VAR_3);

 if (VAR_4->runtime_count == VAR_0) {
  FUNC_6(VAR_1);
 }

 VAR_4->runtime_count++;
 if (VAR_4->runtime_count == 1) {



  if (VAR_5) {
   (void)FUNC_5(VAR_4);
  }

  VAR_6 = FUNC_4(VAR_4);
  if (FUNC_2(VAR_6)) {
   VAR_6 = FUNC_3(VAR_4);
  }

  if (FUNC_0(VAR_6)) {
   VAR_4->runtime_count--;
  }
 }

 FUNC_6(VAR_6);
}
