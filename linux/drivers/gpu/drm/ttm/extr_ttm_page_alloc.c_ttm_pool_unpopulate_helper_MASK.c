
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_tt {int state; int caching_state; int page_flags; int num_pages; int * pages; TYPE_2__* bdev; } ;
struct ttm_mem_global {int dummy; } ;
struct TYPE_4__ {TYPE_1__* glob; } ;
struct TYPE_3__ {struct ttm_mem_global* mem_glob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ttm_mem_global*,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ttm_tt *VAR_2, unsigned VAR_3)
{
 struct ttm_mem_global *VAR_4 = VAR_2->bdev->glob->mem_glob;
 unsigned VAR_5;

 if (VAR_3 == 0)
  goto put_pages;

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  if (!VAR_2->pages[VAR_5])
   continue;

  FUNC_0(VAR_4, VAR_2->pages[VAR_5], VAR_0);
 }

put_pages:
 FUNC_1(VAR_2->pages, VAR_2->num_pages, VAR_2->page_flags,
        VAR_2->caching_state);
 VAR_2->state = VAR_1;
}
