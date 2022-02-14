
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transient_trig_data {int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char const*,int,unsigned long*) ;
 struct transient_trig_data* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct transient_trig_data *VAR_7 =
  FUNC_1(VAR_3);
 unsigned long VAR_8;
 ssize_t VAR_9;

 VAR_9 = FUNC_0(VAR_5, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 != 1 && VAR_8 != 0)
  return -VAR_0;

 VAR_7->state = (VAR_8 == 1) ? VAR_1 : VAR_2;
 return VAR_6;
}
