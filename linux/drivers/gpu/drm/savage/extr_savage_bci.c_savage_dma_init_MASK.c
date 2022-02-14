
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nr_dma_pages; scalar_t__ current_dma_page; scalar_t__ first_dma_page; int last_dma_age; TYPE_4__* dma_pages; TYPE_1__* cmd_dma; } ;
typedef TYPE_2__ drm_savage_private_t ;
typedef int drm_savage_dma_page_t ;
struct TYPE_7__ {scalar_t__ flushed; scalar_t__ used; int age; } ;
struct TYPE_5__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 TYPE_4__* FUNC_1 (int,int,int ) ;

__attribute__((used)) static int FUNC_2(drm_savage_private_t * VAR_3)
{
 unsigned int VAR_4;

 VAR_3->nr_dma_pages = VAR_3->cmd_dma->size /
     (VAR_2 * 4);
 VAR_3->dma_pages = FUNC_1(VAR_3->nr_dma_pages,
         sizeof(drm_savage_dma_page_t),
         VAR_1);
 if (VAR_3->dma_pages == ((void*)0))
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_dma_pages; ++VAR_4) {
  FUNC_0(&VAR_3->dma_pages[VAR_4].age, 0, 0);
  VAR_3->dma_pages[VAR_4].used = 0;
  VAR_3->dma_pages[VAR_4].flushed = 0;
 }
 FUNC_0(&VAR_3->last_dma_age, 0, 0);

 VAR_3->first_dma_page = 0;
 VAR_3->current_dma_page = 0;

 return 0;
}
