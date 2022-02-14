
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_tt {int page_flags; size_t num_pages; TYPE_2__* bdev; TYPE_1__** pages; } ;
typedef size_t pgoff_t ;
struct TYPE_4__ {int dev_mapping; } ;
struct TYPE_3__ {int mapping; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ttm_tt *VAR_1)
{
 pgoff_t VAR_2;

 if (VAR_1->page_flags & VAR_0)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pages; ++VAR_2)
  VAR_1->pages[VAR_2]->mapping = VAR_1->bdev->dev_mapping;
}
