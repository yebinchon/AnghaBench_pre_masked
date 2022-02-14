
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_mm_node {scalar_t__ start; scalar_t__ size; scalar_t__ hole_size; int allocated; int node_list; struct drm_mm* mm; int color; } ;
struct drm_mm {int (* color_adjust ) (struct drm_mm_node*,int ,scalar_t__*,scalar_t__*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_mm_node*) ;
 int FUNC_1 (struct drm_mm_node*) ;
 int FUNC_2 (struct drm_mm_node*,struct drm_mm_node*) ;
 struct drm_mm_node* FUNC_3 (struct drm_mm*,scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct drm_mm_node*) ;
 int FUNC_6 (struct drm_mm_node*) ;
 int FUNC_7 (struct drm_mm_node*,int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct drm_mm *VAR_1, struct drm_mm_node *VAR_2)
{
 u64 VAR_3 = VAR_2->start + VAR_2->size;
 struct drm_mm_node *VAR_4;
 u64 VAR_5, VAR_6;
 u64 VAR_7, VAR_8;

 VAR_3 = VAR_2->start + VAR_2->size;
 if (FUNC_8(VAR_3 <= VAR_2->start))
  return -VAR_0;


 VAR_4 = FUNC_3(VAR_1, VAR_2->start);
 if (!VAR_4)
  return -VAR_0;

 VAR_7 = VAR_5 = FUNC_0(VAR_4);
 VAR_8 = VAR_6 = VAR_5 + VAR_4->hole_size;

 if (VAR_1->color_adjust)
  VAR_1->color_adjust(VAR_4, VAR_2->color, &VAR_7, &VAR_8);

 if (VAR_7 > VAR_2->start || VAR_8 < VAR_3)
  return -VAR_0;

 VAR_2->mm = VAR_1;

 FUNC_4(&VAR_2->node_list, &VAR_4->node_list);
 FUNC_2(VAR_4, VAR_2);
 VAR_2->allocated = 1;
 VAR_2->hole_size = 0;

 FUNC_5(VAR_4);
 if (VAR_2->start > VAR_5)
  FUNC_1(VAR_4);
 if (VAR_3 < VAR_6)
  FUNC_1(VAR_2);

 FUNC_6(VAR_2);
 return 0;
}
