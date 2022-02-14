
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_sysfs {scalar_t__ fw_priv; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;
 struct fw_sysfs* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct fw_sysfs *VAR_4 = FUNC_4(VAR_1);
 int VAR_5 = 0;

 FUNC_1(&VAR_0);
 if (VAR_4->fw_priv)
  VAR_5 = FUNC_0(VAR_4->fw_priv);
 FUNC_2(&VAR_0);

 return FUNC_3(VAR_3, "%d\n", VAR_5);
}
