
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_policy_ {int dummy; } ;
struct TYPE_2__ {int get_prev_item_func; int get_next_item_func; int get_last_item_func; int get_first_item_func; int remove_item_func; int update_item_func; int add_item_func; int destroy_item_func; int create_item_func; } ;
struct cache_lfu_policy_ {int * groups; TYPE_1__ parent_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cache_policy_* (*) ()) ;
 int FUNC_2 (struct cache_policy_* (*) ()) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct cache_lfu_policy_* FUNC_4 (int,int) ;

struct cache_policy_ *
FUNC_5(void)
{
 int VAR_10;
 struct cache_lfu_policy_ *VAR_11;

 FUNC_1(FUNC_5);
 VAR_11 = FUNC_4(1,
  sizeof(*VAR_11));
 FUNC_3(VAR_11 != ((void*)0));

 VAR_11->parent_data.create_item_func = VAR_2;
 VAR_11->parent_data.destroy_item_func = VAR_3;

 VAR_11->parent_data.add_item_func = VAR_1;
 VAR_11->parent_data.update_item_func = VAR_9;
 VAR_11->parent_data.remove_item_func = VAR_8;

 VAR_11->parent_data.get_first_item_func =
  VAR_4;
 VAR_11->parent_data.get_last_item_func =
  VAR_5;
 VAR_11->parent_data.get_next_item_func =
  VAR_6;
 VAR_11->parent_data.get_prev_item_func =
  VAR_7;

 for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
  FUNC_0(&(VAR_11->groups[VAR_10]));

 FUNC_2(FUNC_5);
 return ((struct cache_policy_ *)VAR_11);
}
