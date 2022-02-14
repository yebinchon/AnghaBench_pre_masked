
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g762_data {int fan_cmd1; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct g762_data*) ;
 int FUNC_1 (struct g762_data*) ;
 struct g762_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct g762_data *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_3(VAR_3, "%d\n",
         (!!(VAR_4->fan_cmd1 & VAR_0)) + 1);
}
