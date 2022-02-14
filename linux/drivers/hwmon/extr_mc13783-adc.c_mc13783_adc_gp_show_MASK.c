
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct device*,struct device_attribute*,unsigned int*) ;
 int FUNC_2 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 unsigned VAR_3;
 int VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);

 if (VAR_4)
  return VAR_4;





 VAR_3 = FUNC_0(VAR_3 * 9, 4);

 return FUNC_2(VAR_2, "%u\n", VAR_3);
}
