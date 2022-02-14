
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_mm_scan {scalar_t__ size; scalar_t__ mode; scalar_t__ alignment; scalar_t__ remainder_mask; scalar_t__ hit_start; scalar_t__ hit_end; int range_end; int range_start; int color; struct drm_mm* mm; } ;
struct drm_mm_node {int scanned_block; int node_list; int allocated; struct drm_mm* mm; } ;
struct drm_mm {int (* color_adjust ) (struct drm_mm_node*,int ,scalar_t__*,scalar_t__*) ;int scan_active; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_mm_node*) ;
 scalar_t__ FUNC_2 (struct drm_mm_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct drm_mm_node* FUNC_6 (struct drm_mm_node*,int ) ;
 struct drm_mm_node* FUNC_7 (struct drm_mm_node*,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_10 (struct drm_mm_node*,int ,scalar_t__*,scalar_t__*) ;

bool FUNC_11(struct drm_mm_scan *VAR_2,
      struct drm_mm_node *VAR_3)
{
 struct drm_mm *VAR_4 = VAR_2->mm;
 struct drm_mm_node *VAR_5;
 u64 VAR_6, VAR_7;
 u64 VAR_8, VAR_9;
 u64 VAR_10, VAR_11;

 FUNC_0(VAR_3->mm != VAR_4);
 FUNC_0(!VAR_3->allocated);
 FUNC_0(VAR_3->scanned_block);
 VAR_3->scanned_block = 1;
 VAR_4->scan_active++;






 VAR_5 = FUNC_7(VAR_3, VAR_1);
 FUNC_0(FUNC_6(VAR_5, VAR_1) != VAR_3);
 FUNC_3(&VAR_3->node_list);

 VAR_6 = FUNC_2(VAR_5);
 VAR_7 = FUNC_1(VAR_5);

 VAR_8 = VAR_6;
 VAR_9 = VAR_7;
 if (VAR_4->color_adjust)
  VAR_4->color_adjust(VAR_5, VAR_2->color, &VAR_8, &VAR_9);

 VAR_10 = FUNC_8(VAR_8, VAR_2->range_start);
 VAR_11 = FUNC_9(VAR_9, VAR_2->range_end);
 if (VAR_11 <= VAR_10 || VAR_11 - VAR_10 < VAR_2->size)
  return 0;

 if (VAR_2->mode == VAR_0)
  VAR_10 = VAR_11 - VAR_2->size;

 if (VAR_2->alignment) {
  u64 VAR_12;

  if (FUNC_5(VAR_2->remainder_mask))
   VAR_12 = VAR_10 & VAR_2->remainder_mask;
  else
   FUNC_4(VAR_10, VAR_2->alignment, &VAR_12);
  if (VAR_12) {
   VAR_10 -= VAR_12;
   if (VAR_2->mode != VAR_0)
    VAR_10 += VAR_2->alignment;
   if (VAR_10 < FUNC_8(VAR_8, VAR_2->range_start) ||
       FUNC_9(VAR_9, VAR_2->range_end) - VAR_10 < VAR_2->size)
    return 0;

   if (VAR_11 <= VAR_10 ||
       VAR_11 - VAR_10 < VAR_2->size)
    return 0;
  }
 }

 VAR_2->hit_start = VAR_10;
 VAR_2->hit_end = VAR_10 + VAR_2->size;

 FUNC_0(VAR_2->hit_start >= VAR_2->hit_end);
 FUNC_0(VAR_2->hit_start < VAR_6);
 FUNC_0(VAR_2->hit_end > VAR_7);

 return 1;
}
