
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct core_vmid {int num_vmids_available; int * ptb_assigned_to_vmid; } ;



__attribute__((used)) static void FUNC_0(struct core_vmid *VAR_0, unsigned int VAR_1, uint64_t VAR_2)
{
 VAR_0->ptb_assigned_to_vmid[VAR_1] = VAR_2;
 VAR_0->num_vmids_available--;
}
