
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm92_data {int * temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct lm92_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
       struct device_attribute *VAR_3, char *VAR_4)
{
 struct lm92_data *VAR_5 = FUNC_1(VAR_2);

 return FUNC_2(VAR_4, "%d\n", FUNC_0(VAR_5->temp[VAR_1])
         + FUNC_0(VAR_5->temp[VAR_0]));
}
