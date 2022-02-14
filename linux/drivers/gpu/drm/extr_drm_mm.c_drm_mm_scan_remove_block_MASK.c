
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mm_scan {scalar_t__ hit_start; scalar_t__ hit_end; TYPE_1__* mm; } ;
struct drm_mm_node {int scanned_block; scalar_t__ start; scalar_t__ size; int node_list; TYPE_1__* mm; } ;
struct TYPE_2__ {int scan_active; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct drm_mm_node*,int ) ;
 struct drm_mm_node* FUNC_3 (struct drm_mm_node*,int ) ;
 int VAR_0 ;

bool FUNC_4(struct drm_mm_scan *VAR_1,
         struct drm_mm_node *VAR_2)
{
 struct drm_mm_node *VAR_3;

 FUNC_0(VAR_2->mm != VAR_1->mm);
 FUNC_0(!VAR_2->scanned_block);
 VAR_2->scanned_block = 0;

 FUNC_0(!VAR_2->mm->scan_active);
 VAR_2->mm->scan_active--;
 VAR_3 = FUNC_3(VAR_2, VAR_0);
 FUNC_0(FUNC_2(VAR_3, VAR_0) !=
        FUNC_2(VAR_2, VAR_0));
 FUNC_1(&VAR_2->node_list, &VAR_3->node_list);

 return (VAR_2->start + VAR_2->size > VAR_1->hit_start &&
  VAR_2->start < VAR_1->hit_end);
}
