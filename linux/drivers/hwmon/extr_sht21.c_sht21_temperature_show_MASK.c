
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht21 {int temperature; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct sht21* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 struct sht21 *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 < 0)
  return VAR_4;
 return FUNC_2(VAR_2, "%d\n", VAR_3->temperature);
}
