
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct TYPE_3__ {int tc1; int tc2; int temperature; } ;
struct TYPE_4__ {TYPE_1__ passive; } ;
struct acpi_thermal {int temperature; int last_temperature; TYPE_2__ trips; int kelvin_offset; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
typedef enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct thermal_zone_device*,int,int*) ;
 scalar_t__ FUNC_2 (struct thermal_zone_device*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_5,
    int VAR_6, enum thermal_trend *VAR_7)
{
 struct acpi_thermal *VAR_8 = VAR_5->devdata;
 enum thermal_trip_type VAR_9;
 int VAR_10;

 if (FUNC_2(VAR_5, VAR_6, &VAR_9))
  return -VAR_0;

 if (VAR_9 == VAR_4) {
  int VAR_11;
  int VAR_12 = FUNC_0(
     VAR_8->temperature, VAR_8->kelvin_offset);
  if (FUNC_1(VAR_5, VAR_6, &VAR_11))
   return -VAR_0;

  if (VAR_12 > VAR_11) {
   *VAR_7 = VAR_2;
   return 0;
  } else {

   return -VAR_0;
  }
 }





 VAR_10 = (VAR_8->trips.passive.tc1 * (VAR_8->temperature - VAR_8->last_temperature))
  + (VAR_8->trips.passive.tc2
  * (VAR_8->temperature - VAR_8->trips.passive.temperature));

 if (VAR_10 > 0)
  *VAR_7 = VAR_2;
 else if (VAR_10 < 0)
  *VAR_7 = VAR_1;
 else
  *VAR_7 = VAR_3;
 return 0;
}
