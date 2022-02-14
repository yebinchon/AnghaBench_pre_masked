
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {char* name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (char*,int,char*,char*) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_1);
 if (VAR_6 != -VAR_0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_1 -1);
 if (VAR_6 != -VAR_0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_1, "platform:%s\n", VAR_5->name);

 return (VAR_6 >= VAR_1) ? (VAR_1 - 1) : VAR_6;
}
