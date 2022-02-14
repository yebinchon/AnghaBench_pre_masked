
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_vm_pt_cursor {int level; int * entry; int * parent; int pfn; } ;
struct amdgpu_vm {int root; } ;
struct TYPE_2__ {int root_level; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;



__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_0,
          struct amdgpu_vm *VAR_1, uint64_t VAR_2,
          struct amdgpu_vm_pt_cursor *VAR_3)
{
 VAR_3->pfn = VAR_2;
 VAR_3->parent = ((void*)0);
 VAR_3->entry = &VAR_1->root;
 VAR_3->level = VAR_0->vm_manager.root_level;
}
