
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct core_vmid {int num_vmid; scalar_t__* ptb_assigned_to_vmid; } ;



__attribute__((used)) static int FUNC_0(struct core_vmid *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 < VAR_0->num_vmid; VAR_1++) {
  if (VAR_0->ptb_assigned_to_vmid[VAR_1] == 0)
   return VAR_1;
 }

 return -1;
}
