
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct find_dmi_data {scalar_t__ instance_countdown; int private; int (* callback ) (struct dmi_sysfs_entry*,struct dmi_header const*,int ) ;int ret; struct dmi_sysfs_entry* entry; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct dmi_sysfs_entry {TYPE_1__ dh; } ;
struct dmi_header {scalar_t__ type; } ;


 int FUNC_0 (struct dmi_sysfs_entry*,struct dmi_header const*,int ) ;

__attribute__((used)) static void FUNC_1(const struct dmi_header *VAR_0,
      void *VAR_1)
{
 struct find_dmi_data *VAR_2 = VAR_1;
 struct dmi_sysfs_entry *VAR_3 = VAR_2->entry;


 if (VAR_0->type != VAR_3->dh.type)
  return;

 if (VAR_2->instance_countdown != 0) {

  VAR_2->instance_countdown--;
  return;
 }





 VAR_2->instance_countdown--;


 VAR_2->ret = VAR_2->callback(VAR_3, VAR_0, VAR_2->private);
}
