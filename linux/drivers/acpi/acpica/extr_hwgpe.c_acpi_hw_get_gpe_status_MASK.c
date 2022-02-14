
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct acpi_gpe_register_info {int enable_for_run; int mask_for_run; int enable_for_wake; int status_address; int enable_address; } ;
struct acpi_gpe_event_info {struct acpi_gpe_register_info* register_info; int flags; } ;
typedef int acpi_status ;
typedef int acpi_event_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct acpi_gpe_event_info*) ;
 int FUNC_4 (int*,int *) ;

acpi_status
FUNC_5(struct acpi_gpe_event_info *VAR_9,
         acpi_event_status *VAR_10)
{
 u64 VAR_11;
 u32 VAR_12;
 struct acpi_gpe_register_info *VAR_13;
 acpi_event_status VAR_14 = 0;
 acpi_status VAR_15;

 FUNC_1();

 if (!VAR_10) {
  return (VAR_7);
 }



 if (FUNC_2(VAR_9->flags) !=
     VAR_6) {
  VAR_14 |= VAR_2;
 }



 VAR_13 = VAR_9->register_info;



 VAR_12 = FUNC_3(VAR_9);



 if (VAR_12 & VAR_13->enable_for_run) {
  VAR_14 |= VAR_0;
 }



 if (VAR_12 & VAR_13->mask_for_run) {
  VAR_14 |= VAR_3;
 }



 if (VAR_12 & VAR_13->enable_for_wake) {
  VAR_14 |= VAR_5;
 }



 VAR_15 = FUNC_4(&VAR_11, &VAR_13->enable_address);
 if (FUNC_0(VAR_15)) {
  return (VAR_15);
 }

 if (VAR_12 & VAR_11) {
  VAR_14 |= VAR_1;
 }



 VAR_15 = FUNC_4(&VAR_11, &VAR_13->status_address);
 if (FUNC_0(VAR_15)) {
  return (VAR_15);
 }

 if (VAR_12 & VAR_11) {
  VAR_14 |= VAR_4;
 }



 (*VAR_10) = VAR_14;
 return (VAR_8);
}
