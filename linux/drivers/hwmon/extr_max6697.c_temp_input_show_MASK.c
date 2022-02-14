
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max6697_data {int** temp; int temp_offset; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (struct max6697_data*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct max6697_data*) ;
 struct max6697_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5 = FUNC_4(VAR_3)->index;
 struct max6697_data *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = (VAR_6->temp[VAR_5][VAR_1] - VAR_6->temp_offset) << 3;
 VAR_7 |= VAR_6->temp[VAR_5][VAR_0] >> 5;

 return FUNC_3(VAR_4, "%d\n", VAR_7 * 125);
}
