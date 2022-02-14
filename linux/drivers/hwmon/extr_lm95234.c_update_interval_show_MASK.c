
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95234_data {int interval; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 struct lm95234_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct lm95234_data*) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct lm95234_data *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_2(VAR_4);

 if (VAR_5)
  return VAR_5;

 return FUNC_3(VAR_3, "%lu\n",
         FUNC_0(VAR_4->interval * 1000, VAR_0));
}
