
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int event_xa; } ;
struct mlx5_ib_dev {TYPE_1__ devx_event_table; } ;
struct devx_obj_event {int obj_sub_list; } ;
struct devx_event_subscription {int is_cleaned; int xa_key_level2; int xa_key_level1; int obj_list; int xa_list; } ;
struct devx_event {int object_ids; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct devx_obj_event*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct mlx5_ib_dev *VAR_1,
          struct devx_event_subscription *VAR_2)
{
 struct devx_event *VAR_3;
 struct devx_obj_event *VAR_4;

 if (VAR_2->is_cleaned)
  return;

 VAR_2->is_cleaned = 1;
 FUNC_2(&VAR_2->xa_list);

 if (FUNC_3(&VAR_2->obj_list))
  return;

 FUNC_2(&VAR_2->obj_list);

 VAR_3 = FUNC_5(&VAR_1->devx_event_table.event_xa,
   VAR_2->xa_key_level1);
 FUNC_0(!VAR_3);

 VAR_4 = FUNC_5(&VAR_3->object_ids, VAR_2->xa_key_level2);
 if (FUNC_3(&VAR_4->obj_sub_list)) {
  FUNC_4(&VAR_3->object_ids,
    VAR_2->xa_key_level2);
  FUNC_1(VAR_4, VAR_0);
 }
}
