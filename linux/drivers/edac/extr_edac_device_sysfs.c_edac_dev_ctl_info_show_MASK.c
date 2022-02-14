
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct edac_device_ctl_info {int dummy; } ;
struct ctl_info_attribute {int (* show ) (struct edac_device_ctl_info*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct edac_device_ctl_info*,char*) ;
 struct edac_device_ctl_info* FUNC_1 (struct kobject*) ;
 struct ctl_info_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
    struct attribute *VAR_2, char *VAR_3)
{
 struct edac_device_ctl_info *VAR_4 = FUNC_1(VAR_1);
 struct ctl_info_attribute *VAR_5 = FUNC_2(VAR_2);

 if (VAR_5->show)
  return VAR_5->show(VAR_4, VAR_3);
 return -VAR_0;
}
