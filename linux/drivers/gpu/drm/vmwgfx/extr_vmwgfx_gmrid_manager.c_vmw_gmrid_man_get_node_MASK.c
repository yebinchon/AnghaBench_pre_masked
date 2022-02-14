
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmwgfx_gmrid_man {scalar_t__ max_gmr_pages; scalar_t__ used_gmr_pages; int gmr_ida; int lock; scalar_t__ max_gmr_ids; } ;
struct ttm_place {int dummy; } ;
struct ttm_mem_type_manager {scalar_t__ priv; } ;
struct ttm_mem_reg {int start; scalar_t__ num_pages; struct vmwgfx_gmrid_man* mm_node; } ;
struct ttm_buffer_object {scalar_t__ num_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ttm_mem_type_manager *VAR_2,
      struct ttm_buffer_object *VAR_3,
      const struct ttm_place *VAR_4,
      struct ttm_mem_reg *VAR_5)
{
 struct vmwgfx_gmrid_man *VAR_6 =
  (struct vmwgfx_gmrid_man *)VAR_2->priv;
 int VAR_7;

 VAR_5->mm_node = ((void*)0);

 VAR_7 = FUNC_0(&VAR_6->gmr_ida, VAR_6->max_gmr_ids - 1, VAR_1);
 if (VAR_7 < 0)
  return (VAR_7 != -VAR_0 ? 0 : VAR_7);

 FUNC_2(&VAR_6->lock);

 if (VAR_6->max_gmr_pages > 0) {
  VAR_6->used_gmr_pages += VAR_3->num_pages;
  if (FUNC_4(VAR_6->used_gmr_pages > VAR_6->max_gmr_pages))
   goto nospace;
 }

 VAR_5->mm_node = VAR_6;
 VAR_5->start = VAR_7;
 VAR_5->num_pages = VAR_3->num_pages;

 FUNC_3(&VAR_6->lock);
 return 0;

nospace:
 VAR_6->used_gmr_pages -= VAR_3->num_pages;
 FUNC_3(&VAR_6->lock);
 FUNC_1(&VAR_6->gmr_ida, VAR_7);
 return 0;
}
