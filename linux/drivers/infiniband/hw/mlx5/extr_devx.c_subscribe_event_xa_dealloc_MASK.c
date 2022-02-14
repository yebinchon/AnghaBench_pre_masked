
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_devx_event_table {int event_xa; } ;
struct devx_obj_event {int obj_sub_list; } ;
struct devx_event {int object_ids; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct devx_obj_event*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 void* FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct mlx5_devx_event_table *VAR_1,
      u32 VAR_2,
      bool VAR_3,
      u32 VAR_4)
{
 struct devx_event *VAR_5;
 struct devx_obj_event *VAR_6;


 if (!VAR_3)
  return;

 VAR_5 = FUNC_4(&VAR_1->event_xa, VAR_2);
 FUNC_0(!VAR_5);

 VAR_6 = FUNC_4(&VAR_5->object_ids,
    VAR_4);
 if (FUNC_2(&VAR_6->obj_sub_list)) {
  FUNC_3(&VAR_5->object_ids,
    VAR_4);
  FUNC_1(VAR_6, VAR_0);
 }
}
