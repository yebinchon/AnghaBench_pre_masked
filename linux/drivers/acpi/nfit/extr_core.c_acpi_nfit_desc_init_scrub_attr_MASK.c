
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_node {int dummy; } ;
struct TYPE_2__ {struct kernfs_node* sd; } ;
struct device {TYPE_1__ kobj; } ;
struct acpi_nfit_desc {void* scrub_count_state; int nvdimm_bus; struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct kernfs_node*,char*) ;
 int FUNC_3 (struct kernfs_node*) ;
 struct device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct acpi_nfit_desc *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct kernfs_node *VAR_3;
 struct device *VAR_4;

 if (!FUNC_0(VAR_1->nvdimm_bus))
  return 0;

 VAR_4 = FUNC_4(VAR_1->nvdimm_bus);
 VAR_3 = FUNC_2(VAR_4->kobj.sd, "nfit");
 if (!VAR_3) {
  FUNC_1(VAR_2, "sysfs_get_dirent 'nfit' failed\n");
  return -VAR_0;
 }
 VAR_1->scrub_count_state = FUNC_2(VAR_3, "scrub");
 FUNC_3(VAR_3);
 if (!VAR_1->scrub_count_state) {
  FUNC_1(VAR_2, "sysfs_get_dirent 'scrub' failed\n");
  return -VAR_0;
 }

 return 0;
}
