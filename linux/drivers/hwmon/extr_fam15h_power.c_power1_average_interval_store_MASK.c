
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fam15h_power_data {unsigned long power_period; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct fam15h_power_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct fam15h_power_data *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 > VAR_1)
  return -VAR_0;


 if (VAR_7 <= 0)
  return -VAR_0;

 VAR_6->power_period = VAR_7;

 return VAR_5;
}
