
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {unsigned int opmode_delay; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct picolcd_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct picolcd_data *VAR_5 = FUNC_0(VAR_1);
 unsigned VAR_6;
 if (FUNC_1(VAR_3, "%u", &VAR_6) != 1)
  return -VAR_0;
 if (VAR_6 > 30000)
  return -VAR_0;
 else
  VAR_5->opmode_delay = VAR_6;
 return VAR_4;
}
