
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emc2103_data {int fan_tach; int fan_multiplier; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct emc2103_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct emc2103_data *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;
 if (VAR_4->fan_tach != 0)
  VAR_5 = (VAR_0 * VAR_4->fan_multiplier) / VAR_4->fan_tach;
 return FUNC_1(VAR_3, "%d\n", VAR_5);
}
