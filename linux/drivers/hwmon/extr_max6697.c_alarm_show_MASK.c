
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct max6697_data {int alarms; TYPE_1__* chip; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int* alarm_map; } ;


 scalar_t__ FUNC_0 (struct max6697_data*) ;
 int FUNC_1 (struct max6697_data*) ;
 struct max6697_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_2__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
     char *VAR_2)
{
 int VAR_3 = FUNC_4(VAR_1)->index;
 struct max6697_data *VAR_4 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_4->chip->alarm_map)
  VAR_3 = VAR_4->chip->alarm_map[VAR_3];

 return FUNC_3(VAR_2, "%u\n", (VAR_4->alarms >> VAR_3) & 0x1);
}
