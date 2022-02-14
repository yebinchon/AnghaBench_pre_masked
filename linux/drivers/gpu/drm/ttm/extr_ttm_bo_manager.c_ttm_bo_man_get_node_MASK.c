
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm {int dummy; } ;
struct ttm_range_manager {int lock; struct drm_mm mm; } ;
struct ttm_place {unsigned long lpfn; int flags; int fpfn; } ;
struct ttm_mem_type_manager {unsigned long size; scalar_t__ priv; } ;
struct ttm_mem_reg {int start; struct drm_mm_node* mm_node; int page_alignment; int num_pages; } ;
struct ttm_buffer_object {int dummy; } ;
struct drm_mm_node {int start; } ;
typedef enum drm_mm_insert_mode { ____Placeholder_drm_mm_insert_mode } drm_mm_insert_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_mm*,struct drm_mm_node*,int ,int ,int ,int ,unsigned long,int) ;
 int FUNC_1 (struct drm_mm_node*) ;
 struct drm_mm_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ttm_mem_type_manager *VAR_5,
          struct ttm_buffer_object *VAR_6,
          const struct ttm_place *VAR_7,
          struct ttm_mem_reg *VAR_8)
{
 struct ttm_range_manager *VAR_9 = (struct ttm_range_manager *) VAR_5->priv;
 struct drm_mm *VAR_10 = &VAR_9->mm;
 struct drm_mm_node *VAR_11;
 enum drm_mm_insert_mode VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_13 = VAR_7->lpfn;
 if (!VAR_13)
  VAR_13 = VAR_5->size;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = VAR_0;
 if (VAR_7->flags & VAR_4)
  VAR_12 = VAR_1;

 FUNC_3(&VAR_9->lock);
 VAR_14 = FUNC_0(VAR_10, VAR_11,
       VAR_8->num_pages,
       VAR_8->page_alignment, 0,
       VAR_7->fpfn, VAR_13, VAR_12);
 FUNC_4(&VAR_9->lock);

 if (FUNC_5(VAR_14)) {
  FUNC_1(VAR_11);
 } else {
  VAR_8->mm_node = VAR_11;
  VAR_8->start = VAR_11->start;
 }

 return 0;
}
