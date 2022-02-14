
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cpuidle_driver {char* name; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct cpuidle_driver* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 ssize_t VAR_4;
 struct cpuidle_driver *VAR_5;

 FUNC_1(&VAR_0);
 VAR_5 = FUNC_0();
 if (VAR_5)
  VAR_4 = FUNC_3(VAR_3, "%s\n", VAR_5->name);
 else
  VAR_4 = FUNC_3(VAR_3, "none\n");
 FUNC_2(&VAR_0);

 return VAR_4;
}
