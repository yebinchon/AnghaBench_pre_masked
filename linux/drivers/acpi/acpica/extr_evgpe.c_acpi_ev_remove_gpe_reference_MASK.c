
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gpe_event_info {int runtime_count; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct acpi_gpe_event_info*) ;
 int FUNC_4 (struct acpi_gpe_event_info*,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

acpi_status
FUNC_6(struct acpi_gpe_event_info *VAR_4)
{
 acpi_status VAR_5 = VAR_2;

 FUNC_1(VAR_3);

 if (!VAR_4->runtime_count) {
  FUNC_5(VAR_1);
 }

 VAR_4->runtime_count--;
 if (!VAR_4->runtime_count) {



  VAR_5 = FUNC_3(VAR_4);
  if (FUNC_2(VAR_5)) {
   VAR_5 =
       FUNC_4(VAR_4,
      VAR_0);
  }

  if (FUNC_0(VAR_5)) {
   VAR_4->runtime_count++;
  }
 }

 FUNC_5(VAR_5);
}
