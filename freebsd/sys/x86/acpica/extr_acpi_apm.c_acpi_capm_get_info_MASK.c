
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_battinfo {int min; void* cap; } ;
typedef TYPE_1__* apm_info_t ;
struct TYPE_3__ {int ai_infoversion; int ai_major; int ai_minor; int ai_capabilities; int ai_acline; int ai_batt_time; unsigned int ai_batteries; void* ai_batt_life; void* ai_batt_stat; int ai_status; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int *,struct acpi_battinfo*) ;
 unsigned int FUNC_2 () ;
 void* FUNC_3 (struct acpi_battinfo*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(apm_info_t VAR_2)
{
 int VAR_3;
 struct acpi_battinfo VAR_4;

 VAR_2->ai_infoversion = 1;
 VAR_2->ai_major = 1;
 VAR_2->ai_minor = 2;
 VAR_2->ai_status = VAR_1;
 VAR_2->ai_capabilities= 0xff00;

 if (FUNC_0(&VAR_3))
  VAR_2->ai_acline = VAR_0;
 else
  VAR_2->ai_acline = VAR_3;

 if (FUNC_1(((void*)0), &VAR_4) != 0) {
  VAR_2->ai_batt_stat = VAR_0;
  VAR_2->ai_batt_life = VAR_0;
  VAR_2->ai_batt_time = -1;
  VAR_2->ai_batteries = ~0U;
 } else {
  VAR_2->ai_batt_stat = FUNC_3(&VAR_4);
  VAR_2->ai_batt_life = VAR_4.cap;
  VAR_2->ai_batt_time = (VAR_4.min == -1) ? -1 : VAR_4.min * 60;
  VAR_2->ai_batteries = FUNC_2();
 }

 return (0);
}
