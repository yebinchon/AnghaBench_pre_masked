
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_vm_pt_cursor {unsigned int pfn; TYPE_1__* entry; TYPE_1__* parent; int level; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_4__ {int bo; } ;
struct TYPE_3__ {struct TYPE_3__* entries; TYPE_2__ base; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct amdgpu_device*,int ) ;
 unsigned int FUNC_2 (struct amdgpu_device*,int ) ;

__attribute__((used)) static bool FUNC_3(struct amdgpu_device *VAR_0,
        struct amdgpu_vm_pt_cursor *VAR_1)
{
 unsigned VAR_2, VAR_3, VAR_4;

 if (!VAR_1->entry->entries)
  return 0;

 FUNC_0(!VAR_1->entry->base.bo);
 VAR_2 = FUNC_1(VAR_0, VAR_1->level);
 VAR_3 = FUNC_2(VAR_0, VAR_1->level);

 ++VAR_1->level;
 VAR_4 = (VAR_1->pfn >> VAR_3) & VAR_2;
 VAR_1->parent = VAR_1->entry;
 VAR_1->entry = &VAR_1->entry->entries[VAR_4];
 return 1;
}
