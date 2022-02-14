
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_6__ {TYPE_1__* bo; } ;
struct TYPE_7__ {TYPE_2__ base; } ;
struct amdgpu_vm {TYPE_3__ root; } ;
struct TYPE_8__ {int num_shared; int head; int * bo; } ;
struct amdgpu_bo_list_entry {TYPE_4__ tv; int * user_pages; scalar_t__ priority; } ;
struct TYPE_5__ {int tbo; } ;


 int FUNC_0 (int *,struct list_head*) ;

void FUNC_1(struct amdgpu_vm *VAR_0,
    struct list_head *VAR_1,
    struct amdgpu_bo_list_entry *VAR_2)
{
 VAR_2->priority = 0;
 VAR_2->tv.bo = &VAR_0->root.base.bo->tbo;

 VAR_2->tv.num_shared = 3;
 VAR_2->user_pages = ((void*)0);
 FUNC_0(&VAR_2->tv.head, VAR_1);
}
