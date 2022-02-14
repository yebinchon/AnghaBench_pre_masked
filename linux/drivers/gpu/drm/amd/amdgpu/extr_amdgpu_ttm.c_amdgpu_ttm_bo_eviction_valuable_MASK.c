
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_place {unsigned long fpfn; unsigned long lpfn; } ;
struct TYPE_5__ {unsigned long num_pages; int mem_type; struct drm_mm_node* mm_node; } ;
struct TYPE_4__ {int resv; } ;
struct ttm_buffer_object {scalar_t__ type; TYPE_2__ mem; TYPE_1__ base; } ;
struct drm_mm_node {unsigned long start; unsigned long size; } ;
struct dma_resv_list {int shared_count; int * shared; } ;
struct dma_fence {int dummy; } ;
struct TYPE_6__ {int mm; } ;




 scalar_t__ FUNC_0 (struct dma_fence*,int ) ;
 TYPE_3__* VAR_0 ;
 struct dma_resv_list* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 struct dma_fence* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ttm_buffer_object*,struct ttm_place const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_6(struct ttm_buffer_object *VAR_2,
         const struct ttm_place *VAR_3)
{
 unsigned long VAR_4 = VAR_2->mem.num_pages;
 struct drm_mm_node *VAR_5 = VAR_2->mem.mm_node;
 struct dma_resv_list *VAR_6;
 struct dma_fence *VAR_7;
 int VAR_8;




 if (VAR_2->type == VAR_1 &&
     !FUNC_3(VAR_2->base.resv, 1))
  return 0;





 VAR_6 = FUNC_1(VAR_2->base.resv);
 if (VAR_6) {
  for (VAR_8 = 0; VAR_8 < VAR_6->shared_count; ++VAR_8) {
   VAR_7 = FUNC_4(VAR_6->shared[VAR_8],
    FUNC_2(VAR_2->base.resv));
   if (FUNC_0(VAR_7, VAR_0->mm))
    return 0;
  }
 }

 switch (VAR_2->mem.mem_type) {
 case 129:
  return 1;

 case 128:

  while (VAR_4) {
   if (VAR_3->fpfn < (VAR_5->start + VAR_5->size) &&
       !(VAR_3->lpfn && VAR_3->lpfn <= VAR_5->start))
    return 1;

   VAR_4 -= VAR_5->size;
   ++VAR_5;
  }
  return 0;

 default:
  break;
 }

 return FUNC_5(VAR_2, VAR_3);
}
