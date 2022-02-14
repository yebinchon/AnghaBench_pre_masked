
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int attr; } ;
struct ras_manager {scalar_t__ attr_inuse; TYPE_2__ sysfs_attr; } ;
struct ras_common_if {int dummy; } ;
struct amdgpu_device {TYPE_1__* dev; } ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 struct ras_manager* FUNC_0 (struct amdgpu_device*,struct ras_common_if*) ;
 int FUNC_1 (struct ras_manager*) ;
 int FUNC_2 (int *,int *,char*) ;

int FUNC_3(struct amdgpu_device *VAR_1,
  struct ras_common_if *VAR_2)
{
 struct ras_manager *VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_3 || !VAR_3->attr_inuse)
  return -VAR_0;

 FUNC_2(&VAR_1->dev->kobj,
    &VAR_3->sysfs_attr.attr,
    "ras");
 VAR_3->attr_inuse = 0;
 FUNC_1(VAR_3);

 return 0;
}
