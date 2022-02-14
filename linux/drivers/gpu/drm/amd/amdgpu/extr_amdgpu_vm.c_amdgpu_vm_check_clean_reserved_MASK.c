
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* entries; } ;
struct amdgpu_vm {TYPE_4__ root; } ;
struct TYPE_5__ {int root_level; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;
typedef enum amdgpu_vm_level { ____Placeholder_amdgpu_vm_level } amdgpu_vm_level ;
struct TYPE_6__ {scalar_t__ bo; } ;
struct TYPE_7__ {TYPE_2__ base; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_1,
 struct amdgpu_vm *VAR_2)
{
 enum amdgpu_vm_level VAR_3 = VAR_1->vm_manager.root_level;
 unsigned int VAR_4 = FUNC_0(VAR_1, VAR_3);
 unsigned int VAR_5 = 0;

 if (!(VAR_2->root.entries))
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_2->root.entries[VAR_5].base.bo)
   return -VAR_0;
 }

 return 0;
}
