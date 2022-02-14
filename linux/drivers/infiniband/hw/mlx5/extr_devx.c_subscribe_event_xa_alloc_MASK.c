
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_devx_event_table {int event_xa; } ;
struct devx_obj_event {int obj_sub_list; int object_ids; int unaffiliated_list; } ;
struct devx_event {int obj_sub_list; int object_ids; int unaffiliated_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct devx_obj_event*) ;
 struct devx_obj_event* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,struct devx_obj_event*,int ) ;
 struct devx_obj_event* FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct mlx5_devx_event_table *VAR_2,
    u32 VAR_3,
    bool VAR_4,
    u32 VAR_5)
{
 struct devx_obj_event *VAR_6;
 struct devx_event *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(&VAR_2->event_xa, VAR_3);
 if (!VAR_7) {
  VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
  if (!VAR_7)
   return -VAR_0;

  FUNC_0(&VAR_7->unaffiliated_list);
  FUNC_3(&VAR_7->object_ids);

  VAR_8 = FUNC_4(&VAR_2->event_xa,
    VAR_3,
    VAR_7,
    VAR_1);
  if (VAR_8) {
   FUNC_1(VAR_7);
   return VAR_8;
  }
 }

 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_5(&VAR_7->object_ids, VAR_5);
 if (!VAR_6) {
  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)

   return -VAR_0;

  VAR_8 = FUNC_4(&VAR_7->object_ids,
    VAR_5,
    VAR_6,
    VAR_1);
  if (VAR_8)
   return VAR_8;
  FUNC_0(&VAR_6->obj_sub_list);
 }

 return 0;
}
