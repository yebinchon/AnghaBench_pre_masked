
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct edac_device_instance {int name; int nr_blocks; struct kobject kobj; int * blocks; struct edac_device_ctl_info* ctl; } ;
struct edac_device_ctl_info {int kobj; struct edac_device_instance* instances; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (struct edac_device_ctl_info*,struct edac_device_instance*,int *) ;
 int FUNC_2 (struct edac_device_ctl_info*,int *) ;
 struct kobject* FUNC_3 (int *) ;
 int FUNC_4 (struct kobject*,int *,int *,char*,int) ;
 int FUNC_5 (struct kobject*) ;
 int FUNC_6 (struct kobject*,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct kobject*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct edac_device_ctl_info *VAR_3,
    int VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7;
 struct edac_device_instance *VAR_8;
 struct kobject *VAR_9;

 VAR_8 = &VAR_3->instances[VAR_4];


 FUNC_7(&VAR_8->kobj, 0, sizeof(struct kobject));

 VAR_8->ctl = VAR_3;




 VAR_9 = FUNC_3(&VAR_3->kobj);
 if (!VAR_9) {
  VAR_7 = -VAR_0;
  goto err_out;
 }


 VAR_7 = FUNC_4(&VAR_8->kobj, &VAR_2,
       &VAR_3->kobj, "%s", VAR_8->name);
 if (VAR_7 != 0) {
  FUNC_0(2, "Failed to register instance '%s'\n",
    VAR_8->name);
  FUNC_5(VAR_9);
  goto err_out;
 }

 FUNC_0(4, "now register '%d' blocks for instance %d\n",
   VAR_8->nr_blocks, VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_8->nr_blocks; VAR_5++) {
  VAR_7 = FUNC_1(VAR_3, VAR_8,
      &VAR_8->blocks[VAR_5]);
  if (VAR_7) {

   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    FUNC_2(VAR_3,
       &VAR_8->blocks[VAR_6]);
   goto err_release_instance_kobj;
  }
 }
 FUNC_6(&VAR_8->kobj, VAR_1);

 FUNC_0(4, "Registered instance %d '%s' kobject\n",
   VAR_4, VAR_8->name);

 return 0;


err_release_instance_kobj:
 FUNC_5(&VAR_8->kobj);

err_out:
 return VAR_7;
}
