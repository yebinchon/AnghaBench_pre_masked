
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_lpat_conversion_table {int lpat_count; struct acpi_lpat* lpat; } ;
struct acpi_lpat {int temp; int raw; } ;


 int VAR_0 ;

int FUNC_0(struct acpi_lpat_conversion_table *VAR_1,
     int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 struct acpi_lpat *VAR_7 = VAR_1->lpat;

 for (VAR_3 = 0; VAR_3 < VAR_1->lpat_count - 1; VAR_3++) {
  if (VAR_2 >= VAR_7[VAR_3].temp && VAR_2 <= VAR_7[VAR_3+1].temp)
   break;
 }

 if (VAR_3 == VAR_1->lpat_count - 1)
  return -VAR_0;

 VAR_4 = VAR_7[VAR_3+1].temp - VAR_7[VAR_3].temp;
 VAR_5 = VAR_7[VAR_3+1].raw - VAR_7[VAR_3].raw;
 VAR_6 = VAR_7[VAR_3].raw + (VAR_2 - VAR_7[VAR_3].temp) * VAR_5 / VAR_4;

 return VAR_6;
}
