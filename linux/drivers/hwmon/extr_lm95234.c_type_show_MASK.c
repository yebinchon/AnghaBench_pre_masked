
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm95234_data {int sensor_type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct lm95234_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lm95234_data*) ;
 int FUNC_2 (char*,char*) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct lm95234_data *VAR_3 = FUNC_0(VAR_0);
 u8 VAR_4 = FUNC_3(VAR_1)->index;
 int VAR_5 = FUNC_1(VAR_3);

 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_2, VAR_3->sensor_type & VAR_4 ? "1\n" : "2\n");
}
