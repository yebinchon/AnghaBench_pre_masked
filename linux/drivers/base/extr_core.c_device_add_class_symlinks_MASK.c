
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {int kobj; TYPE_4__* class; TYPE_1__* parent; } ;
struct TYPE_8__ {TYPE_3__* p; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_7__ {TYPE_2__ subsys; } ;
struct TYPE_5__ {int kobj; } ;


 TYPE_4__ VAR_0 ;
 char* FUNC_0 (struct device*) ;
 struct device_node* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int * FUNC_4 (struct device_node*) ;
 int FUNC_5 (int *,int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 struct device_node *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (VAR_3) {
  VAR_4 = FUNC_5(&VAR_2->kobj, FUNC_4(VAR_3), "of_node");
  if (VAR_4)
   FUNC_2(VAR_2, "Error %d creating of_node link\n",VAR_4);

 }

 if (!VAR_2->class)
  return 0;

 VAR_4 = FUNC_5(&VAR_2->kobj,
      &VAR_2->class->p->subsys.kobj,
      "subsystem");
 if (VAR_4)
  goto out_devnode;

 if (VAR_2->parent && FUNC_3(VAR_2)) {
  VAR_4 = FUNC_5(&VAR_2->kobj, &VAR_2->parent->kobj,
       "device");
  if (VAR_4)
   goto out_subsys;
 }
 VAR_4 = FUNC_5(&VAR_2->class->p->subsys.kobj,
      &VAR_2->kobj, FUNC_0(VAR_2));
 if (VAR_4)
  goto out_device;

 return 0;

out_device:
 FUNC_6(&VAR_2->kobj, "device");

out_subsys:
 FUNC_6(&VAR_2->kobj, "subsystem");
out_devnode:
 FUNC_6(&VAR_2->kobj, "of_node");
 return VAR_4;
}
