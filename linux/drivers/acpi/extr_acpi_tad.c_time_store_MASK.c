
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_tad_rt {int year; int month; int day; int hour; int minute; int second; int tz; int daylight; int padding; scalar_t__ msec; scalar_t__ valid; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int*) ;
 int FUNC_1 (struct device*,struct acpi_tad_rt*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,size_t,int ) ;
 scalar_t__ FUNC_4 (char*,int,int*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3, struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct acpi_tad_rt VAR_7;
 char *VAR_8, *VAR_9;
 int VAR_10, VAR_11 = -VAR_0;

 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_8, &VAR_10);
 if (!VAR_9)
  goto out_free;

 VAR_7.year = VAR_10;

 VAR_9 = FUNC_0(VAR_9, &VAR_10);
 if (!VAR_9)
  goto out_free;

 VAR_7.month = VAR_10;

 VAR_9 = FUNC_0(VAR_9, &VAR_10);
 if (!VAR_9)
  goto out_free;

 VAR_7.day = VAR_10;

 VAR_9 = FUNC_0(VAR_9, &VAR_10);
 if (!VAR_9)
  goto out_free;

 VAR_7.hour = VAR_10;

 VAR_9 = FUNC_0(VAR_9, &VAR_10);
 if (!VAR_9)
  goto out_free;

 VAR_7.minute = VAR_10;

 VAR_9 = FUNC_0(VAR_9, &VAR_10);
 if (!VAR_9)
  goto out_free;

 VAR_7.second = VAR_10;

 VAR_9 = FUNC_0(VAR_9, &VAR_10);
 if (!VAR_9)
  goto out_free;

 VAR_7.tz = VAR_10;

 if (FUNC_4(VAR_9, 10, &VAR_10))
  goto out_free;

 VAR_7.daylight = VAR_10;

 VAR_7.valid = 0;
 VAR_7.msec = 0;
 FUNC_5(VAR_7.padding, 0, 3);

 VAR_11 = FUNC_1(VAR_3, &VAR_7);

out_free:
 FUNC_2(VAR_8);
 return VAR_11 ? VAR_11 : VAR_6;
}
