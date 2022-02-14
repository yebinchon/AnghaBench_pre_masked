
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct acpi_gpe_register_info {int mask_for_run; } ;
struct acpi_gpe_event_info {int disable_for_dispatch; scalar_t__ runtime_count; struct acpi_gpe_register_info* register_info; } ;
typedef int acpi_status ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct acpi_gpe_event_info*) ;
 int FUNC_4 (struct acpi_gpe_event_info*,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;

acpi_status
FUNC_6(struct acpi_gpe_event_info *VAR_6, u8 VAR_7)
{
 struct acpi_gpe_register_info *VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_5);

 VAR_8 = VAR_6->register_info;
 if (!VAR_8) {
  FUNC_5(VAR_3);
 }

 VAR_9 = FUNC_3(VAR_6);



 if (VAR_7) {
  if (VAR_9 & VAR_8->mask_for_run) {
   FUNC_5(VAR_2);
  }

  (void)FUNC_4(VAR_6, VAR_0);
  FUNC_2(VAR_8->mask_for_run, (u8)VAR_9);
 } else {
  if (!(VAR_9 & VAR_8->mask_for_run)) {
   FUNC_5(VAR_2);
  }

  FUNC_0(VAR_8->mask_for_run,
          (u8)VAR_9);
  if (VAR_6->runtime_count
      && !VAR_6->disable_for_dispatch) {
   (void)FUNC_4(VAR_6,
        VAR_1);
  }
 }

 FUNC_5(VAR_4);
}
