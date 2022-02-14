
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int get_prev_item_func; int get_next_item_func; int get_last_item_func; int get_first_item_func; int remove_item_func; int add_item_func; int destroy_item_func; int create_item_func; } ;
struct cache_queue_policy_ {int head; TYPE_1__ parent_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cache_queue_policy_* (*) ()) ;
 int FUNC_2 (struct cache_queue_policy_* (*) ()) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct cache_queue_policy_* FUNC_4 (int,int) ;

__attribute__((used)) static struct cache_queue_policy_ *
FUNC_5(void)
{
 struct cache_queue_policy_ *VAR_8;

 FUNC_1(FUNC_5);
 VAR_8 = FUNC_4(1,
  sizeof(*VAR_8));
 FUNC_3(VAR_8 != ((void*)0));

 VAR_8->parent_data.create_item_func = VAR_1;
 VAR_8->parent_data.destroy_item_func = VAR_2;

 VAR_8->parent_data.add_item_func = VAR_0;
 VAR_8->parent_data.remove_item_func = VAR_7;

 VAR_8->parent_data.get_first_item_func =
  VAR_3;
 VAR_8->parent_data.get_last_item_func =
  VAR_4;
 VAR_8->parent_data.get_next_item_func =
  VAR_5;
 VAR_8->parent_data.get_prev_item_func =
  VAR_6;

 FUNC_0(&VAR_8->head);
 FUNC_2(FUNC_5);
 return (VAR_8);
}
