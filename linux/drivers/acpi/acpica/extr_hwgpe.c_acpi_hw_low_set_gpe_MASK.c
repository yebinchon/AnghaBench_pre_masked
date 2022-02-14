
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct acpi_gpe_register_info {int enable_mask; int mask_for_run; int enable_address; } ;
struct acpi_gpe_event_info {struct acpi_gpe_register_info* register_info; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;



 int FUNC_4 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct acpi_gpe_event_info*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int *) ;

acpi_status
FUNC_8(struct acpi_gpe_event_info *VAR_4, u32 VAR_5)
{
 struct acpi_gpe_register_info *VAR_6;
 acpi_status VAR_7 = VAR_3;
 u64 VAR_8;
 u32 VAR_9;

 FUNC_3();



 VAR_6 = VAR_4->register_info;
 if (!VAR_6) {
  return (VAR_2);
 }



 VAR_7 = FUNC_6(&VAR_8, &VAR_6->enable_address);
 if (FUNC_2(VAR_7)) {
  return (VAR_7);
 }



 VAR_9 = FUNC_5(VAR_4);
 switch (VAR_5) {
 case 130:



  if (!(VAR_9 & VAR_6->enable_mask)) {
   return (VAR_0);
  }



 case 128:

  FUNC_4(VAR_8, VAR_9);
  break;

 case 129:

  FUNC_0(VAR_8, VAR_9);
  break;

 default:

  FUNC_1((VAR_1, "Invalid GPE Action, %u", VAR_5));
  return (VAR_0);
 }

 if (!(VAR_9 & VAR_6->mask_for_run)) {



  VAR_7 =
      FUNC_7(VAR_8,
      &VAR_6->enable_address);
 }
 return (VAR_7);
}
