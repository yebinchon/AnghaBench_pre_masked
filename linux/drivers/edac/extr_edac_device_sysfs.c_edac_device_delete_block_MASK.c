
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_device_ctl_info {int dummy; } ;
struct edac_device_block {int nr_attribs; int kobj; struct edac_dev_sysfs_block_attribute* block_attributes; } ;
struct edac_dev_sysfs_block_attribute {int dummy; } ;
struct attribute {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct attribute*) ;

__attribute__((used)) static void FUNC_2(struct edac_device_ctl_info *VAR_0,
    struct edac_device_block *VAR_1)
{
 struct edac_dev_sysfs_block_attribute *VAR_2;
 int VAR_3;




 VAR_2 = VAR_1->block_attributes;
 if (VAR_2 && VAR_1->nr_attribs) {
  for (VAR_3 = 0; VAR_3 < VAR_1->nr_attribs; VAR_3++, VAR_2++) {


   FUNC_1(&VAR_1->kobj,
    (struct attribute *) VAR_2);
  }
 }




 FUNC_0(&VAR_1->kobj);
}
