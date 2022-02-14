
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transient_trig_data {int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct transient_trig_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct transient_trig_data *VAR_4 =
  FUNC_0(VAR_1);
 int VAR_5;

 VAR_5 = (VAR_4->state == VAR_0) ? 1 : 0;
 return FUNC_1(VAR_3, "%d\n", VAR_5);
}
