
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int allocated; int scanned_block; int node_list; struct drm_mm* mm; } ;
struct drm_mm {int interval_tree; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_mm_node*) ;
 scalar_t__ FUNC_2 (struct drm_mm_node*) ;
 int FUNC_3 (struct drm_mm_node*,int *) ;
 int FUNC_4 (int *) ;
 struct drm_mm_node* FUNC_5 (struct drm_mm_node*,int ) ;
 int VAR_0 ;
 int FUNC_6 (struct drm_mm_node*) ;

void FUNC_7(struct drm_mm_node *VAR_1)
{
 struct drm_mm *VAR_2 = VAR_1->mm;
 struct drm_mm_node *VAR_3;

 FUNC_0(!VAR_1->allocated);
 FUNC_0(VAR_1->scanned_block);

 VAR_3 = FUNC_5(VAR_1, VAR_0);

 if (FUNC_2(VAR_1))
  FUNC_6(VAR_1);

 FUNC_3(VAR_1, &VAR_2->interval_tree);
 FUNC_4(&VAR_1->node_list);
 VAR_1->allocated = 0;

 if (FUNC_2(VAR_3))
  FUNC_6(VAR_3);
 FUNC_1(VAR_3);
}
