
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_vm {int max_pde_used; TYPE_1__* page_tables; TYPE_2__* page_directory; } ;
struct radeon_device {int dummy; } ;
struct TYPE_6__ {int num_shared; int head; int * bo; } ;
struct radeon_bo_list {TYPE_3__ tv; scalar_t__ tiling_flags; TYPE_2__* robj; void* allowed_domains; void* preferred_domains; } ;
struct list_head {int dummy; } ;
struct TYPE_5__ {int tbo; } ;
struct TYPE_4__ {TYPE_2__* bo; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct radeon_bo_list* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;

struct radeon_bo_list *FUNC_2(struct radeon_device *VAR_2,
       struct radeon_vm *VAR_3,
       struct list_head *VAR_4)
{
 struct radeon_bo_list *VAR_5;
 unsigned VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_3->max_pde_used + 2,
        sizeof(struct radeon_bo_list), VAR_0);
 if (!VAR_5)
  return ((void*)0);


 VAR_5[0].robj = VAR_3->page_directory;
 VAR_5[0].preferred_domains = VAR_1;
 VAR_5[0].allowed_domains = VAR_1;
 VAR_5[0].tv.bo = &VAR_3->page_directory->tbo;
 VAR_5[0].tv.num_shared = 1;
 VAR_5[0].tiling_flags = 0;
 FUNC_1(&VAR_5[0].tv.head, VAR_4);

 for (VAR_6 = 0, VAR_7 = 1; VAR_6 <= VAR_3->max_pde_used; VAR_6++) {
  if (!VAR_3->page_tables[VAR_6].bo)
   continue;

  VAR_5[VAR_7].robj = VAR_3->page_tables[VAR_6].bo;
  VAR_5[VAR_7].preferred_domains = VAR_1;
  VAR_5[VAR_7].allowed_domains = VAR_1;
  VAR_5[VAR_7].tv.bo = &VAR_5[VAR_7].robj->tbo;
  VAR_5[VAR_7].tv.num_shared = 1;
  VAR_5[VAR_7].tiling_flags = 0;
  FUNC_1(&VAR_5[VAR_7++].tv.head, VAR_4);
 }

 return VAR_5;
}
