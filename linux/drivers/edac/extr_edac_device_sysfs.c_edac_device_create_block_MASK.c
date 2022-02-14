
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int parent; } ;
struct edac_device_instance {int kobj; int name; } ;
struct edac_device_ctl_info {int kobj; } ;
struct edac_device_block {int nr_attribs; struct kobject kobj; struct edac_dev_sysfs_block_attribute* block_attributes; int name; } ;
struct TYPE_2__ {int name; } ;
struct edac_dev_sysfs_block_attribute {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,struct kobject*,...) ;
 struct kobject* FUNC_1 (int *) ;
 int FUNC_2 (struct kobject*,int *,int *,char*,int ) ;
 int FUNC_3 (struct kobject*) ;
 int FUNC_4 (struct kobject*,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct kobject*,int ,int) ;
 int FUNC_6 (struct kobject*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct edac_device_ctl_info *VAR_3,
    struct edac_device_instance *VAR_4,
    struct edac_device_block *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct edac_dev_sysfs_block_attribute *VAR_8;
 struct kobject *VAR_9;

 FUNC_0(4, "Instance '%s' inst_p=%p  block '%s'  block_p=%p\n",
   VAR_4->name, VAR_4, VAR_5->name, VAR_5);
 FUNC_0(4, "block kobj=%p  block kobj->parent=%p\n",
   &VAR_5->kobj, &VAR_5->kobj.parent);


 FUNC_5(&VAR_5->kobj, 0, sizeof(struct kobject));




 VAR_9 = FUNC_1(&VAR_3->kobj);
 if (!VAR_9) {
  VAR_7 = -VAR_0;
  goto err_out;
 }


 VAR_7 = FUNC_2(&VAR_5->kobj, &VAR_2,
       &VAR_4->kobj,
       "%s", VAR_5->name);
 if (VAR_7) {
  FUNC_0(1, "Failed to register instance '%s'\n", VAR_5->name);
  FUNC_3(VAR_9);
  VAR_7 = -VAR_0;
  goto err_out;
 }




 VAR_8 = VAR_5->block_attributes;
 if (VAR_8 && VAR_5->nr_attribs) {
  for (VAR_6 = 0; VAR_6 < VAR_5->nr_attribs; VAR_6++, VAR_8++) {

   FUNC_0(4, "creating block attrib='%s' attrib->%p to kobj=%p\n",
     VAR_8->attr.name,
     VAR_8, &VAR_5->kobj);


   VAR_7 = FUNC_6(&VAR_5->kobj,
    &VAR_8->attr);
   if (VAR_7)
    goto err_on_attrib;
  }
 }
 FUNC_4(&VAR_5->kobj, VAR_1);

 return 0;


err_on_attrib:
 FUNC_3(&VAR_5->kobj);

err_out:
 return VAR_7;
}
