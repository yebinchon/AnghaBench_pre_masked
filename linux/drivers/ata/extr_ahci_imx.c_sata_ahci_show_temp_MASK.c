
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,unsigned int*) ;
 int FUNC_1 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 unsigned int VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_2, "%u\n", VAR_3);
}
