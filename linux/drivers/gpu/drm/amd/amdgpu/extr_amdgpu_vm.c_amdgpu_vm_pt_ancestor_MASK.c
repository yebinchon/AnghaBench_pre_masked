
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_vm_pt_cursor {scalar_t__ parent; scalar_t__ entry; int level; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct amdgpu_vm_pt_cursor *VAR_0)
{
 if (!VAR_0->parent)
  return 0;

 --VAR_0->level;
 VAR_0->entry = VAR_0->parent;
 VAR_0->parent = FUNC_0(VAR_0->parent);
 return 1;
}
