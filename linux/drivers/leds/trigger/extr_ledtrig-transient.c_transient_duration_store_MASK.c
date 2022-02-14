
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transient_trig_data {unsigned long duration; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t FUNC_0 (char const*,int,unsigned long*) ;
 struct transient_trig_data* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct transient_trig_data *VAR_4 =
  FUNC_1(VAR_0);
 unsigned long VAR_5;
 ssize_t VAR_6;

 VAR_6 = FUNC_0(VAR_2, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->duration = VAR_5;
 return VAR_3;
}
