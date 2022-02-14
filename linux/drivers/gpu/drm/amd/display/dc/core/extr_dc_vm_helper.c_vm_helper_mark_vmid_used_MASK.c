
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct vmid_usage {int* vmid_usage; } ;
struct vm_helper {struct vmid_usage* hubp_vmid_usage; } ;



void FUNC_0(struct vm_helper *VAR_0, unsigned int VAR_1, uint8_t VAR_2)
{
 struct vmid_usage VAR_3 = VAR_0->hubp_vmid_usage[VAR_2];

 VAR_3.vmid_usage[0] = VAR_3.vmid_usage[1];
 VAR_3.vmid_usage[1] = 1 << VAR_1;
}
