
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it87_data {unsigned long vrm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct it87_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct it87_data *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6;

 if (FUNC_1(VAR_3, 10, &VAR_6) < 0)
  return -VAR_0;

 VAR_5->vrm = VAR_6;

 return VAR_4;
}
