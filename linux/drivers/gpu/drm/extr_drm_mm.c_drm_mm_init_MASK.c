
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int allocated; scalar_t__ size; scalar_t__ start; struct drm_mm* mm; int node_list; } ;
struct drm_mm {scalar_t__ scan_active; TYPE_1__ head_node; int holes_addr; void* holes_size; void* interval_tree; int hole_stack; int * color_adjust; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct drm_mm *VAR_2, u64 VAR_3, u64 VAR_4)
{
 FUNC_0(VAR_3 + VAR_4 <= VAR_3);

 VAR_2->color_adjust = ((void*)0);

 FUNC_1(&VAR_2->hole_stack);
 VAR_2->interval_tree = VAR_1;
 VAR_2->holes_size = VAR_1;
 VAR_2->holes_addr = VAR_0;


 FUNC_1(&VAR_2->head_node.node_list);
 VAR_2->head_node.allocated = 0;
 VAR_2->head_node.mm = VAR_2;
 VAR_2->head_node.start = VAR_3 + VAR_4;
 VAR_2->head_node.size = -VAR_4;
 FUNC_2(&VAR_2->head_node);

 VAR_2->scan_active = 0;
}
