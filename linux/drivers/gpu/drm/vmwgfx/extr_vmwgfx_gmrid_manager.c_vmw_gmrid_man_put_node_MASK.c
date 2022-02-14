
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmwgfx_gmrid_man {int lock; int used_gmr_pages; int gmr_ida; } ;
struct ttm_mem_type_manager {scalar_t__ priv; } ;
struct ttm_mem_reg {int * mm_node; scalar_t__ num_pages; int start; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ttm_mem_type_manager *VAR_0,
       struct ttm_mem_reg *VAR_1)
{
 struct vmwgfx_gmrid_man *VAR_2 =
  (struct vmwgfx_gmrid_man *)VAR_0->priv;

 if (VAR_1->mm_node) {
  FUNC_0(&VAR_2->gmr_ida, VAR_1->start);
  FUNC_1(&VAR_2->lock);
  VAR_2->used_gmr_pages -= VAR_1->num_pages;
  FUNC_2(&VAR_2->lock);
  VAR_1->mm_node = ((void*)0);
 }
}
