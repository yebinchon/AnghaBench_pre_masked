
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_ib_sriov {int id_map_lock; int cm_list; int pv_id_next; int pv_id_table; } ;
struct id_map_entry {int slave_id; int list; int pv_cm_id; int timeout; TYPE_1__* dev; scalar_t__ scheduled_delete; int sl_cm_id; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct mlx4_ib_sriov sriov; } ;


 int VAR_0 ;
 struct id_map_entry* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct id_map_entry*) ;
 struct id_map_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct ib_device*,char*,int) ;
 int FUNC_6 (struct ib_device*,struct id_map_entry*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct ib_device*) ;
 int FUNC_10 (int *,int *,struct id_map_entry*,int ,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static struct id_map_entry *
FUNC_11(struct ib_device *VAR_4, int VAR_5, u32 VAR_6)
{
 int VAR_7;
 struct id_map_entry *VAR_8;
 struct mlx4_ib_sriov *VAR_9 = &FUNC_9(VAR_4)->sriov;

 VAR_8 = FUNC_3(sizeof (struct id_map_entry), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->sl_cm_id = VAR_6;
 VAR_8->slave_id = VAR_5;
 VAR_8->scheduled_delete = 0;
 VAR_8->dev = FUNC_9(VAR_4);
 FUNC_1(&VAR_8->timeout, VAR_2);

 VAR_7 = FUNC_10(&VAR_9->pv_id_table, &VAR_8->pv_cm_id, VAR_8,
   VAR_3, &VAR_9->pv_id_next, VAR_1);
 if (VAR_7 >= 0) {
  FUNC_7(&VAR_9->id_map_lock);
  FUNC_6(VAR_4, VAR_8);
  FUNC_4(&VAR_8->list, &VAR_9->cm_list);
  FUNC_8(&VAR_9->id_map_lock);
  return VAR_8;
 }


 FUNC_2(VAR_8);
 FUNC_5(VAR_4, "Allocation failed (err:0x%x)\n", VAR_7);
 return FUNC_0(-VAR_0);
}
