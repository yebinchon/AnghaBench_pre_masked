
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct core_vmid {int num_vmid; scalar_t__* ptb_assigned_to_vmid; } ;



__attribute__((used)) static int FUNC_0(struct core_vmid *VAR_0, uint64_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_vmid; VAR_2++) {
  if (VAR_0->ptb_assigned_to_vmid[VAR_2] == VAR_1)
   return VAR_2;
 }

 return -1;
}
