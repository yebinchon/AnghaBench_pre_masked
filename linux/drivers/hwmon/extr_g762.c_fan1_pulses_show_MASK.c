
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g762_data {int fan_cmd1; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct g762_data*) ;
 int FUNC_2 (struct g762_data*) ;
 struct g762_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct g762_data *VAR_3 = FUNC_3(VAR_0);

 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 return FUNC_4(VAR_2, "%d\n", FUNC_0(VAR_3->fan_cmd1));
}
