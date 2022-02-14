
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int * pointer; } ;
union acpi_object {TYPE_1__ buffer; int type; } ;
typedef int u8 ;
struct device {int dummy; } ;
struct acpi_tad_rt {int year; int month; int hour; int minute; int second; int tz; int daylight; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (union acpi_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,struct acpi_object_list*,unsigned long long*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, struct acpi_tad_rt *VAR_4)
{
 acpi_handle VAR_5 = FUNC_1(VAR_3);
 union acpi_object VAR_6[] = {
  { .type = VAR_0, },
 };
 struct acpi_object_list VAR_7 = {
  .pointer = VAR_6,
  .count = FUNC_2(VAR_6),
 };
 unsigned long long VAR_8;
 acpi_status VAR_9;

 if (VAR_4->year < 1900 || VAR_4->year > 9999 ||
     VAR_4->month < 1 || VAR_4->month > 12 ||
     VAR_4->hour > 23 || VAR_4->minute > 59 || VAR_4->second > 59 ||
     VAR_4->tz < -1440 || (VAR_4->tz > 1440 && VAR_4->tz != 2047) ||
     VAR_4->daylight > 3)
  return -VAR_2;

 VAR_6[0].buffer.pointer = (u8 *)VAR_4;
 VAR_6[0].buffer.length = sizeof(*VAR_4);

 FUNC_4(VAR_3);

 VAR_9 = FUNC_3(VAR_5, "_SRT", &VAR_7, &VAR_8);

 FUNC_5(VAR_3);

 if (FUNC_0(VAR_9) || VAR_8)
  return -VAR_1;

 return 0;
}
