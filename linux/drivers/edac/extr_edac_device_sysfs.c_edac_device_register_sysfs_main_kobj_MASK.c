
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct edac_device_ctl_info {int owner; int name; int kobj; struct bus_type* edac_subsys; } ;
struct bus_type {TYPE_1__* dev_root; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 struct bus_type* FUNC_1 () ;
 int FUNC_2 (int *,int *,int *,char*,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct edac_device_ctl_info *VAR_4)
{
 struct bus_type *VAR_5;
 int VAR_6;

 FUNC_0(1, "\n");


 VAR_5 = FUNC_1();


 VAR_4->edac_subsys = VAR_5;


 FUNC_4(&VAR_4->kobj, 0, sizeof(struct kobject));




 VAR_4->owner = VAR_2;

 if (!FUNC_6(VAR_4->owner)) {
  VAR_6 = -VAR_0;
  goto err_out;
 }


 VAR_6 = FUNC_2(&VAR_4->kobj, &VAR_3,
       &VAR_5->dev_root->kobj,
       "%s", VAR_4->name);
 if (VAR_6) {
  FUNC_0(1, "Failed to register '.../edac/%s'\n",
    VAR_4->name);
  goto err_kobj_reg;
 }
 FUNC_3(&VAR_4->kobj, VAR_1);





 FUNC_0(4, "Registered '.../edac/%s' kobject\n", VAR_4->name);

 return 0;


err_kobj_reg:
 FUNC_5(VAR_4->owner);

err_out:
 return VAR_6;
}
