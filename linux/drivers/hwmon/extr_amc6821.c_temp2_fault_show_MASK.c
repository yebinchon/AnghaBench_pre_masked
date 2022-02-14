
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {int stat1; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct amc6821_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct amc6821_data *VAR_4 = FUNC_0(VAR_1);
 if (VAR_4->stat1 & VAR_0)
  return FUNC_1(VAR_3, "1");
 else
  return FUNC_1(VAR_3, "0");
}
