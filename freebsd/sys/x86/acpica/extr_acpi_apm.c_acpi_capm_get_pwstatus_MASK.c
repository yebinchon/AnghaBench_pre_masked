
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_battinfo {int min; int cap; } ;
typedef int * device_t ;
typedef TYPE_1__* apm_pwstatus_t ;
struct TYPE_3__ {scalar_t__ ap_device; int ap_batt_time; int ap_acline; int ap_batt_life; int ap_batt_flag; int ap_batt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int *,struct acpi_battinfo*) ;
 int FUNC_2 (struct acpi_battinfo*) ;
 int FUNC_3 (struct acpi_battinfo*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(apm_pwstatus_t VAR_5)
{
 device_t VAR_6;
 int VAR_7, VAR_8, VAR_9;
 struct acpi_battinfo VAR_10;

 if (VAR_5->ap_device != VAR_2 &&
     (VAR_5->ap_device < VAR_3 || VAR_5->ap_device > VAR_4))
  return (1);

 if (VAR_5->ap_device == VAR_2)
  VAR_9 = FUNC_1(((void*)0), &VAR_10);
 else {
  VAR_8 = VAR_5->ap_device - VAR_3;
  VAR_6 = FUNC_5(FUNC_4("battery"), VAR_8);
  if (VAR_6 != ((void*)0))
   VAR_9 = FUNC_1(VAR_6, &VAR_10);
  else
   VAR_9 = VAR_1;
 }
 if (VAR_9)
  return (1);

 VAR_5->ap_batt_stat = FUNC_3(&VAR_10);
 VAR_5->ap_batt_flag = FUNC_2(&VAR_10);
 VAR_5->ap_batt_life = VAR_10.cap;
 VAR_5->ap_batt_time = (VAR_10.min == -1) ? -1 : VAR_10.min * 60;

 if (FUNC_0(&VAR_7))
  VAR_5->ap_acline = VAR_0;
 else
  VAR_5->ap_acline = VAR_7;

 return (0);
}
