
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc {TYPE_2__* vm_helper; } ;
struct TYPE_4__ {int num_vmid; TYPE_1__* hubp_vmid_usage; } ;
struct TYPE_3__ {int* vmid_usage; } ;



int FUNC_0(struct dc *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->vm_helper->num_vmid; VAR_1++)
  VAR_2 |= VAR_0->vm_helper->hubp_vmid_usage[VAR_1].vmid_usage[0]
   | VAR_0->vm_helper->hubp_vmid_usage[VAR_1].vmid_usage[1];
 return VAR_2;
}
