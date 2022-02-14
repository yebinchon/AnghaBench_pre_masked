
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_driver_data {int dummy; } ;
struct firmware {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rmi_driver_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,char*) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char*,struct device*) ;
 int FUNC_4 (struct rmi_driver_data*,struct firmware const*) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct rmi_driver_data *VAR_6 = FUNC_0(VAR_2);
 char VAR_7[VAR_1];
 const struct firmware *VAR_8;
 size_t VAR_9 = VAR_5;
 int VAR_10;

 if (VAR_5 == 0 || VAR_5 >= VAR_1)
  return -VAR_0;

 if (VAR_4[VAR_5 - 1] == '\0' || VAR_4[VAR_5 - 1] == '\n')
  VAR_9 -= 1;

 FUNC_5(VAR_7, VAR_4, VAR_9);
 VAR_7[VAR_9] = '\0';

 VAR_10 = FUNC_3(&VAR_8, VAR_7, VAR_2);
 if (VAR_10)
  return VAR_10;

 FUNC_1(VAR_2, "Flashing %s\n", VAR_7);

 VAR_10 = FUNC_4(VAR_6, VAR_8);

 FUNC_2(VAR_8);

 return VAR_10 ?: VAR_5;
}
