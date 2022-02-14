
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_sriov_alias_guid_info_rec_det {int guid_indexes; int all_recs; } ;
struct mlx4_next_alias_guid_work {int port; int block_num; int method; struct mlx4_sriov_alias_guid_info_rec_det rec_det; } ;
struct TYPE_5__ {int ag_work_lock; TYPE_1__* ports_guid; int sa_client; } ;
struct TYPE_6__ {int going_down_lock; TYPE_2__ alias_guid; int is_going_down; } ;
struct mlx4_ib_dev {TYPE_3__ sriov; } ;
struct mlx4_alias_guid_work_context {int port; int block_num; int guid_indexes; scalar_t__ query_id; int list; int sa_query; int done; int method; struct mlx4_ib_dev* dev; } ;
struct list_head {int dummy; } ;
struct ib_sa_guidinfo_rec {scalar_t__ state; int block_num; int guid_info_list; int lid; } ;
struct ib_port_attr {scalar_t__ state; int block_num; int guid_info_list; int lid; } ;
struct ib_device {int dummy; } ;
typedef int ib_sa_comp_mask ;
typedef int attr ;
struct TYPE_4__ {int alias_guid_work; int wq; struct list_head cb_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ib_device*,int,struct ib_sa_guidinfo_rec*,int) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct ib_device*,int,struct ib_sa_guidinfo_rec*,int,int ,int,int ,int ,struct mlx4_alias_guid_work_context*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx4_ib_dev*,int,int) ;
 int FUNC_5 (struct mlx4_alias_guid_work_context*) ;
 struct mlx4_alias_guid_work_context* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,struct list_head*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct ib_sa_guidinfo_rec*,int ,int) ;
 int FUNC_11 (char*,int,...) ;
 int FUNC_12 (int ,int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 struct mlx4_ib_dev* FUNC_15 (struct ib_device*) ;

__attribute__((used)) static int FUNC_16(struct ib_device *VAR_10,
   struct mlx4_next_alias_guid_work *VAR_11)
{
 int VAR_12;
 struct mlx4_ib_dev *VAR_13 = FUNC_15(VAR_10);
 struct ib_sa_guidinfo_rec VAR_14;
 ib_sa_comp_mask VAR_15;
 struct ib_port_attr VAR_16;
 struct mlx4_alias_guid_work_context *VAR_17;
 unsigned long VAR_18, VAR_19, VAR_20;
 u8 VAR_21 = VAR_11->port + 1;
 int VAR_22 = VAR_11->block_num;
 struct mlx4_sriov_alias_guid_info_rec_det *VAR_23 = &VAR_11->rec_det;
 struct list_head *VAR_24 =
  &VAR_13->sriov.alias_guid.ports_guid[VAR_21 - 1].cb_list;

 FUNC_10(&VAR_16, 0, sizeof(VAR_16));
 VAR_12 = FUNC_0(VAR_10, VAR_21, &VAR_16, 1);
 if (VAR_12) {
  FUNC_11("mlx4_ib_query_port failed (err: %d), port: %d\n",
    VAR_12, VAR_21);
  return VAR_12;
 }

 if (VAR_16.state != VAR_5) {
  FUNC_11("port %d not active...rescheduling\n", VAR_21);
  VAR_18 = 5 * VAR_4;
  VAR_12 = -VAR_0;
  goto new_schedule;
 }

 VAR_17 = FUNC_6(sizeof *VAR_17, VAR_2);
 if (!VAR_17) {
  VAR_12 = -VAR_1;
  VAR_18 = VAR_4 * 5;
  goto new_schedule;
 }
 VAR_17->port = VAR_21;
 VAR_17->dev = VAR_13;
 VAR_17->block_num = VAR_22;
 VAR_17->guid_indexes = VAR_23->guid_indexes;
 VAR_17->method = VAR_11->method;

 FUNC_10(&VAR_14, 0, sizeof (struct ib_sa_guidinfo_rec));

 VAR_14.lid = FUNC_1(VAR_16.lid);
 VAR_14.block_num = VAR_22;

 FUNC_9(VAR_14.guid_info_list, VAR_23->all_recs,
        VAR_3 * VAR_8);
 VAR_15 = VAR_7 | VAR_6 |
  VAR_23->guid_indexes;

 FUNC_3(&VAR_17->done);
 FUNC_13(&VAR_13->sriov.alias_guid.ag_work_lock, VAR_20);
 FUNC_7(&VAR_17->list, VAR_24);
 FUNC_14(&VAR_13->sriov.alias_guid.ag_work_lock, VAR_20);

 VAR_17->query_id =
  FUNC_2(VAR_13->sriov.alias_guid.sa_client,
       VAR_10, VAR_21, &VAR_14,
       VAR_15, VAR_11->method, 1000,
       VAR_2, VAR_9,
       VAR_17,
       &VAR_17->sa_query);
 if (VAR_17->query_id < 0) {
  FUNC_11("ib_sa_guid_info_rec_query failed, query_id: "
    "%d. will reschedule to the next 1 sec.\n",
    VAR_17->query_id);
  FUNC_13(&VAR_13->sriov.alias_guid.ag_work_lock, VAR_20);
  FUNC_8(&VAR_17->list);
  FUNC_5(VAR_17);
  FUNC_14(&VAR_13->sriov.alias_guid.ag_work_lock, VAR_20);
  VAR_18 = 1 * VAR_4;
  VAR_12 = -VAR_0;
  goto new_schedule;
 }
 VAR_12 = 0;
 goto out;

new_schedule:
 FUNC_13(&VAR_13->sriov.going_down_lock, VAR_19);
 FUNC_13(&VAR_13->sriov.alias_guid.ag_work_lock, VAR_20);
 FUNC_4(VAR_13, VAR_21, VAR_22);
 if (!VAR_13->sriov.is_going_down) {
  FUNC_12(VAR_13->sriov.alias_guid.ports_guid[VAR_21 - 1].wq,
       &VAR_13->sriov.alias_guid.ports_guid[VAR_21 - 1].alias_guid_work,
       VAR_18);
 }
 FUNC_14(&VAR_13->sriov.alias_guid.ag_work_lock, VAR_20);
 FUNC_14(&VAR_13->sriov.going_down_lock, VAR_19);

out:
 return VAR_12;
}
