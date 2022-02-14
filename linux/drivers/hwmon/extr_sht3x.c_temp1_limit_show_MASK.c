
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sht3x_data {int* temperature_limits; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {size_t index; } ;


 int VAR_0 ;
 struct sht3x_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct sht3x_data *VAR_4 = FUNC_0(VAR_1);
 u8 VAR_5 = FUNC_2(VAR_2)->index;
 int VAR_6 = VAR_4->temperature_limits[VAR_5];

 return FUNC_1(VAR_3, VAR_0, "%d\n", VAR_6);
}
