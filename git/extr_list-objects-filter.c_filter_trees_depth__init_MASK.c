
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_objects_filter_options {int tree_exclude_depth; } ;
struct filter_trees_depth_data {scalar_t__ current_depth; int exclude_depth; int seen_at_depth; } ;
struct filter {int free_fn; int filter_object_fn; struct filter_trees_depth_data* filter_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct filter_trees_depth_data* FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(
 struct list_objects_filter_options *VAR_2,
 struct filter *VAR_3)
{
 struct filter_trees_depth_data *VAR_4 = FUNC_1(1, sizeof(*VAR_4));
 FUNC_0(&VAR_4->seen_at_depth, 0);
 VAR_4->exclude_depth = VAR_2->tree_exclude_depth;
 VAR_4->current_depth = 0;

 VAR_3->filter_data = VAR_4;
 VAR_3->filter_object_fn = VAR_0;
 VAR_3->free_fn = VAR_1;
}
