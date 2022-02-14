
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_tad_rt {int year; int month; int day; int hour; int minute; int second; int tz; int daylight; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,struct acpi_tad_rt*) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct acpi_tad_rt VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_2, "%u:%u:%u:%u:%u:%u:%d:%u\n",
         VAR_3.year, VAR_3.month, VAR_3.day, VAR_3.hour, VAR_3.minute, VAR_3.second,
         VAR_3.tz, VAR_3.daylight);
}
