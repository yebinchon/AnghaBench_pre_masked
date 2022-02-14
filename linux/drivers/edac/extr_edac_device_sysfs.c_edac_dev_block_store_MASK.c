
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct edac_dev_sysfs_block_attribute {int (* store ) (struct kobject*,struct attribute*,char const*,size_t) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct kobject*,struct attribute*,char const*,size_t) ;
 struct edac_dev_sysfs_block_attribute* FUNC_1 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_1,
    struct attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct edac_dev_sysfs_block_attribute *VAR_5;

 VAR_5 = FUNC_1(VAR_2);

 if (VAR_5->store)
  return VAR_5->store(VAR_1, VAR_2, VAR_3, VAR_4);
 return -VAR_0;
}
